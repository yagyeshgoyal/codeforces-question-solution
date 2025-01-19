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
        long long int arr[n];
        long long int sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            sum=sum+arr[i];
        }
    //    if(n>1)
    //    {
    //      if(sum-n+1>n)
    //     cout<<"YES"<<endl;
    //     else
    //     cout<<"NO"<<endl;
    //    }
    //    else
    //     cout<<"NO"<<endl;
        long long int count = 0;
        // if(sum%n != 0){
        //     count = sum%n;
        // }

        count = sum -n;

        long long int arr2[n];
        for(int i=0; i<n; i++){
            arr2[i] = 1;
        }

        for(int i=0; i<n; i++){
            if(arr[i] == arr2[i]){
                count = count - 1;
            }
            // else if(arr2[i] > arr[i]){
            //     count = count + (arr2[i]-arr[i]-1);
            // }
        }


        if(count>=0 && n != 1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }


    return 0;
}