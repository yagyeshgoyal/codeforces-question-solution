#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,a,b;
        cin>>n>>a>>b;

        int ans1 = a*n;
        int ans2 = b*(n/2);
        if(n%2 !=0){
            ans2 = ans2 + a;
        }

        cout<<min(ans1,ans2)<<endl;
    }


    return 0;
}