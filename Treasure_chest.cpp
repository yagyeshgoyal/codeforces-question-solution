#include<iostream>
using namespace std;

int main()
{

    int t;
    cin>>t;
    while(t--){
        int x,y,k;
        cin>>x>>y>>k;

        if(x>y){
            cout<<x<<endl;
        }
        else if(x+k >y){
            cout<<y<<endl;
        }
        else{
            cout<<x+k + ((y-x-k)*2)<<endl;
        }
    }

    return 0;
}