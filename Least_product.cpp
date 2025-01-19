#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        long long int arr[n];
        int minus = 0;
        long long int mul = 1;
        int zero = 0;

        for(int i=0; i<n; i++){
            cin>>arr[i];
            if(arr[i]<0){
                minus++;
            }
            if(arr[i]==0){
                zero = 1;
            }
            mul = mul*arr[i];
        }

        if(minus%2 == 1 || zero == 1 ){
            cout<<0<<endl;
        }
        else{
            cout<<1<<endl;
            cout<<1<<" "<<0<<endl;
        }
    }


    return 0;
}