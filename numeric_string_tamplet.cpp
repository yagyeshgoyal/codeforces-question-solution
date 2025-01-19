#include<iostream>
#include<map>
#include<vector>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int arr[n];
        map<int,vector<int>>mp;
        for(int i=0; i<n; i++){
            cin>>arr[i];
            mp[arr[i]].push_back(i);
        }

        


        int q;
        cin>>q;

        while(q--){
            string syogi ;
            cin>>syogi;

            if(syogi.size() != n){
                cout<<"NO"<<endl;
                continue;
            }

            vector<bool>visited(26,true);

            bool iscorrect = true;

            for(auto i : mp){
                char ch = syogi[i.second[0]];

                if(visited[ch-'a'] == true){
                    visited[ch-'a']  = false;
                }
                else{
                    iscorrect = false;
                    break;
                }

                for(auto j : i.second){
                    if(syogi[j] != ch){
                        iscorrect = false;
                        break;
                    }
                }

                if(iscorrect == false){
                    break;
                }
                
            }

            if(iscorrect){
                    cout<<"YES"<<endl;
                }
                else{
                    cout<<"NO"<<endl;
                }
        }
    }


    return 0;
}