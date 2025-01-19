#include<iostream>
#include<bits/stdc++.h>
#include<map>
#include<set>
#include<queue>
using namespace std;


int main()
{
    int t;
    cin>>t;

    while(t--){
        int n,x;
        cin>>n>>x;

        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }


        map<int,int>count;
        map<int,set<int>>mp;

        for(int i=0; i<n; i++){
            if(arr[i]<n){
                count[arr[i]]++;
                mp[arr[i]%x].insert(arr[i]);
            }
        }

        int ans = 0;

        while(ans<n){
            if(mp[ans%x].size()>0){
                int num = *mp[ans%x].begin();
                if(num<=ans){
                    count[num]--;
                    ans++;
                }
                else{
                    break;
                }

                if(count[num] == 0){
                    mp[(ans-1)%x].erase(num);
                }
            }
            else{
                break;
            }
        }

        cout<<ans<<endl;
    }


    return 0;
}