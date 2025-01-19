#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct arrayGCDValue{
    int v1;
    int v2;
    int flips;
};

arrayGCDValue findans(int i, int n, vector<int>&arr1, vector<int>&arr2){
    if(i==n-1){
        return {arr1[n-1] , arr2[n-1], 0};
    }

    arrayGCDValue ans1;
    arrayGCDValue ans2;

    arrayGCDValue ans = findans(i+1,n,arr1,arr2);
    

    ans1.v1 = __gcd(arr1[i],ans.v1);
    ans1.v2 = __gcd(arr2[i],ans.v2);
    ans1.flips = ans.flips;


    ans2.v1 = __gcd(arr2[i],ans.v1);
    ans2.v2 = __gcd(arr1[i],ans.v2);
    ans2.flips = 1 + ans.flips;

    if(ans1.v1 + ans1.v2 >= )

}

int main()
{
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<int>arr1;
        for(int i=0; i<n; i++){
            int a;
            cin>>a;

            arr1.push_back(a);
        }

        vector<int>arr2;
        for(int i=0; i<n; i++){
            int a;
            cin>>a;

            arr2.push_back(a);
        }

        arrayGCDValue ans = findans(0,n,arr1,arr2);

    }


    return 0;
}