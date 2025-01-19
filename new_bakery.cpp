#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--){
        int n,a,b;
        cin>>n>>a>>b;

        if(a>=b){
            cout<<1ll*n*a<<endl;
        }
        else{
            int i = b-a;

            long long int ans=0;

            if(i<n){
                int k = b-i-1;
                ans = (1ll*b*(b+1))/2  - (1ll*k*(k+1))/2;
                ans = ans + 1ll*(max(n-i-1,0))*a;
            }
            else{
                int k = b-n;
                ans = (1ll*b*(b+1))/2 - (1ll*k*(k+1))/2;
            }
            
            // for(i=0; i<n; i++){
            //     if(b-i>a){
            //         ans = ans + b-i;
            //     }
            //     else{
            //         break;
            //     }
            // }

            

            cout<<ans<<endl;
        }
    }


    return 0;
}