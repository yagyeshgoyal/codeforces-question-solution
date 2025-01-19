#include<iostream>
#include<bits/stdc++.h>
using namespace std;



int main()
{
    int t;
    cin>>t;
    while(t--){
        
        int arr[3];
        
        for(int i=0; i<3; i++){
            cin>>arr[i];
        }

        sort(arr,arr+3);

        bool flage = false;

        if(arr[1] == arr[0] && arr[2] == arr[0]){
            flage = true;
        }

        if(arr[1]%arr[0] == 0 && arr[2]%arr[0] == 0 )
        {
            int count = arr[1]/arr[0] - 1;
            
            count += arr[2]/arr[0] - 1;
            

            if(count<=3){
                flage = true;
            }
        }

        if(flage){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

        
        
    }


    return 0;
}