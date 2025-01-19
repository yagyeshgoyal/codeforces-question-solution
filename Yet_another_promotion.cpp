#include<iostream>
using namespace std;

void cost(long long int a, long long int b,long long int n, long long int m){
    
    // if(n<=m){
    //     cout<<n*min<int>(a,b)<<endl;
    //     return ;
    // }

    // if(n%(m+1)==0){
    //     cout<<((n/(m+1))*m*a)<<endl;
    //     return;
    // }
    // else{
    //     long long int k=(n/(m+1));
    //     cout<<(k*m*a)+((n-(k*(m+1)))*min<int>(a,b))<<endl;
    //     return;
    // }

    long long int ans1 = 1ll*a*((n/(m+1))*m) + 1ll*(n- 1ll*(n/(m+1))*(m+1))*(min(a,b)); 

    long long int ans2 =1ll* b*n;

    cout<<min(ans1,ans2)<<endl;


}

int main()
{

    int t;
    cin>>t;
    while(t--){
        long long int a,b,n,m;
        cin>>a>>b>>n>>m;
        cost(a,b,n,m);
    }
    return 0;
}