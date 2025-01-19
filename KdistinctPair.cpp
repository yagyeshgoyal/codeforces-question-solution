#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){
        int x,y,k;
        cin>>x>>y>>k;

        // if(k%2 == 1){
        //     cout<<x<<" "<<y<<endl;
        //     int p = 0;
        //     for(int i=0; i<(k/2); i++){
        //         if(p==x && p== y){
        //             p++;
        //         }
        //         cout<<p<<" "<<p<<endl;
        //         cout<<p-(2*p)<<" "<<p-(2*p)<<endl;
        //         p++;
        //     }
        // }
        // else{
        //     cout<<x/2<<" "<<y/2<<endl;
        //     cout<<(x-(x/2))<<" "<<(y-(y/2))<<endl;

        //     k  =k-2;
        //     int p = 0;
        //     for(int i=0; i<k/2; i++){
        //         while((p==x/2 && p==y/2) || (p==x-(x/2) && p == y-(y/2))){
        //             p++;
        //         }
        //         cout<<p<<" "<<p<<endl;
        //         cout<<p-(2*p)<<" "<<p-(2*p)<<endl;
        //         p++;
        //     }

        // }

        int sum = k*y;
        // int p = 1;
        if(sum<0){
            int p = 1;
            while(k != 1){
                cout<<x<<" "<<p<<endl;
                sum = sum - p;
                p++;
                k--;
            }
            cout<<x<<" "<<sum<<endl;
        }
        else{
            int p = -1;
            while(k != 1){
            cout<<x<<" "<<p<<endl;
            sum = sum - p;
            p--;
            k--;
        }
        cout<<x<<" "<<sum<<endl;
        }
        
        
    }
    return 0;
}