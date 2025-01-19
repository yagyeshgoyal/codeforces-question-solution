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
        for(int i=0;i<n;i++){
            cin>>arr[i];
            
        }
        int b[n];
        if(arr[0]==1){
            b[0]=2;
        }
        else
        b[0]=1;

        for(int i=1;i<n;i++){
            if(b[i-1]+1!=arr[i]){
                b[i]=b[i-1]+1;
            }
            else{
                b[i]=b[i-1]+2;
            }
        }
        cout<<b[n-1]<<endl;
        
    }



    return 0;
}