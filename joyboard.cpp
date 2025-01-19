#include<iostream>
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){

        int n,m,k;
        cin>>n>>m>>k;

        if(k==1){
            cout<<1<<endl;
        }
        else if(k==2){
            long long int count = 0;
            long long int p = n;
            // while(p<=m){
            //     count++;
            //     p = p + n;
            // }
            count = count + (m/p);
            if(m>=n)
            count = count + (n-1);
            else{
                count = count + (m);
            }
            cout<<count<<endl;

        }
        else if(k==3){

            long long int count = 0;
            long long int p = n;
            // while(p+n<=m){
            //     count = count + (n-1);
            //     p = p + n;
            // }

            long long int t = (m/p);
            count = count + 1ll*(max<long long int>(t-1,0))*(n-1);
            
            if(t != 0){
                p = 1ll*t*p;
                count = count + (m-p);
            }
            

            cout<<count<<endl;
        }
        else{
            cout<<0<<endl;
        }



    }



    return 0;
}