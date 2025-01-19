#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;

        int a=1;
        
        int arr[n];
        cin>>arr[0];
        for(int i=1;i<n;i++){
            cin>>arr[i];

            if(arr[i]<arr[i-1])
            a=0;
        }

        if(k>1){
            cout<<"YES"<<endl;
        }
        else if(k==1 && a==1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }


    return 0;
}