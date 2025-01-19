#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void check(){
    int n;
    cin>>n;
    int D[n],S[n];
    for(int i=0;i<n;i++){
        cin>>D[i]>>S[i];
    }
    // for(int i=0;i<n-1;i++){
    //     for(int j=1;j<n-1-i;j++){
    //         if(D[j]<D[i]){
    //             swap(D[j],D[i]);
    //             swap(S[j],S[i]);
    //         }
    //     }
    // }
    // // for(int i=0;i<n;i++){
    // //     cout<<D[i]<<" ";
    // // }

    // int k=D[0]-1+(S[0]/2);
    // for(int i=1;i<n;i++)
    // {
    //     if(D[i]<k && D[i]+(S[i]/2)<k){
    //         k=D[i]+(S[i]/2);
    //     }
    //     else
    //     {
    //         if(k==0)
    //         cout<<1<<endl;
    //         else
    //         cout<<k<<endl;
    //         return ;
    //     }
    // }
    // if(k==0){
    //     cout<<1<<endl;
    // }
    // else
    // cout<<k<<endl;
    // return ;
    int arr[n];
    for(int i=0;i<n;i++){
        if(S[i]%2==0)
        {
            arr[i]=D[i]+((S[i]-1)/2);
        }
        else{
            arr[i]=D[i]+((S[i])/2);
        }
    }
    sort(arr,arr+n);

    cout<<arr[0]<<endl;
    return;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        check();
    }


    return 0;
}