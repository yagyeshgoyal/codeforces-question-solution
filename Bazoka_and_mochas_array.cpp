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

        int i=0;
        for( ; i<n-1; i++){
            if(arr[i] > arr[i+1]){
                break;
            }
            // cout<<i<<endl;
        }
        // cout<<i<<endl;
        if((i == n-1 && arr[n-2] <=arr[n-1]) || (i == n-1 && arr[n-1] <= arr[0])){
            cout<<"YES"<<endl;
        }
        else if(i==n-1){
            cout<<"NO"<<endl;
        }
        else{
            int small = arr[i+1];
            int big = arr[0];

            bool flage = true;

            i++;
            while(i<n){
                if(arr[i]>=small && arr[i]<=big){
                    small = arr[i];
                    i++;
                }
                else{
                    flage = false;
                    break;
                }
            }

            if(flage){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }


    return 0;
}