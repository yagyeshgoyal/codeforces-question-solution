#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<unordered_map>
#include<queue>
#include<cmath>
#include<bits/stdc++.h>
using namespace std;

int findans(vector<int>&brr, int node){
    if(brr[node] == node){
        return node;
    }

    return brr[node] = findans(brr,brr[node]);
}


int main()
{
    int n,m;
    cin>>n>>m;

    vector<long long int>arr(n+1,1);
    vector<bool>visited(n+1,false);
    vector<int>brr(n+1,0);
    for(int i=0; i<=n; i++){
        brr[i] = i;
    }

    while(m--){
        int a;
        cin>>a;

        vector<int>v;
        for(int i=0; i<a; i++){
            int b;
            cin>>b;
            v.push_back(b);
        }

        int temp;
        bool flage = false;

        for(int i=0; i<a; i++){
            if(visited[v[i]]){
                flage = true;
                temp = v[i];
            }
        }

        if (flage) {
            temp = findans(brr, temp);
            for (auto i : v) {
                int ri = findans(brr, i);
                if (ri == temp) continue;
                brr[ri] = temp;
                arr[temp] += arr[ri];
            }
        } else if (!v.empty()) {
            temp = findans(brr, v[0]);
            visited[v[0]] = true;
            for (auto i : v) {
                int ri = findans(brr, i);
                if (ri == temp) continue;
                visited[i] = true;
                brr[ri] = temp;
                arr[temp] += arr[ri];
            }
        }


        
    }

    for(int i = 1; i<=n; i++){
        int ind = findans(brr,i);

        cout<<arr[ind]<<" ";
    }
    cout<<endl;


    return 0;
}