#include<iostream>
#define modu 1000000007
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--){
        long long int n,k;
        cin>>n>>k;

        if(k==1){
            cout<<n<<endl;
        }
        else{
            int count = 2;
            int p0 = 1;
            int p1 = 1;

            while(true){
                count = (count+1)%modu;
                int m = (p0 + p1)%modu;

                if((m+modu)%k == 0){
                    break;
                }
                p0 = p1;
                p1 = m;
            }

            if(count == 0){
                count = modu;
            }

            int ans = (1ll*(n%modu)*count)%modu;
            cout<<ans<<endl;
        }
    }


    return 0;
}