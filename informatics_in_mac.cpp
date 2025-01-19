#include<iostream>
#include<set>
#include<bits/stdc++.h>
using namespace std;

int find_mex(int arr[], int n){

    set<int>s;
    for(int i=0; i<=n; i++){
        s.insert(i);
    }

    for(int i=0; i<n; i++){
        s.erase(arr[i]);
    }

    // sort()

    auto it = s.begin();

    return *it;
}


bool find_ans(int arr[], int &n, int &mex, vector<pair<int, int>>&p){

    set<int>s1;
    set<int>s2;

    for(int i=0; i<mex; i++){
        s1.insert(i);
        s2.insert(i);
    }

    int i=0;
    while(!s1.empty()){
        s1.erase(arr[i]);
        i++;
    }

    p.push_back({1,i});
    int k = i;

    while(!s2.empty() && i<n){
        s2.erase(arr[i]);
        i++;
    }
    p.push_back(make_pair(k+1,n));

    if(s2.empty()){
        return true;
    }
    else{
        return false;
    }

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

        int mex_number = find_mex(arr,n);

        vector<pair<int,int>>p;

        bool ans = find_ans(arr,n,mex_number,p);

        if(mex_number == 0){
            cout<<2<<endl;
            cout<<1<<" "<<1<<endl;
            cout<<2<<" "<<n<<endl;
        }
        else if(ans == true){
            cout<<p.size()<<endl;
            for(auto i : p){
                cout<<i.first<<" "<<i.second<<endl;
            }
        }
        else{
            cout<<-1<<endl;
        }
    }

    return 0;
}