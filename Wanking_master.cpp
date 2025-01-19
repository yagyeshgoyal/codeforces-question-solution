#include<iostream>
using namespace std;
#define ll long long int 


void check(ll a,ll b,ll c,ll d){

    ll count=0;
    if(a==c && b==d)
   { cout<<count<<endl;
    return;
   }
    else if(d>=b){
        count=count + d-b;
        a=a+d-b;

        if(a==c){
            
            cout<<count<<endl;
            return;
        }
        else if(a>c){
            count=count+a-c;
            cout<<count<<endl;
            return;
        }
        else if(a<c){
            cout<<-1<<endl;
            return;
        }
    }
    else 
    {cout<<-1<<endl;
    return;
    }

}

int main()
{

    int t;
    cin>>t;
    while(t--){
        ll a,b,c,d;
        cin>>a>>b>>c>>d;
        check(a,b,c,d);
    }

    return 0;
}
