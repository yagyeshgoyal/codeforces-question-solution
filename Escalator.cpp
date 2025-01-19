#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,k,H;
        cin>>n>>m>>k>>H;
        int arr[n];
        int arr2[n];
        int count=0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            arr2[i]=arr[i]-H;
        }
        for(int i=0;i<n;i++)
        {
            if(arr2[i]>0 && arr2[i]%k==0 && arr2[i]/k<m &&  arr2[i]>=1)
            {
                count++;
            }
            else if(arr2[i]<0 && (-arr2[i])%k==0 && (-arr2[i])/k<m &&  (-arr2[i])>=1)
            {
                count++;
            }
        }
        cout<<count<<endl;
    }



    return 0;
}