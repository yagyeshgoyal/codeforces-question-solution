#include<iostream>
#include<bits/stdc++.h>
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
        
        sort(arr,arr+n);

        reverse(arr,arr+n);

        if(arr[0] != arr[1]){
            cout<<"YES"<<endl;
            for(int i=0; i<n; i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
        else{
            if(arr[0] == arr[n-1]){
                cout<<"NO"<<endl;
            }
            else{
                cout<<"YES"<<endl;
                swap(arr[0],arr[n-1]);
                for(int i=0; i<n; i++){
                    cout<<arr[i]<<" ";
                }
                cout<<endl;
            }
        }

    }




    return 0;
}