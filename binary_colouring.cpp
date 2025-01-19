#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        double k = log2(n);
        int p = log2(n);

        int size = p+1;
        if(p<k){
            size = size+1;
        }

        int arr[size-1] = {0};

        // cout<<pow(2,32)<<endl;
        // cout<<(pow(2,32)<pow(2,31))<<endl;

        if(n==1){
            cout<<1<<endl;
            cout<<1<<endl;
        }
        else{
            int me = n;
 
            int newarr[32] = {0};
            // newarr[31] = 1;
            // me = me - pow(2,31);
            for(int i=31; i>=0; i--){
                if(me > 0 && pow(2,i) <= me){
                    newarr[i] = 1;
                    me = me-pow(2,i);
                    i--;
                }
                else if(me<0 && pow(2,i)<=abs(me)){
                    newarr[i] = -1;
                    me = me + pow(2,i);
                    i--;
                }
            }

            // long long int val = 1;
            // long long int count = 0;
            // for(int i=0; i<n; i++){
            //     count = count + 1ll*newarr[i]*val;
            //     val = 1ll*val*2;
            //     cout<<count<<endl;
            // }
            // for(int i=0; i<size; i++){
            //         cout<<newarr[i]<<" ";
            //     }
            //     cout<<endl;

            //     cout<<count<<endl;

            // if(count == n){
                cout<<32<<endl;
                for(int i=0; i<32; i++){
                    cout<<newarr[i]<<" ";
                }
                cout<<endl;
            // }
            // else{
            //     size = size-1;

                
            //     arr[size-1] = 1;
            //     n = n - pow(2,size-1);
            //     for(int i=size-2; i>=0; i--){
            //         if(n > 0 && pow(2,i) <= n){
            //             newarr[i] = 1;
            //             n = n-pow(2,i);
            //             i--;
            //         }
            //         else if(n<0 && pow(2,i)<=abs(n)){
            //             newarr[i] = -1;
            //             n = n + pow(2,i);
            //             i--;
            //         }
            //     }


            //     cout<<size<<endl;
            //     for(int i=0; i<size; i++){
            //         cout<<arr[i]<<" ";
            //     }
            //     cout<<endl;


            // }


            
            
        }

    }


    return 0;
}