#include<iostream>
#include<limits.h>
using namespace std;

int main()
{
    int tt;
    cin>>tt;

    while(tt--){
        int n;
        cin>>n;

        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }

        // long long int ans = INT_MAX;

        // long long int count = 1;
        // for(int i=0; i<n-1; i++){
        //     if(arr[i] == arr[i+1]){
        //         count++;
        //     }
        //     else{
        //         if(count != 1 && count != n){
        //             ans = min(ans,count);
        //         }
        //         count = 1;
        //     }

        //     if(count != 1 && count != n){
        //         ans = min(ans,count);
        //     }
        // }

        bool flage = true;
        for(int i=0; i<n-1; i++){
            if(arr[i] != arr[i+1]){
                flage = false;
                // cout<<"K"<<endl;
                break;
            }
        }

        int p =0;
            if(arr[0] == arr[1] || arr[0] == arr[2]){
                p = arr[0];
            }
            else{
                p = arr[1];
            }




        bool flage2 = true;
        for(int i=0; i<n-2; i++){
            if(arr[i] == p && arr[i] != arr[i+1] && arr[i] != arr[i+2] ){
                flage2 = false;
                break;
            }
        }

        if(n>2 && ((arr[0] != arr[1] && arr[0] != arr[2]) || (arr[n-1] != arr[n-2] && arr[n-1] != arr[n-3]))){
            flage2 = 0;
        }

        if(n == 1){
            flage = true;
        }

        if(n==2){
            if(arr[0] != arr[1]){
                flage2 = false;
            }
        }

        if(flage == true){
            cout<<-1<<endl;
        }
        else if(flage2 == false){
            cout<<0<<endl;
        }
        else{

            

            long long int ans =INT_MAX;
            long long int count = 0;
            for(int i=0; i<n; i++){
                if(arr[i] == p){
                    count++;
                }
                else{
                    ans = min(ans,count);
                    count = 0;
                }
                
            }

            ans = min(ans,count);
            cout<<ans<<endl;
        }

        
    }


    return 0;
}