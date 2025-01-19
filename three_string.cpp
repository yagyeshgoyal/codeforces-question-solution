#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int findans(int i,int j, int k, string &a, string &b, string &c, unordered_map<string,int>&v){
    if(k==c.length()){
        return 0;
    }

    // if(v[k][j][i] != -1){
    //     return v[k][j][i];
    // }
    
    string temp = to_string(i) + "&" + to_string(j) + "&" + to_string(k);
    

    if(v.count(temp)){
        return v[temp];
    }
    
    int ans1 = INT_MAX;
    if(i != a.length()){
        if(a[i] == c[k]){
            ans1 = findans(i+1,j,k+1,a,b,c,v);
        }
        else{
            ans1 = findans(i+1,j,k+1,a,b,c,v) + 1;
        }
    }

    int ans2 = INT_MAX;
    if(j != b.length()){
        if(b[j] == c[k]){
            ans2 = findans(i,j+1,k+1,a,b,c,v);
        }
        else{
            ans2 = findans(i,j+1,k+1,a,b,c,v) + 1;
        }
    }
   

    return v[temp] = min(ans1,ans2);
}

int main()
{
    int t;
    cin>>t;

    while(t--){
        // cin.ignore();
        string a,b,c;
        cin>>a;
        // cin.ignore();
        cin>>b;
        // cin.ignore();
        cin>>c;
        // cin.ignore();
      

        int n = (int) a.size(), m = (int) b.size();
        int dp[n + 1][m + 1];
        std::fill(&dp[0][0], &dp[0][0] + (n + 1) * (m + 1), 1000000000);
        dp[0][0] = 0;
        for (int i = 0; i < n; i++) {
            dp[i + 1][0] = dp[i][0] + (a[i] != c[i]);
        }
        for (int j = 0; j < m; j++) {
            dp[0][j + 1] = dp[0][j] + (b[j] != c[j]);
        }
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                dp[i][j] = min(dp[i - 1][j] + (a[i - 1] != c[i + j - 1]),
                                    dp[i][j - 1] + (b[j - 1] != c[i + j - 1]));
            }
        }
        cout << dp[n][m] <<endl;
                   

    }


    return 0;
}