#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<unordered_map>
#include<queue>
#include<cmath>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;

        string arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }

        bool flage = true;

        // for(int i=1; i<n; i++){
        //     for(int j=1; j<m; j++){
        //         if(arr[i][j] == '1'){
        //             if(i-2>=0 && j-2>=0 &&((arr[i-2][j] == '1' && arr[i-1][j] == '1') || (arr[i][j-2] == '1' && arr[i][j-1]== '1'))){
        //                 continue;
        //             }
        //             else if(i-2>=0 && ((arr[i-2][j] == '1' && arr[i-1][j] == '1' )|| arr[i][j-1]== '1')){
        //                 continue;
        //             }
        //             else if(j-2>=0 && (arr[i-1][j] == '1' || (arr[i][j-2] == '1' && arr[i][j-1]== '1'))){
        //                 continue;
        //             }
        //             else if(j-2<0 && i-2<0 && (arr[i-1][j] == '1' || arr[i][j-1]== '1')){
        //                 continue;
        //             }
        //             else{
        //                 flage = false;
        //                 break;
        //             }
        //         }
        //     }

        //     if(flage == false){
        //         break;
        //     }
        // }

        vector<bool>row(n,false);
        vector<bool>col(m,false);

        for(int i=0; i<n; i++){
            if(arr[i][0] == '1'){
                row[i] = true;
            }
        }
        for(int i=0; i<m; i++){
            if(arr[0][i] == '1'){
                col[i] = true;
            }
        }

        for(int i=1; i<n; i++){
            for(int j=1; j<m; j++){
                if(arr[i][j] == '1'){
                    if(row[i] == true || col[j] == true){
                        continue;
                    }
                    else{
                        flage = false;
                        break;
                    }
                }
                else{
                    row[i] = false;
                    col[j] = false;
                }
            }
            if(flage == false){
                break;
            }
        }

        if(flage){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }


    }

    return 0;
}