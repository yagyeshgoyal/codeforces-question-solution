#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<unordered_map>
#include<limits.h>
using namespace std;

int findMiddle(vector<int>&v, int a, int b){
    int ans = 0;

    int s = 0;
    int e = v.size()-1;

    int mid = s + (e-s)/2;

    while(s<=e){
        if(v[mid]>a && v[mid]<b){
            return mid;
        }
        
        if(v[mid]<=a){
            s = mid+1;
        }
        else if(v[mid]>=b){
            e = mid-1;
        }

        mid = s + (e-s)/2;
    }

    return -1;
}

int findLeft(vector<int>&v, int a){
    int ans = -1;
    int s = 0;
    int e = v.size()-1;

    int mid = s + (e-s)/2;

    while(s<=e){
        
        
        if(v[mid]<a){
            ans = mid;
            s = mid+1;
        }
        else{
            e = mid-1;
        }

        mid = s + (e-s)/2;
    }

    return ans;
}

int findRight(vector<int>&v, int a){
    int ans = -1;
    int s = 0;
    int e = v.size()-1;

    int mid = s + (e-s)/2;

    while(s<=e){
        
        
        if(v[mid]>a){
            ans = mid;
            e = mid-1;
        }
        else{
            s = mid+1;
        }

        mid = s + (e-s)/2;
    }

    return ans;
}

int main()
{
    int t;
    cin>>t;

    while(t--){
        int n,q;
        cin>>n>>q;

        string arr[n];
        unordered_map<string,vector<int>>mp;
        for(int i=0; i<n; i++){
            cin>>arr[i];
            mp[arr[i]].push_back(i);
        }

        while(q--){
            int a,b;
            cin>>a>>b;
            a--;
            b--;

            if(a>b){
                swap(a,b);
            }

            if(arr[a][0] == arr[b][0] || arr[a][1] == arr[b][0] || arr[a][0] == arr[b][1] || arr[a][1] == arr[b][1]){
                cout<<abs(b-a)<<endl;
            }
            else{
                int ans = INT_MAX;
                string p = "br";

                p[0] = arr[a][0];
                p[1] = arr[b][0];

                if(mp.count(p)){
                    
                    // for(auto i : mp[p]){
                    //     if(i != a && i != b){
                    //         ans = min(ans, abs(i-a) + abs(i-b));
                    //     }
                    // }

                    // int k = upper_bound(mp[p].begin(),mp[p].end(),min(a,b)) - mp[p].begin();
                    // // ans = min(ans,mp[p][k-mp[p].begin()]);
                    // int  i = mp[p][k];
                    // ans = min(ans, abs(i-a) + abs(i-b));

                    int k = findMiddle(mp[p],a,b);
                    
                    if(k != -1){
                        ans = min(ans, abs(mp[p][k]-a) + abs(mp[p][k]-b));
                    }
                    else{
                        int k1 = findLeft(mp[p],a);
                        int k2 = findRight(mp[p],b);

                        if(k1 != -1){
                            ans = min(ans, abs(mp[p][k1]-a) + abs(mp[p][k1]-b));
                        }

                        if(k2 != -1){
                            ans = min(ans, abs(mp[p][k2]-a) + abs(mp[p][k2]-b));
                        }
                    }
                }
                
                p[0] = arr[b][0];
                p[1] = arr[a][0];
                if(mp.count(p)){
                    
                    // for(auto i : mp[p]){
                    //     if(i != a && i != b){
                    //         ans = min(ans, abs(i-a) + abs(i-b));
                    //     }
                    // }

                    // int k = upper_bound(mp[p].begin(),mp[p].end(),min(a,b)) - mp[p].begin();
                    // int i = mp[p][k];
                    // ans = min(ans, abs(i-a) + abs(i-b));

                    int k = findMiddle(mp[p],a,b);
                    
                    if(k != -1){
                        ans = min(ans, abs(mp[p][k]-a) + abs(mp[p][k]-b));
                    }
                    else{
                        int k1 = findLeft(mp[p],a);
                        int k2 = findRight(mp[p],b);

                        if(k1 != -1){
                            ans = min(ans, abs(mp[p][k1]-a) + abs(mp[p][k1]-b));
                        }

                        if(k2 != -1){
                            ans = min(ans, abs(mp[p][k2]-a) + abs(mp[p][k2]-b));
                        }
                    }
                }

                p[0] = arr[a][1];
                p[1] = arr[b][0];
                
                if(mp.count(p)){
                    // int ans = INT_MAX;
                    // for(auto i : mp[p]){
                    //     if(i != a && i != b){
                    //         ans = min(ans, abs(i-a) + abs(i-b));
                    //     }
                    // }

                    // int k = upper_bound(mp[p].begin(),mp[p].end(),min(a,b)) - mp[p].begin();
                    // int i = mp[p][k];
                    // ans = min(ans, abs(i-a) + abs(i-b));

                    int k = findMiddle(mp[p],a,b);
                    
                    if(k != -1){
                        ans = min(ans, abs(mp[p][k]-a) + abs(mp[p][k]-b));
                    }
                    else{
                        int k1 = findLeft(mp[p],a);
                        int k2 = findRight(mp[p],b);

                        if(k1 != -1){
                            ans = min(ans, abs(mp[p][k1]-a) + abs(mp[p][k1]-b));
                        }

                        if(k2 != -1){
                            ans = min(ans, abs(mp[p][k2]-a) + abs(mp[p][k2]-b));
                        }
                    }
                }

                p[0] = arr[b][0];
                p[1] = arr[a][1];

                if(mp.count(p)){
                    // int ans = INT_MAX;
                    // for(auto i : mp[p]){
                    //     if(i != a && i != b){
                    //         ans = min(ans, abs(i-a) + abs(i-b));
                    //     }
                    // }

                    // int k = upper_bound(mp[p].begin(),mp[p].end(),min(a,b)) - mp[p].begin();
                    // int i = mp[p][k];
                    // ans = min(ans, abs(i-a) + abs(i-b));

                    int k = findMiddle(mp[p],a,b);
                    
                    if(k != -1){
                        ans = min(ans, abs(mp[p][k]-a) + abs(mp[p][k]-b));
                    }
                    else{
                        int k1 = findLeft(mp[p],a);
                        int k2 = findRight(mp[p],b);

                        if(k1 != -1){
                            ans = min(ans, abs(mp[p][k1]-a) + abs(mp[p][k1]-b));
                        }

                        if(k2 != -1){
                            ans = min(ans, abs(mp[p][k2]-a) + abs(mp[p][k2]-b));
                        }
                    }
                }

                p[0] = arr[a][0];
                p[1] = arr[b][1];
                // cout<<p<<endl;
                // cout<<arr[a][0]<<endl;
                
                 if(mp.count(p)){
                    // int ans = INT_MAX;
                    // for(auto i : mp[p]){
                    //     if(i != a && i != b){
                    //         ans = min(ans, abs(i-a) + abs(i-b));
                    //     }
                    // }

                    // int k = upper_bound(mp[p].begin(),mp[p].end(),min(a,b)) - mp[p].begin();
                    // // cout<<mp[p][i]<<endl;
                    // // cout<<mp[p].size()<<endl;
                    // int i = mp[p][k];
                    // ans = min(ans, abs(i-a) + abs(i-b));

                    int k = findMiddle(mp[p],a,b);
                    
                    if(k != -1){
                        ans = min(ans, abs(mp[p][k]-a) + abs(mp[p][k]-b));
                    }
                    else{
                        int k1 = findLeft(mp[p],a);
                        int k2 = findRight(mp[p],b);

                        if(k1 != -1){
                            ans = min(ans, abs(mp[p][k1]-a) + abs(mp[p][k1]-b));
                        }

                        if(k2 != -1){
                            ans = min(ans, abs(mp[p][k2]-a) + abs(mp[p][k2]-b));
                        }
                    }
                }
                
                p[0] = arr[b][1];
                p[1] = arr[a][0];

                 if(mp.count(p)){
                    // int ans = INT_MAX;
                    // for(auto i : mp[p]){
                    //     if(i != a && i != b){
                    //         ans = min(ans, abs(i-a) + abs(i-b));
                    //     }
                    // }

                    // int k = upper_bound(mp[p].begin(),mp[p].end(),min(a,b)) - mp[p].begin();
                    // int i = mp[p][k];
                    // ans = min(ans, abs(i-a) + abs(i-b));

                    int k = findMiddle(mp[p],a,b);
                    
                    if(k != -1){
                        ans = min(ans, abs(mp[p][k]-a) + abs(mp[p][k]-b));
                    }
                    else{
                        int k1 = findLeft(mp[p],a);
                        int k2 = findRight(mp[p],b);

                        if(k1 != -1){
                            ans = min(ans, abs(mp[p][k1]-a) + abs(mp[p][k1]-b));
                        }

                        if(k2 != -1){
                            ans = min(ans, abs(mp[p][k2]-a) + abs(mp[p][k2]-b));
                        }
                    }
                }
                
                p[0] = arr[a][1];
                p[1] = arr[b][1];

                 if(mp.count(p)){
                    // int ans = INT_MAX;
                    // for(auto i : mp[p]){
                    //     if(i != a && i != b){
                    //         ans = min(ans, abs(i-a) + abs(i-b));
                    //     }
                    // }

                    // int k = upper_bound(mp[p].begin(),mp[p].end(),min(a,b)) - mp[p].begin();
                    //  int i = mp[p][k];
                    // ans = min(ans, abs(i-a) + abs(i-b));

                    int k = findMiddle(mp[p],a,b);
                    
                    if(k != -1){
                        ans = min(ans, abs(mp[p][k]-a) + abs(mp[p][k]-b));
                    }
                    else{
                        int k1 = findLeft(mp[p],a);
                        int k2 = findRight(mp[p],b);

                        if(k1 != -1){
                            ans = min(ans, abs(mp[p][k1]-a) + abs(mp[p][k1]-b));
                        }

                        if(k2 != -1){
                            ans = min(ans, abs(mp[p][k2]-a) + abs(mp[p][k2]-b));
                        }
                    }
                }

                p[0] = arr[b][1];
                p[1] = arr[a][1];

                 if(mp.count(p)){
                    // int ans = INT_MAX;
                    // for(auto i : mp[p]){
                    //     if(i != a && i != b){
                    //         ans = min(ans, abs(i-a) + abs(i-b));
                    //     }
                    // }

                    // int k = upper_bound(mp[p].begin(),mp[p].end(),min(a,b)) - mp[p].begin();
                    //  int i = mp[p][k];
                    // ans = min(ans, abs(i-a) + abs(i-b));

                    int k = findMiddle(mp[p],a,b);
                    
                    if(k != -1){
                        ans = min(ans, abs(mp[p][k]-a) + abs(mp[p][k]-b));
                    }
                    else{
                        int k1 = findLeft(mp[p],a);
                        int k2 = findRight(mp[p],b);

                        if(k1 != -1){
                            ans = min(ans, abs(mp[p][k1]-a) + abs(mp[p][k1]-b));
                        }

                        if(k2 != -1){
                            ans = min(ans, abs(mp[p][k2]-a) + abs(mp[p][k2]-b));
                        }
                    }
                }
                if(ans == INT_MAX){
                    cout<<-1<<endl;
                }
                else{
                    cout<<ans<<endl;
                }
                
            }
        }


    }


    return 0;
}