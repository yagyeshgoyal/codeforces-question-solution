#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--){
        int n,k;
        cin>>n>>k;

        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }

        int a = arr[0];
        for(int i=1; i<n; i++) a = __gcd(a,arr[i]);

        int i=0;

        if(n>1){

            int ans = -1;
            int i=1;
            while(i<n && k>0){
                int p = i*a - (i-1)*a;
                p--;

                if(p<k){
                    k = k-p;
                }
                else{
                    ans = (i-1)*a + k;
                    k=0;
                }
                i++;
            }

            if(ans != -1){
                cout<<ans<<endl;
            }
            else{
                ans = (n-1)*a + k;
                cout<<ans<<endl;
            }
        }
        else{

            if(arr[0]<k){
                cout<<k<<endl;
            }
            else{
                cout<<k-1<<endl;
            }
        }
        
    }


    return 0;
}