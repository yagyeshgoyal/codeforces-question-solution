#include<iostream>
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){
        int n,m,r,c;
        cin>>n>>m>>r>>c;

        long long int ans = 0;
        ans = 1ll*(n-r)*(m-1) + 1ll*(n-r)*m + (m-c);

        cout<<ans<<endl;

    }
    return 0;
}