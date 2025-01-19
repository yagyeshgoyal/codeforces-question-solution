#include<iostream>
// #include<vector>
#include<bits/stdc++.h>
using namespace std;

void solve_string(vector<vector<char>> &arr, int i, int j, int count,
    string y_ans , vector<string> &yresult, vector<vector<int>> &y_visited){

    if(count == 3){
        yresult.push_back(y_ans);
        return ;
    }

    if(i<0 || j<0 || i>=3 || j>=3){
        return;
    }

    if(y_visited[i][j] == 1){
        return ;
    }

    y_ans.push_back(arr[i][j]);
    count++;
    y_visited[i][j] = 1;

    if(y_visited[i][j+1] == 0){
        solve_string(arr,i,j+1,count,y_ans, yresult, y_visited);
    }
    
    if( i-1>=0 && j+1<3 && y_visited[i-1][j+1] == 0 && j+1>=0 && i-1<3 ){
        solve_string(arr,i-1,j+1,count,y_ans, yresult, y_visited);
    }

    if(i-1>=0 && j>=0 && i-1<3 && j<3 && y_visited[i-1][j] == 0){
        solve_string(arr,i-1,j,count,y_ans, yresult, y_visited);
    }

    if((i-1)>=0 && (j-1)>=0 && y_visited[i-1][j-1] == 0 && (i-1)<3 && (j-1)<3 ){
        solve_string(arr,i-1,j-1,count,y_ans, yresult, y_visited);
    }

    if(y_visited[i][j-1] == 0){
        solve_string(arr,i,j-1,count,y_ans, yresult, y_visited);
    }

    if(y_visited[i+1][j-1] == 0){
        solve_string(arr,i+1,j-1,count,y_ans, yresult, y_visited);
    }

    if(y_visited[i+1][j] == 0){
        solve_string(arr,i+1,j,count,y_ans, yresult, y_visited);
    }

    if(y_visited[i+1][j+1] == 0){
        solve_string(arr,i+1,j+1,count,y_ans, yresult, y_visited);
    }

    y_visited[i][j] = 0;

    return ;


}

int main()
{
    vector<vector<char>>arr;

    for(int i=0; i<3; i++){
        vector<char>v;
        for(int j=0; j<3; j++){
            char p;
            cin>>p;
            v.push_back(p);
        }
        arr.push_back(v);
    }

    vector<string>yresult;
    string y_ans = "";
    vector<vector<int>>y_visited (10,vector<int>(10,0));

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            solve_string(arr,i,j,0,y_ans, yresult, y_visited);
        }
    }

    sort(yresult.begin(), yresult.end());

    cout<<yresult[0]<<endl;

    // cout<<"result"<<endl;


    return 0;
}