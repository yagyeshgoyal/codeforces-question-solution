#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<unordered_map>
#include<queue>
#include<cmath>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        long long int n,m;
        cin>>n>>m;

        long long int max = (1ll*n*(n+1))/2;
        if(m<n || m>max){
            cout<<-1<<endl;
        }
        else{
            vector<int>v(n+1,0);
            vector<int>visited(n+1,false);

            for(int i=1; i<=n; i++){
                v[i] = i;
            }

            queue<int>q;
            int size= n;
            for(int i=n; i>=1; i--){
                if(i+size-1 <= m){
                    q.push(i);
                    size--;
                    visited[i] = true;
                    m = m-i;
                }
            }

            for(int i=1; i<=n; i++){
                if(visited[i] == false){
                    q.push(i);
                }
            }

            int top = q.front();
            q.pop();
            cout<<top<<endl;
            while(!q.empty()){
                int front = q.front();
                q.pop();

                cout<<top<<" "<<front<<endl;
                top = front;
            }
        }


    }

    return 0;
}