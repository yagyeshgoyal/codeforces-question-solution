#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

// void check(int arr[],int n,int even,int odd){
    
//         if(even==n||odd==n)
//         {cout<<"YES"<<endl;
//         return;}
        
//         for(int i=0;i<n-1;i++){
//             if(arr[i]%2==0){
//                 for(int j=i+1;j<n;j++){
//                     if(arr[j]%2==0 && arr[j]<arr[i]){
//                         swap(arr[i],arr[j]);
//                     }
//                 }
//             }
//             else {
//                  for(int j=i+1;j<n;j++){
//                     if(arr[j]%2==1 && arr[j]<arr[i]){
//                         swap(arr[i],arr[j]);
//                     }
//                 }
//             }
//         }

//         for(int i=1;i<n;i++){
//             if(arr[i]<arr[i-1])
//             {
//                 cout<<"NO"<<endl;
//                 return;
//             }
//         }
//         cout<<"YES"<<endl;
//         return;
// }

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        vector<int>even;
        vector<int>odd;
        
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]%2==0)
            even.push_back(arr[i]);
            else
            odd.push_back(arr[i]);
        }
        
        sort(even.begin(), even.end());
        sort(odd.begin(), odd.end());

        int e = 0;
        int o = 0;

        vector<int>ans;
        for(int i=0; i<n; i++){
            if(arr[i]%2 == 0){
                ans.push_back(even[e]);
                e++;
            }
            else{
                ans.push_back(odd[o]);
                o++;
            }
        }

        sort(arr,arr+n);

        bool flage = true;

        for(int i=0; i<n; i++){
            if(arr[i] != ans[i]){
                flage = false;
                break;
            }
        }

        if(flage){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }


    return 0;
}