#include<iostream>
using namespace std;

int main()
{

    int n;
    cin>>n;

    int arr[n];
    int temp[n];
    for(int i=0;i<n; i++){
        cin>>arr[i];
        temp[i] = arr[i];
    }

    int ans=0;

    for(int i = 0; i<n; i = i+2){
        if(temp[i]%2 != 0){
            while(temp[i]%2 == 1){
                temp[i] = temp[i]/2;

                ans++;
            }
        }

        if(i+1<n && temp[i+1]%2 != 1){
            while(temp[i+1]%2 == 0){
                temp[i+1] = temp[i+1]/2;
                ans++;
            }
        }
        // cout<<ans<<endl;
    }

    // cout<<ans<<endl;

    int result=0;
    for(int i = 0; i<n; i = i+2){
        if(arr[i]%2 != 1){
            while(arr[i]%2 == 0){
                arr[i] = arr[i]/2;

                result++;
            }
        }

        if(i+1<n && arr[i+1]%2 != 0){
            while(arr[i+1]%2 == 1){
                arr[i+1] = arr[i+1]/2;
                result++;
            }
        }
    }

    cout<<min(result,ans)<<endl;



    return 0;
}