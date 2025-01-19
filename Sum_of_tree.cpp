#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a=1,b=2,c;
        c=n-3;
        int d,e;
        d=n-1-4;
        e=n-2-4;
        if(c%3!=0 && c!=1 &&c !=2 && c>0){
            cout<<"YES"<<endl<<a<<" "<<b<<" "<<c<<endl;

        }
        else if(d%3!=0 && d!=1 && d!=4 && d>0){
            cout<<"YES"<<endl<<a<<" "<<4<<" "<<d<<endl;

        }
        else if(e%3!=0 && e!=4 && e!=2 && e>0){
            cout<<"YES"<<endl<<4<<" "<<b<<" "<<e<<endl;

        }
        else
        cout<<"NO"<<endl;
        
    }


    return 0;
}