#include<iostream>
#include<vector>
using namespace std;

int main()
{

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        int arr[n];
        int temp[101] = {0};
        for(int i=0;i<n;i++){
            cin>>arr[i];
            temp[arr[i]]++;
        }

        int count = 0;
        for(int i=0; i<101; i++){
            if(temp[i]>=2){
                count++;
            }
        }

        vector<bool> v(101,true);
        int ans[n];
        for(int i=0; i<n; i++){
            ans[i] = 1;
        }
        int sum = 0;

        if(count<2 || n<4){
            cout<<-1<<endl;
        }
        else{
            for(int i=0; i<n; i++){
                if(v[arr[i]] == true){
                    // cout<<"P"<<" ";
                    for(int j=i+1; j<n; j++){
                        if(v[arr[j]]==true && arr[i] == arr[j] && sum == 0){
                            v[arr[j]] = false;
                            ans[j] = 2; 
                            sum++;
                        }
                        else if(v[arr[j]]==true && arr[i] == arr[j] && sum == 1){
                            v[arr[j]] = false;
                            ans[j] = 3; 
                            sum++;
                        }
                    }
                }
            }
            // cout<<sum<<endl;

            for(int i=0; i<n; i++){
                cout<<ans[i]<<" ";
            }
            cout<<endl;
        }

    }

    return 0;
}