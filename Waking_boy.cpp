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
        cin>>arr[0];
        int count = 0;
        for(int i=1; i<n; i++){
            cin>>arr[i];
            if(arr[i]-arr[i-1]>=240){
                count = count+2;
            }
            else if(arr[i]- arr[i-1]>=120){
                count = count+1;
            }
        }

        if(arr[0]-0>=240){
            count = count+2;
        }
        else if(arr[0]- 0>=120){
            count = count+1;
        }
        if(1440-arr[n-1]>=240){
            count = count+2;
        }
        else if(1440- arr[n-1]>=120){
            count = count+1;
        }

        if(count>=2){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }


    return 0;
}