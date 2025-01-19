#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        int arr[n] = {0};

        
        arr[0] = 2;
        arr[n-1] = 3;
        if(n%2==0)
        arr[((n+1)/2)] = 1;
        else
        arr[((n+1)/2)-1] = 1;
        int k = n;

        for(int i=1; i<n; i++){
            if(arr[i] == 0){
                arr[i] = k;
                k--;
            }
        }

        for(int i=0;i<n; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }


    return 0;
}