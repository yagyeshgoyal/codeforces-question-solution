#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int smallestDiv(int n)
{
    // if divisible by 2
    if (n%2 == 0)
        return 2;
 
    // iterate from 3 to sqrt(n)
    for (int i=3; i*i<=n; i= i+2) {
        if (n%i == 0)
            return i;
    }
 
    return n;
}

int main()
{
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        // int div = 0;
        // for(int i=2; i<n; i++){
        //     if(n%i == 0){
        //         div = i;
        //         break;
        //     }
        // }

        // int div = smallestDiv(n);

        // int k,b;
        // if(div != n){
        //     for(int i=2; i<n; i++){
        //         k = div*i;
        //         b = n-div-k;

        //         if(__gcd(k,b) == div && div != k && div != b && k != b ){
        //             break;
        //         }
        //     }

        //     if(k>0 && div>0 && b >0)
        //     cout<<k<<" "<<b<<" "<<div<<endl;
        //     else{
        //         int ans = 3;
        //         n= n - 1;
        //         for(int i=3; i<n; i++){
        //             if((n-i)%i != 0 && __gcd(n-i,i) == 1){
        //                 ans = i;
        //                 break;
        //             }
        //         }
        //         cout<<ans<<" "<<n-ans<<" "<<1<<endl;
        //     }
        // }
        // else{
        //     int ans = 3;
        //     n= n - 1;
        //     for(int i=3; i<n; i++){
        //         if((n-i)%i != 0 && __gcd(n-i,i) == 1){
        //             ans = i;
        //             break;
        //         }
        //     }
        //     cout<<ans<<" "<<n-ans<<" "<<1<<endl;
        // }


        if(n&1){
            if(((n-1)/2)&1){
                cout<<(n-1)/2 - 2 <<" "<<(n-1)/2 + 2 << " "<<1<<endl;
            }
            else{
                cout<<(n-1)/2 - 1 <<" "<<(n-1)/2 + 1<<" "<<1<<endl;
            }
        }
        else{
            cout<<2<<" "<<n-3<<" "<<1<<endl;
        }
    }


    return 0;
}