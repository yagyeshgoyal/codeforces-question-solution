#include<iostream>
#include<set>
#include<vector>
using namespace std;

long int findans(vector<long int>&v, int i, int j, long int n){
    if(i>=j){
        return 1;
    }

    if(v[j]-v[i] < n){
        return j-i+1;
    }
    else{
        long int ans1 = findans(v,i+1,j,n);
        long int ans2 = findans(v,i,j-1,n);

        return max(ans1, ans2);
    }
}

int main()
{
    int t;
    cin>>t;

    while(t--){
        long int n;
        cin>>n;

        // int arr[n];
        set<long int>st;
        for(long int i=0; i<n; i++){
            long int a;
            cin>>a;

            st.insert(a);
        }

        vector<long int>v;
        for(auto i : st){
            v.push_back(i);
        }

        
        // long int ans = 0;

        // for(int i=0; i<v.size(); i++){
        //     long int count = 1;
        //     for(int j=i+1; j<v.size(); j++){
        //         if(v[j]-v[i] < n){
        //             count++;
        //         }
        //         else{
        //             break;
        //         }
        //     }

        //     ans = max(ans,count);
        // }
        
        int i = 0;
        int j = v.size()-1;
        // while(i<j){
        //     if(v[j]-v[i]<n){
        //         break;
        //     }
        //     else {
        //         j--;
        //     }
        // }
        // vector<vector<long int>> dp(n+1, vector<long int>(n+1,-1));
        long int ans = findans(v,i,j,n);

        cout<<ans<<endl;
    }


    return 0;
}