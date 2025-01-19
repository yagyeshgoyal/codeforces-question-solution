#include<iostream>
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){

        long long int a, b, n;
        cin>>a>>b>>n;

        long long int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }

        long long int count = 0;

        if(b>1){
            count = count + b - 1;
            b = 1;
        }

        for(int i=0; i<n; i++){
            b = b + arr[i];

            if(b>a){
                b = a;
            }

            if(b>1){
                count = count + b - 1;
                b = 1;
            }
        }

        count++;

        cout<<count<<endl;



        
    }
}