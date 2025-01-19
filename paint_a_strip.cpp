#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int findans(int n){
    int k = n/2;

    if(n%2 == 1){
        k++;
    }
    if(n == 2){
        return 2;
    }
    if(n <= 0){
        return 0;
    }

    k = (n+1)/2;

    return findans(k-1)+1;

}

int main()
{
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int ans = 0;
        int temp = 0;

       ans  = findans(n);

    //    if(n==2){
    //     ans = 2;
    //    }
    //    else if(n==1){
    //     ans = 1;
    //    }

        cout<<ans<<endl;
    }


    return 0;
}