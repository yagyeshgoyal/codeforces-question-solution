#include<iostream>
using namespace std;

#define ll long long int

void check(){
    ll n,k;
    cin>>n>>k;

    if(k==1||k==n){
        cout<<"YES"<<endl;
        return;
    }
    else if((k%2==0 && n%2==0) || (k%2==1 && n%2==0) || (k%2==1 && n%2==1 ))
    {
        cout<<"YES"<<endl;
        return;
    }
    else
    {
        cout<<"NO"<<endl;
        return;
    }
 


    // for(ll i=0;i<=n;i++){
    //     for(ll j=0;j<=n;j++){
    //         if((2*i)+(k*j)==n)
    //         {
    //             cout<<"YES"<<endl;
    //             return;
    //         }
    //         else if((2*i)+(k*j)>n)
    //         break;
    //     }
    // }
    // cout<<"NO"<<endl;
    // return;
}

int main()
{
    int t;
    cin>>t;
  while(t--){
    check();
  }
    


    return 0;
}