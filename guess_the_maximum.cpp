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
        for(int i=0;i<n; i++){
            cin>>arr[i];
        }

        int ans = max(arr[0],arr[1]);

        for(int i=1;i<n-1; i++){
            int k = max(arr[i],arr[i+1]);

            if(k<ans){
                ans = k;
            }
        }

        cout<<ans-1<<endl;
    }

    return 0;
}