#include<iostream>
using namespace std;

int main()
{

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int arr[n+1]={0};

        for(int i=0; i<n; i++){
            int a ;
            cin>>a;

            arr[a]++;
        }

        int player = 1;

        int ans = 0;
        int chance = 1;
        int t = 1;

        // for(int i=0; i<n+1; i++){
        //     if(player == 1){
        //         if(arr[i] == 0 || (chance > arr[i] && t != 1)){
        //             ans = i;
        //             player = 2;
        //             break;
        //         }
        //         else{
        //             ans = i+1;
        //             player =2;
        //             t = 0;
        //         }
        //     }
        //     else{
        //         if(arr[i] == 0 | chance >= arr[i]){
        //             ans = i;
        //             player = 1;
        //             break;
        //         }
        //         else{
        //             ans =i+1;
        //             player = 1;
        //             chance++;
        //         }
        //     }
        // }

        for(int i=0; i<=n; i++){
            if(arr[i] == 0){
                ans = i;
                break;
            }
            else if(arr[i] == 1 && t==1){
                ans = i+1;
                t = 0;
            }
            else if(arr[i] == 1 && t != 1){
                ans = i;
                break;
            }
            else {
                i+1;
            }
        }

        cout<<ans<<endl;
    }

    return 0;
}