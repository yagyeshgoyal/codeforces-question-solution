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

        long long int even  = 0;
        long long int odd = 0;

        if(n==1){
            cout<<arr[0]<<endl;
        }
        else{
            for(int i=0; i<n; i++){
                if(arr[i]%2 == 1){
                    odd = odd + arr[i];
                }
                else{
                    even = even + arr[i];
                }

                cout<<((odd+even)/2)*2<<" ";
            }
            cout<<endl;
        }
    }


    return 0;
}