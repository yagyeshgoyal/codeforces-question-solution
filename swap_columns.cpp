#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        int arr1[n];
        int arr2[n];
        for(int i=0; i<n; i++){
            cin>>arr1[i];
        }
        for(int i=0; i<n; i++){
            cin>>arr2[i];
        }
        vector<pair<int,int>>upper;
        vector<pair<int,int>>lower;

        int maxuppersum = INT_MIN;
        int uppersum = 0;
        int maxuppersumindex = -1;
        int maxlowersum = INT_MIN;
        int maxlowersumindex = -1;
        int lowersum = 0;

        for(int i=0; i<n; i++){
            int a,b;
            // cin>>a>>b;
            a = arr1[i];
            b = arr2[i];

            if(a>=b){
                upper.push_back({a,b});
                maxuppersum = max(maxuppersum,b);
                // cout<<maxuppersum<<endl;
                if(maxuppersum == b){
                    maxuppersumindex = upper.size()-1;
                }
                uppersum  += a;
            }
            else{
                lower.push_back({a,b});
                maxlowersum = max(maxlowersum, a);
                lowersum += b;
                // cout<<"k"<<endl;
                // cout<<maxlowersum<<endl;
                if(maxlowersum == a){
                    maxlowersumindex = lower.size()-1;

                    // cout<<maxlowersumindex<<endl;
                }
            }
        }

        long long int ans = 0;

        // cout<<maxuppersum <<" "<<maxlowersum<<endl;

        if(maxuppersum >= maxlowersum){
            // for(int i=0; i<upper.size(); i++){
            //     if(i==maxuppersumindex){
            //         ans += maxuppersum;
            //     }
            //     else{
            //         ans += upper[i].first;
            //     }
            // }
            ans = ans + uppersum;
            
            ans = ans + maxuppersum;

            ans = ans + lowersum;
        }
        else{
            ans  = uppersum;
            // cout<<ans<<endl;
            // cout<<maxlowersumindex<<endl;

            // for(int i=0; i<lower.size(); i++){
            //     if(i==maxlowersumindex){
            //         ans += maxlowersum;
            //     }
            //     else{
            //         ans += lower[i].second;
            //     }
            // }
            ans += maxlowersum;
            ans += lowersum;
        }

        cout<<ans<<endl;




    }


    return 0;
}