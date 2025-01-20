#include <bits/stdc++.h>
using namespace std;


int main()
{
    
    int t;
    cin >> t;
    

   while(t--){
        long long int n,k;
        cin>>n>>k;

        vector<long long int>v(n);
         map<long long int,long long int>mp;
        for(int i=0; i<n; i++){
            int p;
            cin>>p;
            v[i]= p;
            mp[v[i]]++;
        }
        
       

        long long int ans=0;

        for(auto i : mp){
            long long int r = k-i.first;
            
            if(mp.find(r)!=mp.end()){

                ans = ans + min(i.second,mp[r]);
            }
        }

        ans = ans/2;

        cout<<ans<<endl;
        
   }

    return 0;
}