#include<iostream>
#include<cmath>
#include<map>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;

        map<int,int>mp;

        for(int i=1; i<=n; i++){
            int s;
            cin>>s;
            mp[s] = i;
        }

        int ans = 1;
        for(int i=2; i<=n; i++){
            if(mp[i]>mp[i-1])
            ans++;
            else
            break;
        }

        cout<<ceil((n-ans)*1.0/k)<<endl;
    }


    return 0;
}