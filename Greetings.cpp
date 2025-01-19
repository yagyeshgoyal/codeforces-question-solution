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
        int brr[n];

        for(int i=0; i<n; i++){
            cin>>arr[i]>>brr[i];
        }

        int count =0;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(arr[i]>arr[j] && brr[i]<brr[j] && i!=j){
                    count++;
                }
                else if(arr[i] == arr[j] && i!=j){
                    count++;
                }
            }
        }

        cout<<count<<endl;
    }

    return 0;
}