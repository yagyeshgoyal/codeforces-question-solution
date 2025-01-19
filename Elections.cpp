#include<iostream>
#include<limits.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--){
        int n,k;
        cin>>n>>k;

        long long int arr[n];
        long long int maxi = -1;
        for(int i=0; i<n; i++){
            cin>>arr[i];

            maxi = max(arr[i],maxi);
        }

        long long int maxio = maxi;

        long long int temp = 0;
        long long int count = 0;

        int ans[n] = {0};
        for(int i=0; i<n; i++){
            if(arr[i] ==maxio && (i==0 || arr[0] < maxio-k) ){
                // if{
                    ans[i] = 0;
                // }

                maxio = INT_MAX;
            }
            else if(arr[i]+temp+k >= maxi){
                ans[i] = count;
            }
            else{
                ans[i] = count+1;
            }

            temp = temp + arr[i];
            count++;

        }

        for(int i=0; i<n; i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }


    return 0;
}