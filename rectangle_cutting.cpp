#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--){
        int n,m;
        cin>>n>>m;

        if(n%2 == 1 && m%2 == 1){
            cout<<"NO"<<endl;
        }
        else if(n%2 == 0 && m%2 != 0){
            int a = n/2;
            int b = m*2;

            if( a == m && b == n){
                cout<<"NO"<<endl;
            }
            else{
                cout<<"YES"<<endl;
            }
            
        }
        else if(n%2 != 0 && m%2 == 0){
            int a = n*2;
            int b = m/2;

            if( a == m && b == n){
                cout<<"NO"<<endl;
            }
            else{
                cout<<"YES"<<endl;
            }
            
        }
        else{
            // if(n/m == 2 || m/2 == 2){
            //     cout<<"NO"<<endl;
            // }
            // else{
                cout<<"YES"<<endl;
            // }
        }


    }



    return 0;
}