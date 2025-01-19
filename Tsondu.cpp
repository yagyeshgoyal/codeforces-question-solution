#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void check(int arr1[],int n,int arr2[],int m){
     sort(arr1,arr1+n);
    sort(arr2,arr2+m);
    while(n>0 && m>0){
       

        int ts = arr1[n-1]-arr2[m-1];
        int te = arr2[m-1]-arr1[n-1];
        if(ts>te && ts>0)
        {
            arr1[n-1]=ts;
            m=m-1;
        }
        else if(te>ts && te>0){
            arr2[m-1]=te;
            n--;
        }
        else if((ts>te && ts<=0 )|| (te>ts&& te<=0) || (ts==0 && te==0)){
            n--;
            m--;
        }
        
    }
    if(n>0 && m<=0)
    cout<<"Tsondu"<<endl;
    else if(n<=0 && m>0)
    cout<<"Tenzing"<<endl;
    else if(n<=0 && m<=0)
    cout<<"Draw"<<endl;
    return ;
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        // int *arr1=new int[n];
        // int *arr2=new int[m];
        int arr1[n],arr2[m];

        for(int i=0;i<n;i++)
        cin>>arr1[i];

        for(int i=0;i<m;i++)
        cin>>arr2[i];

        check(arr1,n,arr2,m);

        // delete []arr1;
        // delete []arr2;
    }


    return 0;
}