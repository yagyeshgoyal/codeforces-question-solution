#include<iostream>
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cin.ignore();
        string s;
        getline(cin, s);

        int count0 = 0, count1=0;
        for(int i=0; i<n;i++){
            if(s[i]=='0'){
                count0++;
            }
            else{
                count1++;
            }
        }
        // int count =0;
        // for(int i=1; i<n;i++){
        //     if(s[i] != s[i-1]){
        //         count++;
        //     }
        // }

        if(count0>0){
            cout<<"YES"<<endl;
        }
        // else if(count>count1-count0){
        //     cout<<"YES"<<endl;
        // }
        else{
            cout<<"NO"<<endl;
        }
    }
}