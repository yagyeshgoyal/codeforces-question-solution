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
        int count=0;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]==i+1)
            count++;
        }
        if(count%2==0)
        cout<<count/2<<endl;
        else
        cout<<(count/2)+1<<endl;

    }


    return 0;
}