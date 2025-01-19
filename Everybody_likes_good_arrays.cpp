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
        int count = 0;
        cin>>arr[0];
        for(int i=1; i<n; i++){
            cin>>arr[i];
            if(arr[i]%2 == 0 && arr[i-1]%2 == 0){
                count++;
            }
            else if(arr[i]%2 == 1 && arr[i-1]%2 == 1){
                count++;
            }
        }

        cout<<count<<endl;
    }


    return 0;
}