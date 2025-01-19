#include<iostream>
using namespace std;

int main()
{

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        int arr[n];
        int sum = 0;
        bool flage = false;
        for(int i=0; i<n; i++){
            cin>>arr[i];
            sum = sum+arr[i];

            if(arr[i]%3==1 ){
                flage = true;
            }
        }

        if(sum%3==0){
            cout<<0<<endl;
        }
        else if(sum%3 == 2){
            cout<<1<<endl;
        }
        else if(flage == true || n==1){
            cout<<1<<endl;
        }
        else{
            cout<<2<<endl;
        }
    }

    return 0;
}