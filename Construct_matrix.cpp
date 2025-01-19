#include<iostream>
#include<vector>
using namespace std;



int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int k;
        cin>>k;

        // long long int arr[n][n];
        vector<vector<int>> arr(n, vector<int>(n,0));
        // for(int i=0; i<n; i++){
        //     for(int j=0; j<n; j++){
        //         arr[i][j] = 0;
        //     }
        // }
        

        for(int i=0; i<n; i++){
            int v = i;
            for(int j=0; j<k/n; j++){
                arr[i][v] = 1;
                v = (v+1)%n;
            }
        }

        if(k%n != 0){
            cout<<"No"<<endl;
         
        }
        else{
            cout<<"Yes"<<endl;
            for(int i=0; i<n; i++){
                for(int j=0; j<n; j++){
                    cout<<arr[i][j]<<" ";
                }
                cout<<endl;
            }
        }

        
        
    
    }


    return 0;
}