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
        int sum = 0;
        int plus = 0;
        int minus = 0;
        for(int i=0; i<n; i++){
            cin>>arr[i];
            if(arr[i] <0){
                minus++;
            }
            else{
                plus++;
            }
        }
        

        // int maxi = sum;

        // for(int i=0; i<n-1; i++){
        //     int temp = sum - arr[i] - arr[i+1];
        //     temp =  temp -arr[i] - arr[i+1];
        //     maxi = max(maxi, temp);
        // }

        // if(n == 2){
        //     cout<<(-arr[0]-arr[1])<<endl;
        // }
        // else{
        //     cout<<maxi<<endl;
        // }

        int count = 0;

        for(int i=1; i<n; i++){
            if(arr[i] == -1 && arr[i-1] == -1){
                // cout<<"p"<<endl;
                count = 2;
                break;
            }
            else if(arr[i] == -1 || arr[i-1] == -1){
                // cout<<"r"<<endl;
                count = 1;
            }
        }

        if(count == 2){
            plus = plus + 2;
            minus = minus - 2;
            cout<<plus-minus<<endl;
        }
        else if(count == 1){
            cout<<plus-minus<<endl;
        }
        else{
            // cout<<"k"<<endl;
            plus = plus - 2;
            minus = minus+2;
            cout<<plus - minus<<endl;
        }
    }

    return 0;
}