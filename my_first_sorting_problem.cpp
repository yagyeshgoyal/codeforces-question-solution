#include<iostream>
using namespace std;

int main()
{

    int t;
    cin>>t;

    while(t--){
        int m,n;
        cin>>m>>n;

        cout<<min(m,n)<<" "<<max(m,n)<<endl;
    }

    return 0;
}