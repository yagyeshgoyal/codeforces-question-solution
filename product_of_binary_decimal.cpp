#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

bool checkbinary(vector<int>&vv, int &n){
    
    for(int i=0; i<vv.size(); i++){
        if(n%vv[i] == 0 ){
            n = n/vv[i];
            if(vv[i] != 1){
                i--;
            }
        }
    }

    if(n == 1){
        return true;
    }
    else{
        return false;
    }
}

int main()
{
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<int>vv;

        vv.push_back(10000);
        vv.push_back(10001);
        vv.push_back(10010);
        vv.push_back(10011);
        vv.push_back(10100);
        vv.push_back(10101);
        vv.push_back(10110);
        vv.push_back(10111);
        vv.push_back(11000);
        vv.push_back(11001);
        vv.push_back(11010);
        vv.push_back(11011);
        vv.push_back(11100);
        vv.push_back(11101);
        vv.push_back(11110);
        vv.push_back(11111);
        vv.push_back(1000);
        vv.push_back(1001);
        vv.push_back(1010);
        vv.push_back(1011);
        vv.push_back(1100);
        vv.push_back(1101);
        vv.push_back(1110);
        vv.push_back(1111);
        vv.push_back(100);
        vv.push_back(101);
        vv.push_back(110);
        vv.push_back(111);
        vv.push_back(10);
        vv.push_back(11);
        vv.push_back(1);

        sort(vv.begin(), vv.end());
        reverse(vv.begin(), vv.end());

        if(checkbinary(vv,n)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        
        
        
    }


    return 0;
}