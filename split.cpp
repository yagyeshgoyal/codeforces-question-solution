#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// int gcd(int a,int b){
    
// }

void check(){
    int l,r;
    cin>>l>>r;
    int a,b;
    a=1;
    b=1;
    while(a>=l/2 && a<=r/2 && a>0){
        while(b>=l/2 && b<=r && b>0){
            if(a+b>=l && a+b<=r){
                int k=__gcd(a,b);
                if(k!=1)
                {
                    cout<<a<<" "<<b<<endl;
                    return ;
                }
                
            }
            b++;
        }
        a++;
    }
    cout<<-1<<endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        check();
    }

    return 0;
}