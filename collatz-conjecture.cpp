#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--){
        long long int x,y,k;
        cin>>x>>y>>k;

        while(true){
            long long int p = x%y;

            if(y-p <=k){
                k = k - (y-p);
                x = x + (y-p);
            }
            else{
                x = x + k;
                break;
            }

            while(x%y==0){
                x = x/y;
            }

            if(x==1){
                x = x + (k%(y-1));
                
                if(x == y){
                    x = 1;
                }
                break;
            }
        }

        cout<<x<<endl;
    }


    return 0;
}