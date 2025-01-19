#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--){
        int n,m;
        cin>>n>>m;

        long long int ans = 0;
        int a,b;
        cin>>a>>b;
        int c , d;
        c = a + m;
        d = b + m;
        int num = 4*m;
        ans = ans + num;

        int k = n-1;
        while(k--){
            int p,q;
            cin>>p>>q;
            a = a+ p;
            b = b + q;

            ans = ans +num;

            int diff = 0;

            if(c-a >= 0){
                diff = diff + c-a;
            }

            if(d-b >=0){
                diff = diff + d-b;
            }

            diff = diff*2;

            ans = ans - diff;

            c = a + m;
            d = b + m;

        }

        cout<<ans<<endl;
    }


    return 0;
}