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
        long long int sum = 0;
        for(int i=0; i<n; i++){
            cin>>arr[i];
            sum = sum+ abs(arr[i]);
        }

        cout<<sum<<endl;
    }

    return 0;
}