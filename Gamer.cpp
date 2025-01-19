#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long int

// void binary(ll arr[],ll& size, ll& h, ll a,ll count){
//         int s=0;
//     int e=size-2;
//     int mid=s+((e-s)/2);
//      ll ans=0;
//     //  int new_arr[size-1];
//         ll* new_arr = new ll[size-1];

//      for(int i=0;i<a;i++)
//      new_arr[i]=arr[i];

//      for(int i=a+1;i<size;i++){
//         new_arr[a++]=arr[i];
//      }


//     while(s<=e){
//         if(new_arr[mid]==h){
//             ans=new_arr[mid];
//             break;
//         }
//         else if(new_arr[mid]>h)
//         {
//             ans =new_arr[mid];
//             e=mid-1;
//         }
//         else {
//             ans=max(ans,new_arr[mid]);
//             s=mid+1;
//         }
//         mid=s+((e-s)/2);
//     }
//     delete []new_arr;
//      h=h-ans;
//     if(h<=0)
//     cout<<count<<endl;
//     else{
//         binary(arr,size,h,mid,count+1);
//     }

// }

// void check(long long int arr[],long long int& size ,long long int& h){

//     ll s=0;
//     ll e=size-1;
//     ll mid=s+((e-s)/2);

//     ll ans=0;
//     while(s<=e){
//         if(arr[mid]==h){
//             ans=arr[mid];
//             break;
//         }
//         else if(arr[mid]>h)
//         {
//             ans =arr[mid];
//             e=mid-1;
//         }
//         else {
//             ans=max<long long int>(ans,arr[mid]);
//             s=mid+1;
//         }
//         mid=s+((e-s)/2);
//     }

//     h=h-ans;
//     if(h<=0)
//     cout<<1<<endl;
//     else{
//         binary(arr,size,h,mid,2);
//     }
// }

int main()
{

    int t;
    cin>>t;
    while(t--){
        long long int  n,h;
        cin>>n>>h;
        
        long long int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }

        sort(arr,arr+n);

        long long int sum = arr[n-1]+arr[n-2];

        // cout<<sum<<endl;

        long long int ans = 1ll*(h/sum)*2;

        h = h - (ans/2)*sum;

        if(h>arr[n-1]){
            ans = ans + 2;;
        }
        else if(h<= arr[n-1] && h>0){
            ans++;
        }
        cout<<ans<<endl;


    }

    return 0;
}