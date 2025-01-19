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

        string syogi ;
        cin>>syogi;

        long long int arr2[n+1];
        arr2[0] = 0;
        for(int i=0; i<n; i++){
            arr2[i+1] = arr[i] + arr2[i];
        }

        int i=0;
        int j=n-1;

        long long int ans = 0;

        while(i<j){
            if(syogi[i] == 'L' && syogi[j] == 'R'){
                ans = ans + arr2[j+1]-arr2[i];
                i++;
                j--;
            }
            
            while(syogi[i] != 'L' && i<=j && i<n){
                    i++;
            }
            while(syogi[j] != 'R' && i<=j && j>=0){
                // if(){
                    j--;
                // }
                // else{
                //     break;
                // }
            }
        }

        cout<<ans<<endl;
    }


    return 0;
}