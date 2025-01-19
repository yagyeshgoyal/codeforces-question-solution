#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--){
        int n;
        int m;
        cin>>n>>m;

        if(n<m){
            cout<<"NO"<<endl;
        }
        else{
            if((n-m)%2==0){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }


    return 0;
}