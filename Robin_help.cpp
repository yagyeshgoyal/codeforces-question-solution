#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--){
        int n,k;
        cin>>n>>k;

        int ans = 0;
        int curr = 0;
        for(int i=0; i<n; i++){
            int a;
            cin>>a;

            if(a == 0 && curr >0){
                curr--;
                ans++;
            }
            else if(a>=k){
                curr = curr + a;
            }
        }

        cout<<ans<<endl;
    }


    return 0;
}