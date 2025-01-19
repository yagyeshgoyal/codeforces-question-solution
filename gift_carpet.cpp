#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        cin.ignore();
        char arr[n][m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>arr[i][j];
            }
        }
        string name="vika";

        int k=0;
        for(int i=0;i<=m-name.length()+k;i++){
            for(int j=0;j<n;j++){
                if(arr[j][i]==name[k]){
                    k++;
                    break;
                }

            }
            
        }
        if(k==4)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }


    return 0;
}