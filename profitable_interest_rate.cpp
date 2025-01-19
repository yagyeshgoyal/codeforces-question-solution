#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--){
        int a,b;
        cin>>a>>b;

        if(a>=b){cout<<a<<endl;}
        else{
            int k = b-a;
            int p = 2*k;
            if(a-k>0){
                cout<<a-k<<endl;
            }
            else{
                cout<<0<<endl;
            }
        }
    }


    return 0;
}