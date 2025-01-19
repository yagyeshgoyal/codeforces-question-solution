#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        long long int n,k;
        cin>>n>>k;

        long long int dia = 4*n*1ll - 2;

        if(k <= dia-2){
            if(k&1 == 1){
                cout<<(k/2)+1<<endl;
            }
            else{
                cout<<(k/2)<<endl;
            }
        }
        else if(k == dia-1){
            cout<<dia/2<<endl;
        }
        else{
            cout<<(dia/2)+1<<endl;
        }
    }


    return 0;
}