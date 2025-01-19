#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;

    // long long int arr[0];
    // arr[0]=1;
    // long long int p=1;
    
    while(t--){
        long long int k;
        cin>>k;

        
        // for(int i=p; i<k; i++){
        //     arr[i] = arr[i-1]*i;
        // }

        // p = max<long long int>(p,k);

        long long int ans = -1;
        // for(int i=k-1; i>=1; i--){
        //     if((arr[i]+arr[i-1])%k == 0){
        //         ans = i;
        //         break;
        //     }
        // }
        cout<<k-1<<endl;
    }


    return 0;
}