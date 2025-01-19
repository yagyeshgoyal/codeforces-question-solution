#include<iostream>
using namespace std;

int find(int arr[],int n){

    if(n==1){
        return arr[0];
    }
    int b[n];
    for(int i=0;i<256;i++){
        for(int j=0;j<n;j++){
            b[j]=arr[j]^i;
        }
        int num=b[0];
        for(int j=1;j<n;j++){
            num=num^b[j];
        }
        if(num==0)
        return i;
    }
    return -1;
}

int main()
{
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        cin>>arr[i];

        int num=find(arr,n);

        cout<<num<<endl;
    }


    return 0;
}