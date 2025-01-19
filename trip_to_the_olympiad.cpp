#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct ans{
    long long int a;
    long long int b;
    long long int c;
};

ans findans(long long int l, long long int r){
    // long long int a,b,c;

    int bit = log2l(r);

    long long int num = 1<<bit;
    
    ans result;

    // long long int a,b,c;

    if(num == r){
        result.a = r;
        result.b = r-1;
        result.c = l;
    }
    else if(num>l && num < r){
        result.a = num;
        result.b = num-1;

        r = r - num;
        int p = log2l(r);
        result.c = (1<<p) + num;

    }
    else if(num == l){
        result.a = num;
        r = r - num;
        int p = log2l(r);
        result.b = (1<<p )+ num;
        result.c = result.b-1;
    }
    else{
        result = findans(l-num, r-num);
        result.a +=num;
        result.b +=num;
        result.c +=num;
    }

    return result;
}
int main()
{

    int t;
    cin>>t;

    while(t--){
        long long int l,r;
        cin>>l>>r;

        ans result = findans(l,r);


        cout<<result.a<<" "<<result.b<<" "<<result.c<<endl;
        
    }

    return 0;
}