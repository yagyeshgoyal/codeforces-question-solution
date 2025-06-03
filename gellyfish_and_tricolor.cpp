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
        // int n;
        // cin>>n;

        int a,b,c,d;

        cin>>a>>b>>c>>d;

        int mini = min(a,c);
        int mini2 = min(b,d);

        if(mini2<=mini){
            cout<<"Gellyfish"<<endl;
        }
        else{
            cout<<"Flower"<<endl;
        }


    }

    return 0;
}