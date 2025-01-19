#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }

        string ans ;
        int count = 0;
        int num = arr[0];
        int last ;
        ans.push_back('1');

        for(int i=1; i<n; i++){
            if(count == 0){
                if(arr[i-1]>arr[i] && arr[i] > arr[0]){
                    ans.push_back('0');
                    count = 2;
                    last = arr[i-1];
                    // cout<<"10"<<" "<<i<<endl;
                }
                else if(arr[i-1]>arr[i]){
                    ans.push_back('1');
                    count = 1;
                    last = arr[i];
                    // cout<<"11"<<" "<<i<<endl;
                }
                else{
                    ans.push_back('1');
                    // cout<<"11"<<" "<<i<<endl;
                }
            }
            else if(count == 1){
                if(arr[i] < last ){
                    ans.push_back('0');
                    // cout<<"20"<<" "<<i<<endl;
                }
                else if(arr[i] == last){
                    ans.push_back('1');
                    // cout<<"21"<<" "<<i<<endl;
                }
                else if(arr[i] > last && arr[i] <= arr[0]){
                    ans.push_back('1');
                    last = arr[i];
                    // cout<<"21"<<" "<<i<<endl;
                }
                else{
                    ans.push_back('0');
                    // cout<<"20"<<" "<<i<<endl;
                }
            }
            else if(count == 2){
                if(arr[i]>=last){
                    ans.push_back('1');
                    last = arr[i];
                    // cout<<"31"<<" "<<i<<endl;
                }
                else if(arr[i] < last && arr[i] <= arr[0]){
                    ans.push_back('1');
                    last = arr[i];
                    count = 1;
                    // cout<<"k"<<i<<endl;
                    // cout<<"31"<<" "<<i<<endl;
                }
                else{
                    ans.push_back('0');
                    // cout<<"30"<<" "<<i<<endl;
                }
            }
        }

        cout<<ans<<endl;

    }


    return 0;
}