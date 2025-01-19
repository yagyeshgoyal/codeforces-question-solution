#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--){
        int a,b;
        cin>>a>>b;

        int count = 1;
        int diff = 1;

        while(a+diff<=b){
            count++;
            a = a+ diff;
            diff++;
        }

        cout<<count<<endl;
    }


    return 0;
}