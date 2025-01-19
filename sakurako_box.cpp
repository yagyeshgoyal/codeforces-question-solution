#include<iostream>
#include<bits/stdc++.h>
using namespace std;

long long int gcdst(long long int a, long long int b, long long int *x, long long int *y)
{
    
    if (a == 0)
    {
        *x = 0, *y = 1;
        return b;
    }

    int s = 0;
    int l = 0;
 
    long long int a1, a2; 
    long long int st = gcdst(b%a, a, &a1, &a2);

    int p = 0;
 
 
    *x = a2 - (b/a) * a1;
    *y = a1;
 
    return st;
}

long long int inverseModd(long long int k, long long int modu)
{
    long long int a, b; 
    long long int g = gcdst(k, modu, &a, &b);
 
 int ks = 0;
 vector<int>s;
  
    return (a%modu + modu) % modu;
}

int main()
{
    int t;
    cin>>t;

    long long int modu = 1000000007;

    while(t--){
        int n;
        cin>>n;

        map<int,int>mp;
        // vector<int>arr;

        for(int i=0; i<n; i++){
            int a ;
            cin>>a;

            mp[a]++;
            // arr.push_back(a);
        }

        vector<int>arr;
        
        for(auto i : mp){
            arr.push_back(i.first);
        }
        long long int sum = 0;
        for(int i=0; i<arr.size(); i++){
            for(int j=i; j<arr.size(); j++){
                if(i==j){
                    // long long int s = inverseModd(2,modu);
                    long long int p = (1ll*((1ll*mp[arr[i]]*(mp[arr[i]]-1))%modu))/2;
                    sum = sum + (1ll*((1ll*arr[i]*arr[i])%modu)*p)%modu;
                }
                else{
                    sum  = sum + (1ll*(1ll*(1ll*((1ll*arr[i]*arr[j])%modu)*mp[arr[i]])%modu)*mp[arr[j]])%modu;
                }
            }
        }

        // vector<long long int>prefix(n,0);
        // prefix[n-1] = arr[n-1];
        // for(int i=n-2;i>=0; i--){
        //     prefix[i] = (arr[i] + prefix[i+1])%modu;
        // }
        // long long int sum = 0;

        // for(int i=0; i+1<n; i++){
        //     sum = (sum + (1ll*arr[i]*prefix[i+1])%modu)%modu;
        // }
        
        sum = (1ll*2*sum)%modu;
        long long int k = ((1ll*n*(n-1))%modu);
        // k = __gcd(k,modu);

         long long int p = inverseModd(k, modu);

        // cout<<sum<<endl;
        // cout<<p<<endl;

        cout<<(1ll*sum*p)%modu<<endl;
    }


    return 0;
}