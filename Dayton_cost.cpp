#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int a=0;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]==k)
            a=1;
        }

        if(a==1)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }


    return 0;
}