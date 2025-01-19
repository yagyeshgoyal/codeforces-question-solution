#include<iostream>
using namespace std;


void check(){
    int n,k,x;
    cin>>n>>k>>x;

    int sum=((k-1)*(k))/2;

    if((k>x && k!=x+1)  || k>n)
    {
        cout<<-1<<endl;
        return;
    }
    else if((k-1)<=n){
        if(k==x)
        {
            sum=sum+((n-k)*(x-1));
        }
        else
        sum=sum+((n-k)*x);
    }
    cout<<sum<<endl;
    return;
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