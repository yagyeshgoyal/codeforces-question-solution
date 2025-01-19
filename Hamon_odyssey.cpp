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

        int sum = arr[0];

        for(int i=1; i<n; i++){
            sum = sum & arr[i];
        }

        if(sum>0){
            cout<<1<<endl;
        }
        else{
            int count = 0;
            int zero ;
            int i;
            for(i=0; i<n; i++){
                if(arr[i] == 0){
                    count++;
                }
                else{
                    zero = arr[i];
                    break;
                }
            }
            i++;
            for( ; i<n; i++){
                zero = zero & arr[i];

                if(zero == 0){
                    count++;
                    zero = arr[i+1];
                }
            }
            cout<<count<<endl;
        }
    }


    return 0;
}