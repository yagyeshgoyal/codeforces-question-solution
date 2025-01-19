#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--){
        int a,b,c;
        cin>>a>>b>>c;

        if(a>b){
            int k = (a/c);
            if(a%c != 0){
                k++;
            }

            long long int ans = 1ll*2*k;
            ans = ans -1;

            cout<<ans<<endl;

        }
        else{
            int k = b/c;
            if(b%c != 0){
                k++;
            }

            long long int ans = 1ll*2*k;
            cout<<ans<<endl;
        }
    }


    return 0;
}