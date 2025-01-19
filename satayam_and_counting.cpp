#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        map<pair<int,int>,bool>mp;
        set<int>s1;
        set<int>s0;
        map<int,int>mp2;
        int max0 = INT_MIN;
        int max1 = INT_MIN;
        int min0 = INT_MAX;
        int min1 = INT_MAX;


        for(int i=0; i<n; i++){
            int a,b;
            cin>>a>>b;

            mp[{a,b}] = true;

            if(b == 0){
                s0.insert(a);
                max0 = max(max0,a);
                min0 = min(min0,a);
            }
            else{
                s1.insert(a);
                max1 = max(max1,a);
                min1 = min(min1,a);
            }

            mp2[a]++;
        }

        int ans = 0;

        for(auto i : mp2){
            if(i.second == 2){
                ans = ans + s0.size() + s1.size() - 2;

                int k = 1;

                int a = i.first;

                while(a-k >= min0 && a+k <= max0){
                    if(mp.count({a-k,0}) && mp.count({a+k,0})){
                        ans++;
                    }
                    k++;
                }

                k = 1;
                while(a-k>= min1 && a+k<=max1){
                    if(mp.count({a-k,1}) && mp.count({a+k,1})){
                        ans++;
                    }
                    k++;
                }

            }
            else if(s0.find(i.first) != s0.end()){
                int a = i.first;
                int k = 1;
                while(a-k>= min1 && a+k<=max1){
                    if(mp.count({a-k,1}) && mp.count({a+k,1})){
                        ans++;
                        cout<<a-k<<" "<<a+k<<" m "<<a<<endl;
                    }
                    k++;
                }
            }
            else{
                int k = 1;

                int a = i.first;

                while(a-k >= min0 && a+k <= max0){
                    if(mp.count({a-k,0}) && mp.count({a+k,0})){
                        ans++;
                        cout<<a-k<<" "<<a+k<<" m "<<a<<endl;
                    }
                    k++;
                }
            }
        }

        cout<<ans<<endl;
    }

    return 0;
}