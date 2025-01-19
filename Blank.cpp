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
        int count=0,k=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]==0){
                count++;
            }
            else
            {
                k=max<int>(k,count);
                count=0;
            }
        }
        k=max<int>(k,count);
        cout<<k<<endl;
    }


    return 0;
}