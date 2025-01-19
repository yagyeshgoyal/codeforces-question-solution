#include<iostream>
#include<vector>
#include<map>
using namespace std;

int main()
{

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        int m;
        cin>>m;

        vector<vector<int>>arr1(n, vector<int>(m));
        for(int i=0; i<n; i++){
            for(int j=0;j<m; j++){
                cin>>arr1[i][j];
            }
        }
        map<int,int>row;
        map<int,int>col;
        vector<vector<int>>arr2(n, vector<int>(m));
        for(int i=0; i<n; i++){
            for(int j=0;j<m; j++){
                cin>>arr2[i][j];
                row[arr2[i][j]] = i;
                col[arr2[i][j]] = j;
            }
        }

        for(int i=0;i<n; i++){
            int k = i - row[arr1[i][0]];

            for(int j=1; j<m; j++){
                if(i - row[arr1[i][j]] !=k){
                    // cout<<"k"<<endl;
                    cout<<"NO"<<endl;
                    goto end;
                }
            }
        }

        for(int j=0; j<m; j++){
            int k = j- col[arr1[0][j]];

            for(int i=1; i<n; i++){
                if(j - col[arr1[i][j]] != k){
                    cout<<"NO"<<endl;
                    goto end;
                }
            }
        }

        cout<<"YES"<<endl;
        end:;
    }

    return 0;
}