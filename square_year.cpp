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
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;

        int n = stoi(s);

        int a = sqrt(n);

        if(a*a == n){
            cout<<0<<" "<<a<<endl;
        }
        else{
            cout<<-1<<endl;
        }

        


    }

    return 0;
}