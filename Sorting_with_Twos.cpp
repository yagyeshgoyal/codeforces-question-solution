#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool sort(int k,int j){
    for(int i=0;i<=k;i++){
        if(pow(2,i)==j)
        return 0;
    }
    return 1;
}
void check_sort(int arr[], int n,int k){

    for(int i=n-1;i>0;i--){
        if(arr[i]<arr[i-1]){
            if(sort(k,i)){
            cout<<"NO"<<endl;
            return ;
            }
            else {
                int p=arr[i-1]-arr[i];
                for(int j=0;j<i;j++)
                arr[j]=arr[j]-p;
            }
        
        }
    }
    cout<<"YES"<<endl;
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
        
        int k=0;
        while(pow(2,k)<=n)
        k++;
        k--;

        check_sort(arr,n,k);

    }


    return 0;
}