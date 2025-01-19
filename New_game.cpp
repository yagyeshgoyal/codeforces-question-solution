#include<iostream>
#include<set>
#include<map>
#include<vector>
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){
        int n,m;
        cin>>n>>m;

        map<int,int>mp;
        set<int>st;

        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];

            mp[arr[i]]++;
            st.insert(arr[i]);
        }

        vector<vector<int>>v;
        vector<int>temp;
        int k = *st.begin()-1;
        auto it = st.begin();

        while(it != st.end()){
            if(*it == k + 1)
            {
                temp.push_back(*it);
                k = *it;
                it++;
            }
            else{
                v.push_back(temp);
                temp.clear();
                k = *it-1;
            }
        }

        v.push_back(temp);

        int ans = 0;
        for(int i=0; i<v.size(); i++){
            int sum = 0;
            for(int j=0; j<min<int>(v[i].size(),m); j++){
                sum = sum + mp[v[i][j]];
            }

            ans = max(ans,sum);

            for(int j=m; j<v[i].size(); j++){
                sum = sum + mp[v[i][j]] - mp[v[i][j-m]];
                ans = max(ans,sum);
            }
        }

        cout<<ans<<endl;
        

    }

    return 0;
}