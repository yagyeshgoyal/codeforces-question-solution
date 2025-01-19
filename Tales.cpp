#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
#include<climits>
using namespace std;


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
      int n;
      long int count=0;
      cin>>n;
      long long m=0,k=0;
      long int arr[n];
      for(int i=0;i<n;i++)
      {
        cin>>arr[i];
      }
    //   bool flage=true;
    //   while(flage==true)
    //   {
        for(int i=0;i<n-1;i++)
        {
            if(arr[i+1]<arr[i])
            //flage=false;
            k=max<long int >(k,arr[i]);
            m=max<long int >(k,m);
        }
    //     if(flage==false)
    //     {
    //         count++;
    //         for(int i=0;i<n;i++)
    //         {
    //             arr[i]=std::max<long int>(0,arr[i]-1);
    //         }
    //         flage=true;
    //     }
    //     else
    //     flage=false;
    //   }
      cout<<m<<endl;
    }


    return 0;
}