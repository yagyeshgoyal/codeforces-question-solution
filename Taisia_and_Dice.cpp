#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,s,r;
        cin>>n>>s>>r;
        int arr[n];
        arr[0]=s-r;
        if(r%(n-1)==0){
            for(int i=1;i<n;i++)
            arr[i]=r/(n-1);
        }
        else{
            for(int i=1;i<n-1;i++)
            arr[i]=r/(n-1);
            arr[n-1]=(r-(r/(n-1))*(n-1))+(r/(n-1));
        }

        int t;
        t=n-1;
        while(arr[t]>arr[0] && t>0){
            int k=arr[t]-arr[0];
            arr[t]=arr[0];
            arr[t-1]+=k;
            t--;
        }
        for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
        cout<<endl;
    }


    return 0;
}