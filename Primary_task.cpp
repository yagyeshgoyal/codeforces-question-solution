#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        string yogi; 
        yogi = to_string(n);

        if(yogi.size()<=2){
            cout<<"NO"<<endl;
        }
        else if(yogi.size()==3){
            if(yogi[0] != '1' || yogi[1] != '0' || yogi[2]=='0' || yogi[2] == '1'){
                cout<<"NO"<<endl;
            }
            else{
                cout<<"YES"<<endl;
            }
        }
        else{
            if(yogi[0] != '1' || yogi[1] != '0' || yogi[2]=='0'){
                cout<<"NO"<<endl;
            }
            else{
                cout<<"YES"<<endl;
            }
        }

    }


    return 0;
}