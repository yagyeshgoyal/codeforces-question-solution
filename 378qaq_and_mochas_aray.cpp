#include<iostream>
#include<bits/stdc++.h>
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

        sort(arr,arr+n);

        bool flage = false;

        if(arr[0] == 1){
            cout<<"YES"<<endl;
        }
        else{
            int a = arr[0];
            int b ;
            int i;
            for(i=1; i<n; i++){
                if(flage == false){
                    if(arr[i]%a != 0){
                        b = arr[i];
                        flage = true;
                    }
                }
                else{
                    if(arr[i]%a != 0 && arr[i]%b != 0){
                        break;
                    }
                }
            }

            if(i==n){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }


    return 0;
}