#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        char ans[2*n][2*n];
        
        for(int i=0; i<2*n; i++){
            for(int j=0; j<2*n; j++){
                ans[i][j] = '.';
            }
        }

        for(int i=0; i<2*n; i= i+4){
            for(int j=0; j<2*n; j = j+4){
                ans[i][j] = '#';
                ans[i][j+1] = '#';
                ans[i+1][j] = '#';
                ans[i+1][j+1] = '#';
            }
        }

        for(int i=2; i<2*n; i = i+4){
            for(int j= 2; j<2*n; j=j+4){
                ans[i][j] = '#';
                ans[i][j+1] = '#';
                ans[i+1][j] = '#';
                ans[i+1][j+1] = '#';
            }
        }

        for(int i=0; i<2*n; i++){
            for(int j=0; j<2*n; j++){
                cout<<ans[i][j];
            }
            cout<<endl;
        }


    }


    return 0;
}