#include<iostream>
#include<bits/stdc++.h>
#define ms 1000000007

using namespace std;

void findMax(int arr[], int &n, int index, long long int &maxi, long long int sum,
vector<map<int,int>>&dp){
    if(index >= n){
        return ;
    }

    if(dp[index].count(sum) == 1){
        return ;
    }

    //including
    maxi = max(maxi, sum+arr[index]);
    findMax(arr,n,index+1, maxi, sum+arr[index],dp);


    //exclude
    findMax(arr,n,index+1, maxi, 0, dp);

    dp[index][sum] = 1;

    return ;
}


long long int findpower(int k){
    if(k==1){
        return 2;
    }
    if(k < 1){
        return 1;
    }

    if(k%2 == 0){
        return ((findpower(k/2)%ms)*(findpower(k/2)%ms))%ms;
    }
    else{
        return (2*(findpower(k/2)%ms)*(findpower(k/2)%ms))%ms;
    }
}



int main()
{
    ios :: sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin>>t;

    while(t--){
        int n,k;
        cin>>n>>k;

        int arr[n];
        long long int arr_sum = 0;
        for(int i=0; i<n; i++){
            cin>>arr[i];
            arr_sum+=arr[i];
        }

        vector<map<int,int>>dp(n+1);

        long long int maxi = 0;
        findMax(arr,n,0, maxi,0,dp);

        long long int ans = 0;

        long long int p = findpower(k);
        ans = (maxi*1ll*(p%ms - 1))%ms;

        ans = (ans + arr_sum)%ms;

        if(ans<0){
            cout<<ans+ms<<endl;
        }
        else{
            cout<<ans<<endl;
        }


    }


    return 0;
}