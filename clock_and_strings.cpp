#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--){
        int x,y,c,d;
        cin>>x>>y>>c>>d;

        int a,b;
        a = min(x,y);
        b = max(x,y);

        if((((c>b && c<= 12) || (c>=1 && c<a)) && ((d>b && d<= 12) || (d>=1 && d<a))) || ((c>a && c<b) && (d>a && d<b))){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }

         
    }


    return 0;
}