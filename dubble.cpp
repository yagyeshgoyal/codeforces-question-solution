#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    cout<<endl;
    for(int i=0;i<n+5;i++)
    cout<<arr[i]<<" ";

    return 0;
}