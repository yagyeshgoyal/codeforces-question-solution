#include<iostream>
#include<unordered_map>
#include<set>
#include<vector>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--){
        int n,q;
        cin>>n>>q;

        unordered_map<int,int>mp;
        unordered_map<int,int>resultMp;
        set<int>st;
        for(int i=0; i<n; i++){
            int a;
            cin>>a;

            mp[a]++;
            // st.insert(a);
        }

        unordered_map<int,int>currMap;
        vector<int>result;
        int x;

        while(q--){
            cin>>x;
            if(resultMp.count(x)){
                result.push_back(resultMp[x]);
            }
            else{
                for(auto i : mp){
                    if(i.first < x){
                        currMap[i.first] = currMap[i.first] + i.second;
                        st.insert(i.first);
                    }
                    else{
                        currMap[i.first%x] = currMap[i.first%x] + i.second;
                        st.insert(i.first%x);
                    }
                }

                int pos;

                if(n%2 == 0){
                    pos = (n+2)/2;
                }
                else{
                    pos = (n+1)/2;
                }
                int ans = 0;
                for(auto i : st){
                    if(currMap[i] >= pos){
                        ans = i;
                        pos = 0;
                        break;
                    }
                    else{
                        pos = pos - currMap[i];
                    }
                }
                resultMp[x] = ans;
                result.push_back(ans);
                st.clear();
                currMap.clear();
            }

            

        }
        

        for(auto i : result){
            cout<<i<<" ";
        }
        cout<<endl;
    }


    return 0;
}