#include<iostream>
#include<map>
#include<vector>
#include<set>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int arr[n];
        map<int,set<int>>mp;
        set<int>st;
        for(int i=0; i<n; i++){
            cin>>arr[i];
            mp[arr[i]].insert(i);
            st.insert(arr[i]);
        }
        vector<pair<int,int>>vp;
        int pos = n-1;
        while(!st.empty()){
            int k = *st.rbegin();

            if(k== arr[pos]){
                mp[k].erase(pos);
                pos--;
            }
            else{
                int mini_pos_of_next_num = *(mp[arr[pos]+1].begin());
                vp.push_back({mini_pos_of_next_num+1,pos+1});
                mp[arr[pos]+1].erase(mini_pos_of_next_num);
                mp[arr[pos]].erase(pos);
                mp[arr[pos]+1].insert(pos);
                mp[arr[pos]].insert(mini_pos_of_next_num);
                swap(arr[pos],arr[mini_pos_of_next_num]);
            }

            if(mp[k].size() == 0){
                st.erase(k);
            }

        }

        cout<<vp.size()<<endl;
        for(auto i : vp){
            cout<<i.first<<" "<<i.second<<endl;
        }
    }


    return 0;
}