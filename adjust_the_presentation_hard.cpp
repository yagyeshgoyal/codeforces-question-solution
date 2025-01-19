#include<iostream>
#include<map>
#include<vector>
#include<set>
#include<limits.h>
using namespace std;

int main()
{   
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int t;
    cin>>t;

    while(t--){
        int n,m,q;
        cin>>n>>m>>q;

        int arr1[n];
        map<int,int>mp;
        for(int i=0; i<n; i++){
            cin>>arr1[i];
            mp[arr1[i]] = i;
        }
        vector<int>pos(n,INT_MAX);
        map<int,set<int>>mps;
        vector<int>arr2;
        for(int i=0; i<m; i++){
            int a;
            cin>>a;
            mps[a].insert(i);
            arr2.push_back(a);
            pos[mp[a]] = min(pos[mp[a]],i);
        }

        set<int>st;

        int ans = 1;
        for(int i=1; i<n; i++){
            if(pos[i] != INT_MAX && pos[i]<=pos[i-1]){
                ans=0;
                st.insert(i-1);
            }
        }

        if(ans){
            cout<<"YA"<<endl;
        }
        else{
            cout<<"TIDAK"<<endl;
        }

        // for(int i=0; i<n; i++){
        //     cout<<pos[i]<<" ";
        // }
        // cout<<endl;

        while(q--){
            int a,b;
            cin>>a>>b;

            
            int ele = arr2[a-1];  //find removed element at position a-1;
            arr2[a-1] = b;          // place new element at position a-1;
            mps[ele].erase(a-1);      // remove a-1 position from map of the ele element;
            pos[mp[b]] = min(pos[mp[b]],a-1);  // get new pos of element b which is mini in arr2;
            mps[b].insert(a-1);             // add position in map of the element of b;

            if(mps[ele].size()>0){
                pos[mp[ele]] = *mps[ele].begin();
            }
            else{
                pos[mp[ele]] = INT_MAX;
            }
            
            st.insert(mp[b]);
            st.insert(mp[ele]);

            set<int>temp;

            for(auto i : st){
                bool flage = false, flage2 = false;
                if(i==0 && i+1 <n && (pos[i] > pos[i+1] ||( pos[i] == pos[i+1] && pos[i] != INT_MAX))){
                    // temp.insert(i);
                    flage = true;
                }

                if(i==n-1 && i-1>=0 && (pos[i-1] > pos[i] ||( pos[i-1] == pos[i] && pos[i] != INT_MAX))){
                    // temp.insert(i-1);
                    flage2  = true;
                }

                if(i!=0 && i != n-1 &&  (pos[i-1] > pos[i] ||( pos[i-1] == pos[i] && pos[i] != INT_MAX))){
                    // temp.insert(i-1);
                    flage2 = true;
                }

                if(i != 0 && i != n-1 && (pos[i] > pos[i+1] ||( pos[i] == pos[i+1] && pos[i] != INT_MAX))){
                    // temp.insert(i);
                    flage = true;
                }

                if(flage2){
                    temp.erase(i-1);
                    st.insert(i-1);
                }

                if(flage || flage2){
                    break;
                }
                else{
                    temp.insert(i);
                }
            }

            // st= temp;


            for(auto i : temp){
                st.erase(i);
            }


            // if(ans){
            //     // int k=mp[b];
            //     // if(k==0 && pos[k]>=pos[k+1]){
            //     //     ans = 0;
            //     // }
            //     // else if(k==n-1 && pos[k]<=pos[k-1]){
            //     //     ans = 0;
            //     // }
            //     // else if(k != 0 && k != n-1 && (pos[k]<= pos[k-1] || pos[k]>= pos[k+1])){
            //     //     ans = 0;
            //     // }

            //     // k=mp[ele];

            //     // if(k==0 && pos[k]>=pos[k+1]){
            //     //     ans = 0;
            //     // }
            //     // else if(k==n-1 && pos[k]<=pos[k-1]){
            //     //     ans = 0;
            //     // }
            //     // else if(k != 0 && k != n-1 && (pos[k]<= pos[k-1] || pos[k]>= pos[k+1])){
            //     //     ans = 0;
            //     // }

            //     for(int i=max(1,min(mp[b],mp[ele])); i<=min(n-1,max(mp[b],mp[ele])+1); i++){
            //         if(pos[i] != INT_MAX && pos[i]<=pos[i-1]){
            //             ans = 0;
            //         }
            //     }

            // }
            // else{
            //     ans = 1;
            //     for(int i=1; i<n; i++){
            //         if(pos[i] != INT_MAX && pos[i]<=pos[i-1]){
            //             ans=0;
            //         }
            //     }
            // }

            if(st.size() == 0){
                cout<<"YA"<<endl;
            }
            else{
                cout<<"TIDAK"<<endl;
            }

            // for(int i=0; i<n; i++){
            //     cout<<pos[i]<<" ";
            // }
            // cout<<endl;

            // for(auto i : st){
            //     cout<<i<<" ";
            // }
            // cout<<endl;

        }
       
        
    }


    return 0;
}