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
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }

        int maxy = arr[0];

        for(int i=1; i<n; i++){
            if(arr[i]<= maxy){
                maxy = ((maxy/arr[i])+1)*arr[i];
            }
            else{
                maxy = arr[i];
            }
        }
        cout<<maxy<<endl;
    }


    return 0;
}