#include<iostream>
using namespace std;

void check(){
        int n,k,a,b;
        cin>>n>>k>>a>>b;
        int x[n],y[n];
        for(int i=0;i<n;i++){
            cin>>x[i]>>y[i];
        }

        if(a<=k && b<=k)
       { cout<<0<<endl;
        return;
        }

        if(x[a-1]<x[b-1] && y[a-1]>y[b-1]){
            while(x[a-1]<=x[b-1] && y[a-1]>=y[b-1]){
                for(int i=0;i<n;i++){
                    
                }
            }
        }
}



int main()
{
    int t;
    cin>>t;
    while(t--){
        
        check();

    }

    return 0;
}