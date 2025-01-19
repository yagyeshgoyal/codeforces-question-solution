#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;

        if((a%2 == 0 && b%2 == 1) || (a%2 == 1 && b%2 == 0))
        cout<<"Alice"<<endl;
        else{
            cout<<"Bob"<<endl;
        }
    }


    return 0;
}