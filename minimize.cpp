#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--){
        int m,q;

        cin>>m>>q;

        cout<<abs(m-q)<<endl;
    }


    return 0;
}