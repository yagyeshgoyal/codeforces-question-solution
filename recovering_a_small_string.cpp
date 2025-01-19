#include<iostream>
using namespace std;

int main()
{

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        if(n<=28){
            cout<<"aa"<<char(n-2-1 + 'a')<<endl;
        }
        else if(n>28 && n<=53){
            cout<<"a"<<char(n-27-1+'a')<<"z"<<endl;
        }
        else{
            cout<<char(n-52-1 + 'a')<<"zz"<<endl;
        }
    }

    return 0;
}