#include<iostream>
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

        char arr[n][m];

        for(int i=0; i<n;i++){
            for(int j=0; j<m; j++){
                cin>>arr[i][j];
            }
        }

        int a1,b1;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(arr[i][j] == '#'){
                    a1 = i;
                    b1 = j;
                    break;
                }
            }
        }

        int a2,b2;
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(arr[j][i] == '#'){
                    a2 = j;
                    b2 = i;
                    break;
                }
            }
        }

        cout<<a2+1<<" "<<b1+1<<endl;
    }


    return 0;
}