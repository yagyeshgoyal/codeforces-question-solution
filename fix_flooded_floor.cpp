#include<iostream>
#include<vector>
using namespace std;

int findans(int row, int col , int n, string &s1, string &s2, int &ans,vector<vector<int>>&dp){
    if(row == 2 && col == n){
        ans++;
        return 1;
    }

    int temp1 = row-1;
    int temp2 = col;

    if(dp[temp1][temp2] == 1){
        ans++;
        return 1;
    }
    else if(dp[temp1][temp2] == 0){
        return 0;
    }

    if(row == 1){
        while(col <  n){
            // cout<<row<<" "<<col<<endl;
            if(col<n && row == 1 && s1[col] == '#'){
                col++;
            }
            else if(col <n && row == 1 && s1[col] == '.'){
                break;
            }

            if(row == 1 && col == n){
                col = 0;
                row = 2;
                break;
            }

            // if(row == 2 && col == n){
            //     ans++;
            //     return ;
            // }

            // if(row == 2 && s2[col] == '#'){
            //     col++;
            // }
            // else if(row == 2 && s1[col] == '.'){
            //     break;
            // }
        }
        

        if(row == 2 && col == n){
            ans++;
            return dp[temp1][temp2] = 1;
        }

        if(row == 2){
            return dp[temp1][temp2] = findans(row,col, n , s1, s2,ans,dp);
        }
        if(ans>1){
            return dp[temp1][temp2] = 1;
        }
        int ans1 = 0;
        if(col < n-1 && s1[col]=='.' && s1[col+1] == '.'){
            s1[col] = '#';
            s1[col+1] = '#';
            ans1 = findans(row, col, n, s1, s2, ans,dp);
            s1[col] = '.';
            s1[col+1] = '.';
        }
        // dp[row][col] = ans1;
        if(ans>1){
            return dp[temp1][temp2] = 1;
        }

        int flage = 0;

        if(col<n && s1[col] == '.' && s2[col] == '.'){
            s1[col] = '#';
            s2[col] = '#';
            flage = findans(row, col, n, s1, s2, ans,dp);
            s1[col] = '.';
            s2[col] = '.';
        }

        // dp2[col] = flage;

        if(ans1==1 || flage==1)
        return dp[temp1][temp2] = 1;
        else
        return dp[temp1][temp2] = 0;
        
    }
    else{
        while(col < n){
            if(s2[col] == '#'){
                col++;
            }
            else{
                break;
            }
        }

        if(row == 2 && col == n){
            ans++;
            return dp[temp1][temp2] = 1;
        }
        
        int flage = 0;
        if(col<n-1 && s2[col] == '.' && s2[col+1] == '.'){
            s2[col] = '#';
            s2[col+1] = '#';
            flage = findans(row, col, n, s1, s2, ans,dp);
            s2[col] = '.';
            s2[col+1] = '.';
        }

        return dp[temp1][temp2] = flage;

    }
}

int main()
{
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        cin.ignore();

        string s1;
        cin>>s1;
        string s2;
        cin>>s2;

        int ans = 0;
        vector<vector<int>>dp(2,vector<int>(n+1,-1));
        int t = findans(1,0,n,s1,s2,ans,dp);

        if(ans == 0){
            cout<<"None"<<endl;
        }
        else if(ans == 1){
            cout<<"Unique"<<endl;
        }
        else{
            cout<<"Multiple"<<endl;
        }

        
    }


    return 0;
}