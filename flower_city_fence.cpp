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
        // int maxy = 0;
        for(int i=0; i<n; i++){
            cin>>arr[i];
            // maxy = max(maxy,arr[i]);
        }

        if(arr[0] == n){
            // int temp[n] = {0};
            // for(int i=0; i<n; i++){
            //     for(int j=0; j<arr[i]; j++){
            //         temp[j]++;
            //     }
            // }
            vector<int>temp;

            for(int i=n-1; i>=0; i--){
                while(temp.size() < arr[i]){
                    temp.push_back(i+1);
                }
            }

            bool flage = false;
            for(int i=0; i<n; i++){
                if(arr[i] != temp[i]){
                    flage = true;
                    break;
                }
            }

            if(flage){
                cout<<"NO"<<endl;
            }
            else{
                cout<<"YES"<<endl;
            }
        }
        else{
            cout<<"NO"<<endl;
        }
    }


    return 0;
}