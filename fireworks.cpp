#include<iostream>
using namespace std;

int main()
{   
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin>>t;

    while(t--){
        long long int a,b,n;
        cin>>a>>b>>n;

        long long int ans1 = n/a + 1;
        long long int ans2 = n/b + 1;

        cout<<ans1 + ans2 <<endl;

    }


    return 0;
}