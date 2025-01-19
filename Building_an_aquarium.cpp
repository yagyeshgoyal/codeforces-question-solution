#include<iostream>
#include<bits/stdc++.h>
using namespace std;



void solve1(int arr[],  int n, int k){

    long long int s = 0;
    long long int e = 2000000007;

    while(s<e){
        long long int mid = s +(e-s+1)/2;
        long long int sum = 0;

        for(int i=0; i<n; i++){
            sum+=max(mid-arr[i], 0ll);
        }

        if(sum<=k){
            s = mid;
        }
        else{
            e = mid -1;
        }
    }

    cout<<s<<endl;
}

int main()
{

    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;

        int  arr[n];
        int maxheight = 0;
        long long int sum = 0;
        for(long long int i=0;i<n;i++){
            cin>>arr[i];
            maxheight = max(maxheight,arr[i]);
            sum = sum + arr[i];
        }

        

        // if(n==1)
        // cout<<k+arr[0]<<endl;
        // else

        // {long long int h=1;
        // while(k>0)
        // {   h++;
            // long long int i;
        //     for( i=0;i<n;i++){
        //         if(arr[i]<h && k>0)
        //         {
        //             arr[i]++;
        //             k--;
        //         }
        //         else if(arr[i]>=h);
        //         else if(k<=0)
        //         break;
        //     }
        //     if(i!=n)
        //     h=h-1;
  
            
        // }
        // // if(n==1)
        // // cout<<h<<endl;
        // // else
        // cout<<h<<endl;}

        solve1(arr, n,k);

    }

    return 0;
}