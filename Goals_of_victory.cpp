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
        int sum=0;
        for(int i=0;i<n-1;i++){
            cin>>arr[i];
            sum+=arr[i];
        }

        cout<<-(sum)<<endl;
    }

    return 0;
}