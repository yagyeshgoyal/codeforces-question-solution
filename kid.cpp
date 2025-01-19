#include<iostream>
#include<bits/stdc++.h>
#include<climits>
using namespace std;

int main()
{
   
        int n;
        cin>>n;
        int arr[n];
        int p=100000;
        int m=-100000;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]>=0)
            p=min<int>(p,arr[i]);
            else
            m=max<int>(m,arr[i]);
        }
        if(p==0)
        cout<<0<<endl;
        else if(p<=(-m)){
        cout<<p<<endl;
        }
        // else if(p<=(-m) && p==INT_MIN)
        // cout<<-m<<endl;
        else if(p>(-m) )
        cout<<(-m)<<endl;
        // else if(p>(-m) && m==1)
        // cout<<p<<endl;
    


    return 0;
}