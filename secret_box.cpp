#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--){
        
        vector<int>arr;
        for(int i=0; i<3; i++){
            int a;
            cin>>a;
            arr.push_back(a);
        }

        long long int v ;
        cin>>v;

        long long int temp = v;

        sort(arr.begin(), arr.end());

        // int a = cbrtl(v);
        // if(a>arr[0]){
        //     a = arr[0];
        // }

        // while(v%a != 0){
        //     a--;
        // }

        // v = v/a;

        // int b = sqrtl(v);

        // if(b>arr[1]){
        //     b = arr[1];
        // }

        // while(v%b != 0){
        //     b--;
        // }

        // v = v/b;

        // int c = v;
        // if(c>arr[2]){
        //     c = arr[2];
        // }
        // while(v%c != 0){
        //     c--;
        // }
        // cout<<a<<" "<<b<<" "<<c<<endl;

        // if(1ll*a*b*c != temp){
        //     // cout<<"p"<<endl;
        //     cout<<0<<endl;
        // }
        // else{
        //     long long int ans = 1;
        //     long long int count = 0;

        //     for(int i=0; i+a<=arr[0]; i++){
        //         count++;
        //     }

        //     ans = 1ll*ans*count;
        //     count = 0;

        //     for(int i=0; i+b<=arr[1]; i++){
        //         count++;
        //     }

        //     ans = 1ll*ans*count;
        //     count = 0;

        //     for(int i=0; i+c<=arr[2]; i++){
        //         count++;
        //     }

        //     ans = 1ll*ans*count;
            

        //     cout<<ans<<endl;

        // }

        long long int ans = 0;
        long long int k = min<long long int>(arr[0],v);
        for(int i=1; i<=k ; i++){
            if(temp%i == 0){
                v = temp/i;
                long long int s = min<long long int>(arr[1],v);
                for(int j=1; j<=s; j++){
                    if(v%j == 0){
                        long long int m = v/j;
                        if(m>=1 && m<=arr[2]){
                            ans = max(ans,1ll*(arr[0]-i+1)*(arr[1]-j+1)*(arr[2]-m+1));
                        }
                    }
                }
            }
        }

        cout<<ans<<endl;


    }


    return 0;
}