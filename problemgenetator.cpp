#include<iostream>
#include<map>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--){
        int n,m;
        cin>>n>>m;

        string s;
        cin>>s;
        map<int,int>mps;
        for(int i=0; i<n; i++){
            mps[s[i]-'A']++;
        }

        long long int  ans = 0;
        for(int i=0; i<7; i++){
            if(mps.count(i)){
                if(mps[i] < m){
                    ans = ans + (m-mps[i]);
                }
            }
            else{
                ans = ans + m;
            }
        }

        cout<<ans<<endl;
    }


    return 0;
}