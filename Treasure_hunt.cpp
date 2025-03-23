#include<bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){
        int a,b,c;
        cin>>a>>b>>c;

        int d = a + b;
        c = c %d;
        if(c<a){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }



    return 0;
}