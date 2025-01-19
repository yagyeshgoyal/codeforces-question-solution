#include<iostream>
#include<vector>
#include<map>
#include<set>
#include<queue>
using namespace std;

void storeInMap(map<int,int>&mp, int a, int b,map<int,vector<int>>&mp2){
    if(mp.count(b)){
        mp[a]= max(mp[b],mp[a]);
        mp2[mp[b]].push_back(a);
    }
    else{
        mp[a] = max(b,mp[a]);
        mp2[b].push_back(a);
    }
    
    queue<int>q;
    q.push(a);

    while(!q.empty()){
        int p = q.front();
        q.pop();

        for(auto i : mp2[p]){
            mp[i] = max(mp[i],mp[a]);
            mp2[mp[a]].push_back(i);
        }
        
    }

    return;
    
}

int storeInMap(map<int,int>&mp, int a,map<int,vector<int>>&mp2){
    
    if(!mp2.count(a)){
        return a;
    }

    if(mp.count(a)){
        return mp[a];
    }

    int ans = -1;

    for(auto i : mp2[a]){
        int k = storeInMap(mp,i,mp2);
        ans = max(ans,k);
    }

    return mp[a] = ans;



    
}

int main()
{
    int t;
    cin>>t;

    while(t--){
        int n,m;
        cin>>n>>m;

        vector<set<int>>v;
        for(int i=0; i<n; i++){
            int b;
            cin>>b;
            set<int>st;
            for(int j=0; j<b;j++){
                int a;
                cin>>a;
                st.insert(a);
            }
            v.push_back(st);
        }

        map<int,int>mp1;
        map<int,vector<int>>mp2;
        map<int,int>present;

        int maxi1 = 0;
        int maxi2 = 0;
        for(int i=0; i<n; i++){
            int count = 0;
            int k = 0;
            int a = -1;
            int b = -1;
            // cout<<i<<endl;
            for(auto j : v[i]){
                if(k==j){
                    k++;
                }
                else{
                    count++;
                    if(count == 2){
                        maxi2 = max(maxi2,k);
                        b = k;
                        // cout<<k<<endl;
                        break;
                    }
                    else{
                        maxi1 = max(maxi1,k);
                        a = k;
                    }
                    if(j==k+1){
                        k= k + 2;
                    }
                    else{
                        count++;
                        k++;
                    }
                    if(count == 2){
                        maxi2 = max(maxi2,k);
                        b = k;
                        // cout<<k<<endl;
                        break;
                    }
                }
            }
            if(count == 0){
                maxi1 = max(maxi1,k);
                maxi2 = max(maxi2,k+1);
                a = k;
                b = k+1;
            }
            if(count == 1){
                maxi2 = max(maxi2,k);
                b = k;
            }

            mp2[a].push_back(b);
            // if(mp1.count(a)){
            //     present[a] = 1;
            // }
            // storeInMap(mp1,a,b,mp2);
            // cout<<maxi<<endl;

            
        }

        for(auto i : mp2){
            if(i.second.size()>1){
                present[i.first] = 1;
            }

            if(!mp1.count(i.first)){
                storeInMap(mp1,i.first,mp2);
            }
        }

        bool flage = false;
        int maxi3 = -1;
        for(auto i : present){
            flage = true;
            maxi3 = max(maxi3,mp1[i.first]);
        }


        long long int ans = 0;
        if(m<=maxi2){
            // ans = 1ll*(m+1)*maxi;
            if(flage){
                for(int i=0; i<=min(m,maxi1); i++){
                    if(mp1.count(i))
                    ans = ans + max(mp1[i], max(maxi1,maxi3));
                    else{
                        ans = ans + max(maxi3,maxi1);
                    }
                    // cout<<i<<" "<<ans<<endl;
                }
                for(int i=maxi1 + 1; i<=min(m,maxi2); i++){
                    ans = ans + max(i,maxi3);
                    // cout<<i<<" "<<ans<<endl;
                }
            }
            else{
                // cout<<"k"<<endl;
                for(int i=0; i<=min(m,maxi1); i++){
                    if(mp1.count(i))
                    ans = ans + max(maxi1,mp1[i]);
                    else{
                        ans = ans + maxi1;
                    }
                    // cout<<i<<" "<<ans<<endl;
                }
                for(int i=maxi1 + 1; i<=min(m,maxi2); i++){
                    ans = ans + i;
                    // cout<<i<<" "<<ans<<endl;
                }
            }
           
        }
        else{
            ans = (1ll*m*(m+1))/2;
            ans = ans - (1ll*maxi2*(maxi2+1))/2;
            // ans = ans + 1ll*maxi*maxi;

            if(flage){
                for(int i=0; i<=maxi1; i++){
                    if(mp1.count(i))
                    ans = ans + max(mp1[i], max(maxi1,maxi3));
                    else{
                        ans = ans + max(maxi1,maxi3);
                    }
                }
                for(int i=maxi1 + 1; i<=maxi2; i++){
                    ans = ans + max(i,maxi3);
                }
            }
            else{
                for(int i=0; i<=maxi1; i++){
                    if(mp1.count(i))
                    ans = ans + max(maxi1,mp1[i]);
                    else{
                        ans  =ans + maxi1;
                    }
                }
                for(int i=maxi1 + 1; i<=maxi2; i++){
                    ans = ans + i;
                }
            }
        }
        // cout<<maxi<<endl;
        cout<<ans<<endl;

        // for(auto i : mp1){
        //     cout<<i.first<<" "<<i.second<<endl;
        // }

        // for(auto i : mp2){
        //     for(auto j : i.second){
        //         cout<<j<<" "; 
        //     }
        //     cout<<endl;
        // }

        // for(auto i : present){
        //     cout<<i.first<<endl;
        // }

    }


    return 0;
}