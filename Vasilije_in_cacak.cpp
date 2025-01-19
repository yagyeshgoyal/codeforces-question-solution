#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        long long int n,k,x;
        cin>>n>>k>>x;
        // int sum1=0;
        // for(int i=1;i<=k;i++)
        // sum1+=i;

        // int sum2=0;
        // for(int i=n ;i>n-k;i++)
        // sum2+=i;

        long long int sum1=(k*(k+1))/2;
        long long int p=n-k;
        long long int sum2=((n*(n+1))/2) - ((p*(p+1))/2);

        if(x>=sum1 && x<=sum2)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;

    }


    return 0;
}