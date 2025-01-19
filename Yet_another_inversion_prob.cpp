#include<iostream>
#include<queue>
#include<unordered_map>
#include<bits/stdc++.h>
using namespace std;
#define mod  998244353 
vector<long long int>powerof2;

void makepower(){
    powerof2.push_back(1);
    for(int i=1; i<200000; i++){
        powerof2.push_back( (1ll*powerof2[i-1]*2)%mod);
    }
}

void mergeSort(vector<int>&v, auto s , auto e, long long int &inversion){

    if(s==e){
        return ;
    }

    auto mid = s + (e-s)/2;

    mergeSort(v,s,mid,inversion);
    mergeSort(v,mid+1,e,inversion);

    auto i=s;
    auto j=mid+1;

    while(i<=mid && j<=e){
        if(*i > *j){
            j++;
        }
        else{
            inversion = (inversion + (int)(j-mid-1))%mod;
            i++;
        }
    }

    while(i<=mid){
        inversion = (inversion + (int)(e-mid))%mod;
        i++;
    }

    // emplace(s,e);
    sort(s,e+1);
    // for(auto i = s ; i<=e; i++){
    //     cout<<*i<<" ";
    // }
    // // cout<<endl;
    // cout<<" -> "<<inversion<<endl;
    
}

class cmp {
public:
    bool operator()(pair<int,int>a, pair<int,int>b)
    {
        if (a.first > b.first) {
            return true;
        }
        else if (a.first == b.first && a.second > b.second) {
            return true;
        }

        return false;
    }
};

int main()
{
    makepower();
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;

        int p[n];
        for(int i=0; i<n; i++){
            cin>>p[i];
        }
        vector<int>q;
        for(int i=0; i<k; i++){
            int a;
            cin>>a;
            q.push_back(a);
        }

        long long int inversion = 0;
        mergeSort(q,q.begin(), q.end()-1,inversion);

        inversion = (1ll*n*inversion)%mod;

        vector<vector<int>>v;

        for(int i=0; i<n; i++){
            vector<int>temp;
            for(int j=0; j<k; j++){
                temp.push_back((1ll*p[i]*powerof2[j])%mod);
            }
            v.push_back(temp);
        }

        unordered_map<int,int>mp;
        priority_queue<pair<int,int>, vector<pair<int,int>>, cmp >minheap;

        for(int i=0; i<n; i++){
            mp[i] = 0;
            minheap.push({v[i][0],i});
        }

        while(!minheap.empty()){
            auto front = minheap.top();
            minheap.pop();

            for(int i=0; i<front.second; i++){
                inversion = (inversion + (k-mp[i]))%mod;
            }

            mp[front.second]++;
            
            if(mp[front.second] != k){
                minheap.push({v[front.second][mp[front.second]],front.second});
            }
        }

        cout<<inversion<<endl;
    }

    return 0;
}