#include<iostream>
#include<queue>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        // priority_queue<pair<int,int>>max_heap;

        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
            // max_heap.push({arr[i],i});
        }

        bool ans = true;

        // for(int i=0; i<n-2; i++){
        //     if(arr[i] == 0){
        //         // continue;
        //     }
        //     else if(arr[i]>=1 && arr[i+1]>=2 && arr[i+2] >=1){
        //         arr[i] = arr[i]-1;
        //         arr[i+1] = arr[i+1]-2;
        //         arr[i+2] = arr[i+2] - 1;

                
        //         if(arr[i] == 0 && arr[i+1] == 0 && arr[i+2] == 0){
        //             i = i+2;
        //         } 
        //         else if(arr[i] == 0 && arr[i+1] == 0){
        //             i= i+1;
        //         }
        //         else if(arr[i] != 0 ){
        //             i = i-1;
        //         }
        //     }
        //     else{
        //         ans = false;
        //         break;
        //     }
        // }




        // if(arr[n-2] != 0 || arr[n-1] != 0){
        //     ans = false;
        // }

        // if(ans){
        //     cout<<"YES"<<endl;
        // }
        // else{
        //     cout<<"NO"<<endl;
        // }

        for(int i=1; i<n-1; i++){
            if(arr[i-1] <= 0){
                
            }
            else{
                
                arr[i] = arr[i] - (2*arr[i-1]);
                arr[i+1] = arr[i+1] - arr[i-1];
                arr[i-1] = 0;
            }
        }


        for(int i=0; i<n; i++){
            if(arr[i] != 0){
                ans = false;
                break;
            }
        }

        if(ans){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }


        // cout<<max_heap.top().first<<" "<<max_heap.top().second<<endl;
    }


    return 0;
}