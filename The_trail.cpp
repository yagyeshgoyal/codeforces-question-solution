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

        string s;
        cin>>s;

        long long int arr[n][m];
        for(int i=0; i<n; i++){

            for(int j=0; j<m; j++){
                cin>>arr[i][j];
            }
        }

        vector<long long int>rows(n,0);
        vector<long long int>cols(m,0);

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                rows[i] += arr[i][j];
                cols[j] += arr[i][j];
            }
        }

        int i=0;
        int j=0;

        for(int k=0; k<s.length(); k++){
            if(s[k] == 'D'){
                arr[i][j] = -1*rows[i];
                rows[i] += arr[i][j];
                cols[j] += arr[i][j];
                i++;
            }
            else{
                arr[i][j] = -1*cols[j];
                rows[i] += arr[i][j];
                cols[j] += arr[i][j];
                j++;
            }
        }

        arr[n-1][m-1] = -1*rows[n-1];

        for(int k=0; k<n; k++){
            for(int l=0; l<m; l++){
                cout<<arr[k][l]<<" ";
            }
            cout<<endl;
        }


    }

    return 0;
}