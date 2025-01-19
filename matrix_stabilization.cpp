#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--){
        int n,m;
        cin>>n>>m;

        int arr[n][m];
        
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin>>arr[i][j];
            }
        }

        // for(int i=0; i<n; i++){
        //     for(int j=0; j<m; j++){

        //         cout<<arr[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }

        for(int j=0; j<m; j++){
            for(int i=0; i<n; i++){
                int maxi = -1;
                bool flage = true;
                if(i-1>=0 && flage && arr[i][j] <= arr[i-1][j]){
                    flage = false;
                }
                else if(i-1>=0 && flage){
                    maxi = max(maxi,arr[i-1][j]);
                }

                if(j-1>=0 && flage && arr[i][j] <= arr[i][j-1]){
                    flage = false;
                }
                else if(j-1>=0 && flage){
                    maxi = max(maxi,arr[i][j-1]);
                }

                if(i+1<n && flage && arr[i][j] <= arr[i+1][j]){
                    flage = false;
                }
                else if(i+1<n  && flage){
                    maxi = max(maxi,arr[i+1][j]);
                }

                if(j+1<m && flage && arr[i][j] <= arr[i][j+1]){
                    flage = false;
                }
                else if(j+1<m && flage){
                    maxi = max(maxi,arr[i][j+1]);
                }

                if(flage){
                   if(maxi !=-1){
                    arr[i][j] = maxi;
                   }
                }

                
            }

        }

        
            for(int i=0; i<n; i++){
                for(int j=0; j<m; j++){
                    cout<<arr[i][j]<<" ";
                }
                cout<<endl;
            }
    }


    return 0;
}