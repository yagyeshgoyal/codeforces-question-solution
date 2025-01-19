#include<iostream>
using namespace std;

int main()
{

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }

        long long int maxy = 1;
        long long int teleport = 0;

        // for(int i=0; i<n; i++){
        //     if( i != n-1 && arr[i] == 0){
        //         // cout<<"k"<<endl;
        //         teleport = teleport + maxy ;
        //         // cout<<teleport<<endl;
        //         maxy = 1;
        //     }
        //     else if(arr[i] > maxy){
        //         if( i != n-1 && arr[i+1] != 0 && arr[i]>arr[i+1]){
        //             teleport = teleport + maxy-1;
                    
        //         }
               
        //         maxy = arr[i];
                
        //     }
        //     else if(i != 0 && arr[i-1] != 0 && arr[i-1] < arr[i]){
        //         if(i == n-1){
        //             teleport = teleport + arr[i]-1;
        //         }
        //         else{ 
        //          teleport = teleport + arr[i]-2;
        //         }
        //     }
        // }

        // teleport = teleport + maxy- 1;

        teleport = teleport + arr[0] - 1;

        for(int i=1; i<n; i++){
            teleport = teleport + max<long long int>(0, arr[i]- arr[i-1]);
        }

        cout<<teleport<<endl;
    }

    return 0;
}