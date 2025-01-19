#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int k;
    cin>>k;
    int mod = 1000000007;
    vector<int>v;
    for(int i=0; i<k; i++){
        int a ;
        cin>>a;

        v.push_back(a);
    }

    vector<bool>visited(n, false);
    queue<int>q;
    for(auto  i : v){
        visited[i-1] = true;
        q.push(i-1);
    }

    long long int ans = 1;

    while(!q.empty()){
        int s = q.size();
        int count = 0;

        while(s--){
            int a  = q.front();
            q.pop();

            if(a-1>=0 && visited[a-1] == false){
                visited[a-1] = true;
                q.push(a-1);
                count++;
            }
            if(a+1<n && visited[a+1] == false){
                visited[a+1] = true;
                q.push(a+1);
                count++;
            }

        }
        // cout<<count<<endl;

        if(count >1 )
        ans = (1ll*ans*(1ll*count*(count-1))%mod)%mod;
    }

    cout<<ans<<endl;

    


    return 0;
}