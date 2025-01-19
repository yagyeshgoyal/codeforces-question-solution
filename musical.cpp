#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        char arr[n];
        for(int i=0;i<n;i++)
        cin>>arr[i];
        int count=0;
        for(int i=2;i<n;i++){
            // cout<<"p"<<endl;
            int j;
            for( j=0;j<i-1;j++){
                if(arr[i-1]==arr[j] && arr[i]==arr[j+1])
                {
                break;}
                // cout<<"n"<<endl;
            }
            if(j==i-1)
            count++;
            // cout<<"k"<<endl;
        }
        // for(int i=0;i<n;i++)
        // cout<<arr[i];
        cout<<count+1<<endl;
    }


    return 0;
}