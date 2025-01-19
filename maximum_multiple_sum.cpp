#include<iostream>
using namespace std;

int main()
{

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        long long int ans = 0;
        int index = 0;

        for(int i=2; i<=n; i++){
            int p = n/i;

            if(ans<1ll*(i*p*(p+1))/2){
                index = i;
                ans = 1ll*(i*p*(p+1))/2;
            }
        }

        cout<<index<<endl;


    }

    return 0;
}