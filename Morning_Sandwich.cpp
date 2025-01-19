#include<iostream>
using namespace std;

int main()
{

    int t;
    cin>>t;
    while(t--){
        int b,c,h;
        cin>>b>>c>>h;
        if(b<=(c+h))
        cout<<((b-1)*2)+1<<endl;
        else
        cout<<((c+h)*2)+1<<endl;
    }

    return 0;
}