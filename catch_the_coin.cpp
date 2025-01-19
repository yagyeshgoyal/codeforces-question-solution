#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--){
        int a,b;
        cin>>a>>b;

        // if(a<0 && b<0){
        //     if(a<=b){
        //         cout<<"YES"<<endl;
        //     }
        //     else{
        //         cout<<"NO"<<endl;
        //     }
        // }
        // else{
        //     cout<<"YES"<<endl;
        // }

        (b>=-1)?cout<<"YES"<<endl:cout<<"NO"<<endl;
    }


    return 0;
}