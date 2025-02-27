#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<unordered_map>
#include<queue>
#include<cmath>
#include<bits/stdc++.h>
using namespace std;

class cmp{

    public:
    bool operator()(pair<int,pair<int,int>>a, pair<int,pair<int,int>>b){
        if(a.first >= b.first){
            return true;
        }

        return false;
    }

};

int main()
{
    int t;
    cin>>t;
    int s = 0;
    while(t--){
        int n;
        cin>>n;
        

        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
            
        }

        vector<int>v(n,0);
        int total = 0;
        for(int i=0; i<n; i++){
            int count = 0;
            for(int j=i+1; j<n; j++){
                if(arr[j]<arr[i]){
                    count++;
                }
            }
            v[i] = count;
            total += count;
                
        }

        priority_queue<pair<int,pair<int,int>>, vector<pair<int,pair<int,int>>>, cmp>pq;

        // int maxf = max_element(v.begin(), v.end()) - v.begin();
        // maxf = v[maxf];

        // map<int,int>mp;
        // for(int i=0; i<n; i++){
        //     if(v[i] == maxf){
        //         mp[i] = maxf;
        //     }
        // }

        for(int i=0; i<n; i++){
            int index = i;
            int value = v[i];

            int count1 = value;
            int count2 = value;

            int r = index;

            for(int i=index+1; i<n; i++){
                if(arr[i]<arr[index]){
                    count1--;
                }
                else if(arr[i] > arr[index]){
                    count2--;
                }

                if(count1 == 0){
                    r = i;
                    break;
                }

                if(count2 == 0){
                    r = i-1;
                    break;
                }
            }

            if(count2 == 0 && value != 0){
                count2++;
            }

            int temp = value - (value-count1) + (value-count2);

            pq.push({total - value + temp,{index,r}});
        }

        pq.push({total,{0,0}});



        pair<int,pair<int,int>>p = pq.top();

        cout<<p.second.first+1<<" "<<p.second.second+1<<endl;
        

    }

    return 0;
}