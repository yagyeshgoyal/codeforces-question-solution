#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--){
        int n, m ;
        cin>>n>>m;

        if(m==2){
            cout<<"YES"<<endl;
            for(int i=1; i<=n; i++){
                cout<<i<<" ";
            }
            cout<<endl;
            for(int i=n; i>0; i--){
                cout<<i<<" ";
            }
            cout<<endl;
        }
        else if(m==n){
            cout<<"YES"<<endl;
            for(int i=0; i<n; i++){
                for(int j=i+1; j<=n; j++){
                    cout<<j<<" ";
                }
                for(int j = 1; j<=i; j++){
                    cout<<j<<" ";
                }
                cout<<endl;
            }
        }
        else if(m%2 == 0){
            cout<<"YES"<<endl;
            for(int i=0; i<m/2; i++){
                for(int j=i+1; j<=n; j++){
                    cout<<j<<" ";
                }
                for(int j = 1; j<=i; j++){
                    cout<<j<<" ";
                }
                cout<<endl;
                for(int j=n-i; j>=1; j--){
                    cout<<j<<" ";
                }
                for(int j = n; j>=n-i+1; j--){
                    cout<<j<<" ";
                }
                cout<<endl;
            }
        }
        else if(n%2 == 1){
            int t = (n+2)/(m-1);
            for(int i=0; i<m-1; i++){
                for(int j= 1 + i*t; j<=n; j++){
                    cout<<j<<" ";
                } 
                for(int j=1; j<1+ i*t; j++){
                    cout<<j<<" ";
                }
                cout<<endl;
            }
            
        }
        else{
            cout<<"NO"<<endl;  
        }

    }


    return 0;
}