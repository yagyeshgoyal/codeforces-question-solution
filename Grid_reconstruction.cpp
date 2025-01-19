#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        // cout<<n<<endl;

        int arr[2][n];
        if(n%4!=0){
            arr[0][0] = 2*n-1;
            arr[1][n-1] = 2*n;
            // int count =0;
            for(int i=1; i<n; i++){
                // count++;
                if(i%2==1){
                    arr[0][i] = i+1;
                    arr[1][i-1] = i;
                }
                else{
                    arr[0][i] = n+i+1;
                    arr[1][i-1] = n+i;
                }
            }
        }
        else{
            arr[0][0] = 2*n;
            arr[1][n-1] = 2*n-1;
            // int count =0;
            for(int i=1; i<n; i++){
                // count++;
                if(i%2==1){
                    arr[0][i] = i+1;
                    arr[1][i-1] = i;
                }
                else{
                    arr[0][i] = n+i;
                    arr[1][i-1] = n+i-1;
                }
            }
        }

        // cout<<count<<endl;

        for(int i=0 ; i<2; i++){
            for(int j=0; j<n; j++){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
    }


    return 0;
}