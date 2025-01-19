#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--){
        int n,q;
        cin>>n>>q;

        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        vector<int>b;
        for(int i=1; i<n; i++){
            b.push_back(abs(arr[i-1]-arr[i]));
        }
        
        n = b.size();
        int cols = log2l(n);
        int sparseTable[n][cols+1] = {0};

        // cout<<cols<<endl;

        for(int i=0; i<n; i++){
            sparseTable[i][0] = b[i];
        }


        // if(cols>0){
        //     for(int i=1; i<n; i++){
        //         sparseTable[i-1][1] = abs(arr[i]-arr[i-1]);
        //     }
        // }

       
        
        for(int j=1; j<=cols; j++){
            for(int i=0; (i+(1<<(j-1)))<n; i++){
                // cout<<i<<" "<<j<<endl;
                // if(sparseTable[(i+(1<<j)-1)][j-1] == 0){
                //     continue;
                // }
                // sparseTable[i][j] = sparseTable[i][j-1];
                // for(int k = i+1; k<=(i+(1<<j)-1); k++){
                //     sparseTable[i][j] = __gcd(sparseTable[i][j] , sparseTable[k][j-1]);
                // }
                sparseTable[i][j] = __gcd(sparseTable[i][j-1],sparseTable[(i+(1<<(j-1)))][j-1]);
            }
        }

        
        // for(int i=0; i<n; i++){
        //     for(int j=0; j<= cols; j++){
        //         cout<<sparseTable[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }

       

       while(q--){
        int l,r;
        cin>>l>>r;

        if(l==r){
            cout<<0<<" ";
            continue;
        }

        l--;
        r--;
        r--;


        int k = log2l(r-l+1);
        int ans = sparseTable[l][k];

        while(l + (1<<(k-1)) < r){
            l = l + (1<<(k-1));
            ans = __gcd(ans, sparseTable[r-(1<<k)+1][k]);
        }

        cout<<ans<<" ";
       }
       cout<<endl;
    }




    return 0;
}