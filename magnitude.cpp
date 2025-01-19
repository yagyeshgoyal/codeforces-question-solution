#include<iostream>
#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;

struct node{
    public:
    int i;
    long long int total;
};

// long long int findans(int arr[], int &n, int i, long long int sum, map<node*,long long int>&mp){
//     if(i==n){
//         return sum;
//     }

//     node* element = new node;
//     element->i = i;
//     element->total = sum;
//     if(mp.count(element)){
//         return mp[element];
//     }

//     long long int ans1 = findans(arr,n,i+1,sum+ arr[i], mp);

//     long long int ans2 = findans(arr,n,i+1,abs(sum+arr[i]),mp);

//     mp[element] = max(ans1,ans2);

//     return max(ans1,ans2);

// }
long long int findans(int arr[], int &n, int i, long long int sum, map<pair<int,long long int>,long long int>&mp){
    if(i==n){
        return sum;
    }

    if(mp.count({i,sum})){
        return mp[{i,sum}];
    }

    long long int ans1 = findans(arr,n,i+1,sum+ arr[i], mp);
    long long int ans2 = ans1;

    if(sum+arr[i]<0)
    ans2 = findans(arr,n,i+1,abs(sum+arr[i]),mp);

    mp[{i,sum}] = max(ans1,ans2);

    return max(ans1,ans2);

}

int main()
{
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }


        // map<pair<int,long long int>,long long int>mp;
        // long long int ans  = findans(arr,n,0,0,mp);

        // cout<<ans<<endl;

        long long int ans = 0;
        long long int minval =0;
        for(int i=0; i<n; i++){
            ans = ans + arr[i];
            minval = min<long long int>(minval,ans);
        }

        ans = ans - (2*minval);

        cout<<ans<<endl;
    }


    return 0;
}