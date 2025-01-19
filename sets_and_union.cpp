#include<iostream>
#include<vector>
#include<set>
#include<map>
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        map<int,int>mp;
        vector<set<int>>v;
        set<int>setUnion;

        for(int i=0; i<n; i++){
            set<int>s;
            int p;
            cin>>p;


            for(int j=0; j<p; j++){
                int k;
                cin>>k;
                mp[k]++;
                s.insert(k);
                setUnion.insert(k);
            }
            v.push_back(s);

        }


        int ans = 0;

        for(auto i : setUnion){
            map<int,int>temp = mp;
            for(auto j : v){
                if(j.count(i)){
                    for(auto val : j){
                        temp[val]--;
                    }
                }
            }

            int curr = 0;
            for(auto j :temp){
                if(j.second > 0){
                    curr++;
                }
            }

            ans = max(ans,curr);
        }


        cout<<ans<<endl;


        


    }

return 0;
}