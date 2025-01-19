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
        int arr2[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
            arr2[i]=arr[i];
        }
       
        sort(arr2,arr2+n);

        int arr3[n];
        // cout<<arr3[0]<<endl;
        int k=0;
        int m=-1;
        int k=INT16_MAX;
        for(int i=n-1;i>=0;i--){
            
            for(int j=0;j<n;j++){
               m=max<int>(m,arr[j]);
               if(m==arr[j] && m<k)
               {
                
               }
            }
        }
        for(int i=0;i<n;i++){
            cout<<arr3[i]<<" ";
        }

    }


    return 0;
}