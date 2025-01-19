#include<iostream>
using namespace std;

int main()
{

    int t;
    cin>>t;
   
    string s="FBFFBFFBFBFFBFFBFBFFBFFBFBFFBFFB";
    while(t--){
        int n;
        cin>>n;
        cin.ignore();
        string k;
        getline(cin,k);

        if(s.find(k)<s.length()){
            cout<<"YES"<<endl;
        }
        else 
        cout<<"NO"<<endl;

    }

    return 0;
}