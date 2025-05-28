#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<unordered_map>
#include<queue>
#include<cmath>
#include<bits/stdc++.h>
using namespace std;


long long int findans(int x1, int x2, int y1, int y2, int a, int b){
    if(x1 == x2 && y1 == y2){
        return 0;
    }
    
    int maxi = 0;
    int state = 0;

     maxi = (y2-b)*(x2-x1+1);
    state = 1;

    int k = (b-y1)*(x2-x1+1);
    if(k > maxi){
        maxi = k;
        state = 2;
    }

    k = (x2-a)*(y2-y1+1);
    if(k > maxi){
        maxi = k;
        state = 3;
    }

    k = (a-x1)*(y2-y1+1);
    if(k > maxi){
        maxi = k;
        state = 4;
    }

    if(state == 1){
        int n = (x2+x1)/2;
        int m = (b+y1)/2;
        if(n<x1) n = x1;
        if(m < y1) m = y1;
        return findans(x1, x2, y1, b, n, m) + 1;
    }
    else if(state == 2){
        int n = (x2+x1)/2;
        int m = (y2+b)/2;
        if(n<x1) n = x1;
        if(m < b) m = b;
        return findans(x1, x2, b, y2, n, m) + 1;
    }
    else if(state == 3){
        int n = (a+x1)/2;
        int m = (y2+y1)/2;
        if(n<x1) n = x1;
        if(m < y1) m = y1;
        return findans(x1, a, y1, y2, n, m) +1;
    }
    else{
        int n = (x2+a)/2;
        int m = (y2+y1)/2;
        if(n<a) n = a;
        if(m < y1) m = y1;
        return findans(a, x2, y1, y2, n, m) + 1;
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,m,a,b;
        cin>>n>>m>>a>>b;

        long long int ans = findans(1,n,1,m,a,b);

        cout<<ans<<endl;

    }

    return 0;
}