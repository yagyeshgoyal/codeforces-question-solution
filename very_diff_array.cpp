#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

int solve(long long int arr1[], long long int arr2[], int n, int m, int index, int i, int j,
    vector<vector<vector<int>>>&v){
    if(j<i){
        return 0;
    }
    if(j<0 || i>=m || index>=n){
        return 0;
    }

    if(v[index][i][j] != -1){
        return v[index][i][j];
    }



    int ans1 = abs(arr1[index]-arr2[i]) + solve(arr1,arr2,n,m,index+1,i+1,j,v);

    int ans2 = abs(arr1[index]-arr2[j]) + solve(arr1, arr2, n, m, index+1, i, j-1,v);

    v[index][i][j] = max(ans1,ans2);

    return v[index][i][j];
}

int solve(int arr1[], int arr2[],int n, int m){
    vector<vector<vector<int>>>v (n,vector<vector<int>>(m,vector<int>(m,0)));

}

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;

        long long int arr1[n];
        long long int arr2[m];
        for(int i=0; i<n; i++){
            cin>>arr1[i];
        }

        for(int i=0; i<m; i++){
            cin>>arr2[i];
        }

        sort(arr1, arr1+n);
        sort(arr2, arr2+m);

        // long long int sum1 =0;
        // int j=0;
        // int k = m-1;
        // for(int i=0; i<n; i++){
        //     long long int a =  abs(arr1[i] - arr2[j]) ;
        //     long long int b = abs(arr1[i] - arr2[k]);

        //     if(a>=b){
        //         sum1 = sum1 + a;
        //         j++;
        //     }
        //     else {
        //         sum1 = sum1 +b;
        //         k--;
        //     }
        // }

        // long long int sum2 = 0;
        // j=0;
        //  k = m-1;
        // for(int i=n-1; i>=0; i--){
        //     long long int a =  abs(arr1[i] - arr2[j]) ;
        //     long long int b = abs(arr1[i] - arr2[k]);

        //     if(a>=b){
        //         sum2 = sum2 + a;
                
        //         j++;
        //     }
        //     else {
        //         sum2 = sum2 +b;
        //         k--;
        //     }
        // }

        // long long int sum3 = 0;
        // for(int i=0; i<n/2; i++){
        //     sum3 = sum3 + abs(arr1[i]-arr2[m-1-i]) + abs(arr1[n-i-1]-arr2[i]);
        // }

        // if(n%2 == 1){
        //     sum3 = sum3+ max(abs(arr1[n/2]-arr2[m-1-(n/2)]),abs(arr1[n/2]-arr2[(n/2)] ));
        // }

        
        // // cout<<sum1<<" "<<sum2<<endl;
        // cout<<max<long long int>(sum1,max<long long int>(sum3,sum2))<<endl;
        vector<vector<vector<int>>>v (n,vector<vector<int>>(m,vector<int>(m,-1)));
        int ans = solve(arr1, arr2, n, m, 0, 0, m-1, v);

        cout<<ans<<endl;

    }


    return 0;
}