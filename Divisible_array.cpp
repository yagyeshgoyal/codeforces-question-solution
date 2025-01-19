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
        for(int i=0; i<n; i++){
            arr[i]= i+1;
            sum = sum+arr[i];
        }

        if(sum%n !=0){
            arr[0] = arr[0] + (sum%n) ;
        }

        for(int i=0; i<n ; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;

    }

    return 0;
}