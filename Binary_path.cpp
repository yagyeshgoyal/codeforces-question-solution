#include<iostream>
#include<vector>
using namespace std;


void solve_ans(vector<vector<int>>&arr ,int n, int i, int j, int pos,int prev_i,int prev_j,string &ans , string temp ,int &count){
    if(i == 1 && j==n-1 && temp< ans){
        // cout<<"k"<<endl;
        ans = temp;
        count = 1;
        return ;
    }
    else if(i == 1 && j==n-1 && ans == temp ){
        count++;
        return ;
    }
    cout<<temp<<" ";
    if(pos == 0){
        if(j+1 < n && arr[i][j+1] == 0){
            solve_ans(arr,n,i,j+1,0,prev_i,j,ans,temp + '0', count);
        }
        if(i+1 != prev_i && arr[i+1][j] == 0){
            solve_ans(arr,n,i+1,j,1,i,j,ans,temp + '0', count);
        }

        if(j+1 <n && arr[i][j+1] == 1 && arr[i+1][j] ==1){
            solve_ans(arr,n,i,j+1,0,prev_i,j,ans,temp + '1', count);
            solve_ans(arr,n,i+1,j,1,i,j,ans,temp + '1', count);
        }
        else if(i+1 != prev_i && arr[i+1][j] == 1){
            solve_ans(arr,n,i+1,j,1,i,j,ans,temp + '1', count);
        } 
    }
    else if(pos == 1){
        if( j+1 < n && arr[i][j+1] == 0){
            solve_ans(arr,n,i,j+1,0,prev_i,j,ans,temp + '0', count);
        }
        if(i-1 != prev_i && arr[i-1][j] == 0){
            solve_ans(arr,n,i-1,j,1,i,j,ans,temp + '0', count);
        }

        if(j+1 < n && arr[i][j+1] == 1 && arr[i-1][j] ==1){
            solve_ans(arr,n,i,j+1,0,prev_i,j,ans,temp + '1', count);
            solve_ans(arr,n,i-1,j,1,i,j,ans,temp + '1', count);
        } 
        else if(i-1 != prev_i && arr[i+1][j] == 1){
            solve_ans(arr,n,i-1,j,1,i,j,ans,temp + '1', count);
        } 
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

        vector<vector<int>>arr;

        // int arr[2][n];
        vector<int>v1;
        for(int i=0; i<n; i++){
            // arr[0][i] = s1[i]-'0';
            v1.push_back(s1[i]-'0');
        }
        arr.push_back(v1);

        vector<int>v2;
        for(int i=0; i<n; i++){
            // arr[0][i] = s2[i]-'0';
            v2.push_back(s2[i]-'0');
        }
        arr.push_back(v2);

        
        string ans = "";
        for(int i=0; i<n; i++){
            ans.push_back('1');
        }

        string temp = "";
        temp.push_back(s1[0]);
        int count = 1;
        solve_ans(arr,n,0,0,0,-1,-1,ans,temp , count);

        cout<<ans<<" "<<count<<endl;
        
        
    }


    return 0;
}