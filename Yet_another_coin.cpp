#include<iostream>
#include<limits.h>
#include<vector>
using namespace std;

int findMiniCoin(int arr[], int n,vector<int>&dp){
    if(n<=0){
        return 0;
    }

    if(dp[n] != -1){
        return dp[n];
    }

    int ans = INT_MAX;
    for(int i=0; i<5; i++){
        if(n>arr[i]){
            // int count =(n/arr[i]);
            // n = ;
            int count = 1 + findMiniCoin(arr,n - arr[i],dp);
            ans = min(ans,count);
        }
        if(n == arr[i]){
            int count = n/arr[i];
            ans  = min(ans,count);
        }
    }

    dp[n] = ans;
    return ans;


}

int main()
{
    int t;
    cin>>t;

    int arr[5] = {15,10,6,3,1};

    while(t--){
        int n;
        cin>>n;

        int ans = INT_MAX;

        // vector<int>dp(n+1,-1);

        // ans = findMiniCoin(arr,n,dp);

        for(int ones = 0; ones <= 2; ones++){
            for(int threes = 0; threes <= 1; threes++){
                for(int sixes = 0; sixes <= 4; sixes++){
                    for(int tens = 0; tens <= 2; tens++){
                        int brute_sum = 1*ones + 3*threes + 6*sixes + 10*tens;
                        if(brute_sum <= n && (n-brute_sum)%15 == 0){
                            ans = min(ans, ones + threes + sixes + tens + (n-brute_sum)/15);
                        }
                    }
                }
            }
        }

        cout<<ans<<endl;

        
    }


    return 0;
}