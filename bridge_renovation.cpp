#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<unordered_map>
#include<queue>
#include<cmath>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    long long int ans = 0;
    
    int a = n;
    int b = n;
    int c  = n;

    if(a%2 == 0){
        ans = ans + (a/2);
    }
    else{
        ans = ans + (a/2) + 1;
        b = b-1;
    }

    if(b>0 && b%2 == 0){
        ans = ans + (b/2);
        c = c - (b/2);
    }
    else if(b>0){
        ans = ans + (b/2) + 1;
        c = c - (b/2) - 2;
    }

    if(c>0 && c%3 == 0){
        ans = ans + c/3;
    }
    else{
        ans = ans + (c/3) + 1;
    }

    cout<<ans<<endl;

    return 0;
}