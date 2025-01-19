#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// void check(){
//     int n;
//         cin>>n;
//         int arr[n];
//         cin>>arr[0];
//         int m=arr[0];
//         int ans=0;
//         for(int i=1;i<n;i++){
//             cin>>arr[i];
//             m=max<int>(m,arr[i]);
//             if(m==arr[i]){
//                 ans=i;
//             }
//         }
//         int i;
//         for(i=1;i<n;i++){
//             if(arr[i]<arr[i-1])
//             break;
//         }
//         if(i==n){
//             reverse(arr,arr+n);
//             for(int j=0;j<n;j++)
//             cout<<arr[j]<<" ";
//             return ;
//         }
        
//         int j;
//         for(j=1;j<n;j++){
//             if(arr[j]>arr[j-1])
//             break;
//         }
//         if(j==n){
//             sort(arr,arr+n);
//             for(int k=0;k<n;k++)
//             cout<<arr[k]<<" ";
//             return ;
//         }
//         if(ans==n-1){
//             swap(arr[n-2],arr[n-1]);
//              for(int k=0;k<n;k++)
//             cout<<arr[k]<<" ";
//             return ;
//         }
//         else{
//             int p=arr[ans];
//             int ans2=ans;
//             for(int k=ans+1;k<n;k++){
//                 p=min<int>(p,arr[k]);
//                 if(p==arr[k]){
//                     ans2=k;
//                 }
//             }
//             swap(arr[ans],arr[ans2]);
//             for(int k=0;k<n;k++)
//             cout<<arr[k]<<" ";
//             return ;
//         }
// }


int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        // check();
        // cout<<endl;

        int n;
        cin>>n;

        int arr[n];
        int ans[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
            ans[i] = n-arr[i]+1;
        }

        for(int i=0; i<n; i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;

        
        
    }
    


    return 0;
}