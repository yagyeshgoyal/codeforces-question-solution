#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--){
        int n,k;
        cin>>n>>k;

        long long int ans = 0;
        int level = 0;
        long long int num = 0;
        int extra = 0;
        if(n&1){
            num = (n+1)/2;
            while(n>=k){
                if(n&1){
                    ans = ans + 1ll*(1<<level)*num;
                }
                level++;
                n = n/2;
            }
        }
        else{
            num = n/2;
            extra = 1;
            while(n>=k){
                if(n&1){
                    ans = ans +1ll*(1<<level)*num + 1ll*(1<<(level-1));  
                }
                level++;
                n = n/2;
            }
        }

        cout<<ans<<endl;

        
    }


    return 0;
}