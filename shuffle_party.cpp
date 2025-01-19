#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void solve_ans(long long int n){
    if(n<2){
        cout<<n<<endl;
        return;
    }
    long long int num = 2;
    for(int i=1; i<32; i++){
        // cout<<"k"<<endl;
        if(num == n){
            cout<<num<<endl;
            return ;
        }
        else if(num >n){
            cout<<num/2<<endl;
            return ;
        }
        num = num*2*1ll;
    }
    return ;
}

int main()
{

    int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;


        solve_ans(n);

    }

    return 0;
}