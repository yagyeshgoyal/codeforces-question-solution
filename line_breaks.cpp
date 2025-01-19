#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--){
        int n,k;
        cin>>n>>k;

        int count = 0;
        int ans = 0;

        for(int i=0; i<n; i++){
            string s;
            cin>>s;

            if(count + s.length() <= k){
                ans++;
                count += s.length();
            }
            else{
                count = k+1;
            }
        }

        cout<<ans<<endl;

    }


    return 0;
}