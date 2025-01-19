#include<iostream>
#include<vector>
using namespace std;

int findans(int i, string &s, int &n, int k, bool firsttimeVisited, int m,vector<int>&v){

    if(i==n){
        // cout<<v.size()<<endl;
        // for(auto j : v){
        //     cout<<j<<" ";
        // }
        // cout<<endl;
        if(k==0){
            return m+1;
        }
        
        return -1;
    }

    if(m>=n){
        return -1;
    }

    // if(firsttimeVisited){
    //     int ans;
    //     if(s[i] == '1'){
    //         v.push_back(m);
    //         ans = findans(i+1,s, n,k-m ,false,m,v);
    //         v.pop_back();
    //     }
    //     else{
    //         v.push_back(m);
    //         ans = findans(i+1,s,n,k+m,false,m,v);
    //         v.pop_back();
    //     }

    //     return ans;
    // }
    // else{

        int ans;
        if(s[i] == '1'){
            // v.push_back(m);
            ans = findans(i+1,s, n,k-m ,false,m,v);
            // v.pop_back();
        }
        else{
            // v.push_back(m);
            ans = findans(i+1,s,n,k+m,false,m,v);
            // v.pop_back();
        }

        if(ans != -1){
            return ans;
        }

        if(s[i] == '1'){
            // v.push_back(m);
            ans = findans(i+1,s, n,k-m ,true,m+1,v);
            // v.pop_back();
        }
        else{
            // v.push_back(m);
            ans = findans(i+1,s,n,k+m,true,m+1,v);
            // v.pop_back();
        }

        return ans;

    // }
}

int main()
{
    int t;
    cin>>t;

    while(t--){
        int n,k;
        cin>>n>>k;

        string s ;
        cin>>s;

        vector<int>v;
        int ans = findans(0,s,n,k,true,0,v);

        cout<<ans<<endl;
    }


    return 0;
}