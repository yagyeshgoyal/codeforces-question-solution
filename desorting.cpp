#include<iostream>
using namespace std;

int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        cin>>arr[0];
        int m=1000000000;
        int ans=0;
        bool flage = true;
        for(int i=1;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]<arr[i-1])
            flage=false;
            m=min(m,arr[i]-arr[i-1]);
        }
        if(flage==false)
        cout<<0<<endl;
        // else 
        // {
        //     if(n%2==0)
        //     cout<<((arr[n/2]-arr[(n/2)-1])/2)+1<<endl;
        //     else
        //     {
        //         int k = min(arr[n/2]-arr[(n/2)-1],arr[n/2+1]-arr[(n/2)]);
        //         // if(k%2==0)
        //         cout<<(k/2)+1<<endl;
        //         // else
        //         // cout<<k/2<<endl;
        //     }
        // }
        else
        cout<<(m/2)+1<<endl;
        

    }

    return 0;
}
;
//         int maxi=arr[0];
//         bool flage=true;
//         for(int i=1;i<n-1;i++)
//         {

//             maxi=max(maxi,arr[i]);
//         }
//         cin>>arr[n-1];
//         if(arr[n-2]>arr[n-1])
//         flage=false;
        
//         if(flage==false)
//         cout<<0<<endl;
//         else
//         if((arr[n-1]-maxi)>(maxi-arr[0]))
//         cout<<((maxi-arr[0])/2)+1<<endl;
//         else
//         cout<<((arr[n-1]-maxi)/2)+1<<endl;