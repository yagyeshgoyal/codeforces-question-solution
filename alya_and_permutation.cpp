#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void findans(int arr[], int n){
    // cout<<n<<endl;
    int k = log2(n);

    int p = pow(2,k)-1;
    // cout<<p<<" "<<k<<endl;

    if(n-p>2){
        swap(arr[n],arr[p]);
        // cout<<arr[n]<<" "<<arr[p]<<" " <<n<<endl;
    }
    else{
        findans(arr,n-2);
    }
}

int main()
{
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int arr[n+1];
        for(int i=0; i<=n; i++){
            arr[i] = i;
        }
        
        if(n==5){
            swap(arr[1],arr[2]);
        }
        else{
            if(n%2 == 0){
                findans(arr,n);
            }
            else{
                findans(arr,n-1);
            }
        }
        int ans = 0;

        for(int i=1; i<=n; i++){
            if(i%2 == 1){
                ans = ans&arr[i];
            }
            else{
                ans = ans | arr[i];
            }
        }
        cout<<ans<<endl;
        for(int i=1; i<=n; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }


    return 0;
}