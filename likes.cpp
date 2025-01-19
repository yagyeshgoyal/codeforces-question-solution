#include<iostream>
using namespace std;

int main()
{

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        int pos=0,neg=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]>0)
            pos++;
            else
            neg++;
        }
        int count=1;
        int sum=0;
        while(count<=pos){
            cout<<count<<" ";
            sum++;
            count++;
        }
        count=1;
        while(count<=neg){
            cout<<sum-count<<" ";
            count++;
        }
        cout<<endl;
        
        count=1;
        sum=0;
        while(count<=pos && count<=neg ){
            sum++;
            cout<<sum-count+1<<" ";
            cout<<sum-count<<" ";
           
            count++;
        }
        sum=0;
        while(count<=pos){
            sum++;
            cout<<sum<<" ";
            count++;
        }
        cout<<endl;
        

    }

    return 0;
}