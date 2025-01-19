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
        arr[0]=2;
        arr[1]=3;
        cout<<2<<" "<<3<<" ";
        int k=4;
        for(int i=2;i<n;i++){
            arr[i]=arr[i-1]+1;
            int p=arr[i-1]+arr[i-2];
            if((arr[i]*3)%p==0)
            arr[i]=arr[i]+1;
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

    return 0;
}