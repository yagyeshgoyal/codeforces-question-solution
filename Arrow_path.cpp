#include<iostream>
#include<vector>
using namespace std;

bool finddesti(string &s1, string &s2, int &n , int i, int j, vector<vector<int>>&dp){
    if(i>=2 || j>=n){
        return false;
    }

    if(i == 1 && j == n-1){
        return true;
    }

    if(dp[i][j] != -1){
        return false;
    }

    if(i==0){
        char ch1 = s1[j+1];
        char ch2 = s2[j];
        bool ans1 = false;
        if(ch1 == '>'){
            ans1 = finddesti(s1,s2,n,i,j+2,dp);
        }
        bool ans2 = false;
        if(ch2 == '>'){
            ans2 = finddesti(s1,s2,n,1,j+1,dp);
        }

        bool ans = ans1 || ans2;

        if(ans == false){
            dp[i][j] = 0;
        }

        return ans;
    }
    else if(i==1){
        char ch1 = s1[j];
        char ch2 = s2[j+1];

        bool ans1 = false;
        if(ch1 == '>'){
            ans1 = finddesti(s1,s2,n,0,j+1,dp);
        }
        bool ans2 = false;
        if(ch2 == '>'){
            ans2 = finddesti(s1,s2,n,1,j+2,dp);
        }

        bool ans = ans1 || ans2;

        if(ans == false){
            dp[i][j] = 0;
        }

        return ans;
    }

    dp[i][j] = false;
    return false;
}

bool finddesti2(string &s1, string &s2, int n){

    vector<vector<int>>dp (2,vector<int>(n+1,0));

    dp[1][n-1] = 1;

    for(int i=n-1; i>=0; i--){
        if(i-1 >=0 && s2[i-1] == '>'){
            if(i-2>=0)
            dp[1][i-2] = (1 & dp[1][i]) || dp[1][i-2];

            dp[0][i-1] = (1 & dp[1][i]) || dp[0][i-1];
        }
        
        if(i<n-1 && i-1>=0 && s1[i-1] == '>'){
            if(i-2>=0)
            dp[0][i-2] = (1 & dp[0][i]) || dp[0][i-2];

            dp[1][i-1] = (1 & dp[0][i]) || dp[1][i-1];
        }
    }

    return dp[0][0];
}

int main()
{

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        cin.ignore();

        string s1,s2;

        getline(cin,s1);
        getline(cin,s2);

        // vector<vector<int>>dp (2,vector<int>(n+1,-1));

        // bool ans = finddesti(s1,s2,n,0,0,dp);


        bool ans = finddesti2(s1,s2,n);

        if(ans){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}