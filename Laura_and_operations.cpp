#include<iostream>
using namespace std;

int main()
{
    long long int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;

        if((a%2==0 && b%2==0 && c%2==0) || a%2==1 && b%2==1 && c%2==1){
            cout<<1<<" "<<1<<" "<<1<<endl;
        }
        else if((a%2==1 && b%2==0 && c%2==0)  || (a%2==0 && b%2==1 && c%2==1)){
            cout<<1<<" "<<0<<" "<<0<<endl;
        }
        else if((a%2==0 && b%2==1 && c%2==0)  || (a%2==1 && b%2==0 && c%2==1)){
            cout<<0<<" "<<1<<" "<<0<<endl;
        }
        else if((a%2==0 && b%2==0 && c%2==1)  || (a%2==1 && b%2==1 && c%2==0)){
            cout<<0<<" "<<0<<" "<<1<<endl;
        }

    }


    return 0;
}