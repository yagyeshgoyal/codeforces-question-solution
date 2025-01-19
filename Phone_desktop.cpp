#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--){
        int a,b;
        cin>>a>>b;

        int k = (b+1)/2;
        int p  = k*7;
        if(b%2 == 1){
            p = p + 4;
        }
        if(a <= p){
            cout<<k<<endl;
        }
        else{
            
            a = a - p;

            if(a%15 == 0){
                cout<<k + (a/15)<<endl;
            }
            else{
                cout<<k + (a/15)+1<<endl;
            }
        }

    }


    return 0;
}