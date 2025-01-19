#include<iostream>
#include<vector>
#include<map>
#include<queue>
#include<limits.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int arr[n];
        int mini = INT_MAX;
        for(int i=0; i<n; i++){
            cin>>arr[i];
            
            if(i!= 0){
                mini = min(mini,arr[i]);
            }
        }

        map<int,vector<int>>mp;
        // int arr2[n-1];
        for(int i=1; i<n; i++){
            // cin>>arr2[i-1];
            int a ;
            cin>>a;
            mp[a-1].push_back(i);
        }

        arr[0] = arr[0] + mini;

        int k = 0;

        for(int i=1; i<n; i++){
            arr[i] = arr[i]-mini;

            if(arr[i] == 0){
                k=i;
            }
        }

        queue<int>q;
        for(auto i : mp[k]){
            q.push(i);
        }

        mini = INT_MAX;

        while(!q.empty()){
            auto front = q.front();
            q.pop();

            mini = min(mini,arr[front]);

            for(auto j : mp[front]){
                q.push(j);
            }

        }

        mini = mini/2;

        for(int i=1; i<n; i++){
            if(i!=k){
                mini = min(mini,arr[i]);
            }
        }

        arr[0] = arr[0] + mini;

        cout<<arr[0]<<endl;


    }


    return 0;
}