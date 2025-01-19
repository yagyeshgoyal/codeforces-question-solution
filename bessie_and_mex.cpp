#include<iostream>
#include<vector>
#include<map>
using namespace std;

int main()
{
    ios :: sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin>>t;

    while(t--){

        int n;
        cin>>n;

        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }

        vector<bool>visit(n+1,false);
        vector<int>ans;
        map<int,int>mp;
        for(int i=0; i<=n; i++){
            mp[i] = i;
        }

        for(int i=0; i<n; i++){
            int curr;
            // cout<<"k"<<" ";
            for(auto it = mp.begin(); it != mp.end(); it++){
                
                curr = it->first - arr[i];
                if(mp.count(curr)){
                    mp.erase(curr);
                    break;
                }
                
            }
            ans.push_back(curr);
        }




        // for(int i=0; i<n-1; i++){
        //     int curr;
        //     for(int j=0; j<=n; j++){
        //         if(visit[j] == false){
        //             curr = j - arr[i];
        //             if(curr >= 0 && visit[curr] == false){
        //                 visit[curr] = true;
        //                 break;
        //             }
        //         }
        //     }
        //     ans.push_back(curr);
        // }

        // for(int i=0; i<n; i++){
        //     if(visit[i] == false){
        //         ans.push_back(i);
        //         break;
        //     }
        // }



        for(auto i : ans){
            cout<<i<<" ";
        }
        cout<<endl;
    }


    return 0;
}