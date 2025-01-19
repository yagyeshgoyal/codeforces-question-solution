#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{   
    ios :: sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

     

        long int maxi{0};
        
        vector<int>v;

        int a;
        cin>>a;
        v.push_back(a);
        int ans = a;

        for(int i=1; i<n; i++){
            int a ;
            cin>>a;

            v.push_back(a);


            ans = __gcd(a,ans);

        }

        cout<<v[n-1]/ans<<endl;

        

    }


    return 0;
}