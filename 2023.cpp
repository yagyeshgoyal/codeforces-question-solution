#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;

        int arr[n];
        long long int mul = 1;
        int num = 2023;
        for(int i=0; i<n; i++){
            cin>>arr[i];
            mul = mul*arr[i];

            if(num%arr[i] == 0){
                num = num/arr[i];
            }
            else{
                num = -1;
            }
        }
        if(num == -1){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
            cout<<num<<" ";
            k--;
            while(k--){
                cout<<1<<" ";
            }
            cout<<endl;
        }
        

        // if(2023 % mul == 0){
            
        //     if(mul == 1 && k>=3){
        //         cout<<"YES"<<endl;
        //         cout<<7<<" "<<17<<" "<<17<<" ";
        //         for(int i=0; i<k-3; i++){
        //             cout<<1<<" ";
        //         }
        //     }
        //     else if(mul == 7 && k>=2){
        //         cout<<"YES"<<endl;
        //         cout<<17<<" "<<17<<" ";
        //         for(int i=0; i<k-2; i++){
        //             cout<<1<<" ";
        //         }
        //     }
        //     else if(mul == 17 && k>=2){
        //         cout<<"YES"<<endl;
        //         cout<<7<<" "<<17<<" ";
        //         for(int i=0; i<k-2; i++){
        //             cout<<1<<" ";
        //         }
        //     }
        //     else if(mul == 289 && k>=1){
        //         cout<<"YES"<<endl;
        //         cout<<7<<" ";
        //         for(int i=0; i<k-1; i++){
        //             cout<<1<<" ";
        //         }
        //     }
        //     else if(mul == 119 && k>=1){
        //         cout<<"YES"<<endl;
        //         cout<<17<<" ";
        //         for(int i=0; i<k-1; i++){
        //             cout<<1<<" ";
        //         }
        //     }
        //     else if(mul == 2023 &&  k>=0){
        //         cout<<"YES"<<endl;
        //         for(int i=0; i<k; i++){
        //             cout<<1<<" ";
        //         }
        //     }
        //     else{
        //         cout<<"NO"<<endl;
        //     }

        //     cout<<endl;
        // }
        // else{
        //     cout<<"NO"<<endl;
        // }
    }


    return 0;
}