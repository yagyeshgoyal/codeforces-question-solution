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
        int n;
        cin>>n;

        int arr[n];
        bool flage =true;
        for(int i=0; i<n; i++){
            cin>>arr[i];
            if(arr[i] == 0){
                flage = false;
            }
        }

        if(flage){
            cout<<1<<endl;
            cout<<1<<" "<<n<<endl;
        }
        else{
            vector<int>p;
            vector<pair<int,int>>ans;
            if(arr[0] == 0){
                ans.push_back({1,2});
                if(arr[1] == 1){
                    p.push_back(2);
                }
                else{
                    p.push_back(1);
                }
                bool flage2 =true;
                for(int i=2; i<n; i++){
                    if(arr[i] != 0){
                        p.push_back(arr[i]);
                    }
                    else{
                        flage2 = false;
                        if(i != n-1){
                            ans.push_back({i,n-1});
                            p.push_back(1);
                            ans.push_back({1,p.size()});
                        }
                        else{
                            ans.push_back({i-1,i});
                            ans.push_back({1,p.size()});
                        }
                        break;
                    }
                }
                if(flage2){
                    ans.push_back({1,p.size()});
                }
            }
            else{
                p.push_back(arr[0]);

                bool flage2 = true;
                for(int i=1; i<n; i++){
                    if(arr[i] != 0){
                        p.push_back(arr[i]);
                    }
                    else{
                        flage2 = false;
                        if(i != n-1){
                            ans.push_back({i+1,n});
                            p.push_back(1);
                            ans.push_back({1,p.size()});
                        }
                        else{
                            ans.push_back({i,i+1});
                            ans.push_back({1,p.size()});
                        }
                        break;
                    }
                }
                if(flage2){
                    ans.push_back({1,p.size()});
                }
            }

            cout<<ans.size()<<endl;
            for(auto i : ans){
                cout<<i.first<<" "<<i.second<<endl;
            }


        }



    }

    return 0;
}