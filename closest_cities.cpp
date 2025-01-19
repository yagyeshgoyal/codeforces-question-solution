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

        long long int leftarr[n+1]={0};
        leftarr[0] = 0;
        leftarr[1] = 1;

        for(int i=1; i<n; i++){
            if(i+1<n && arr[i]-arr[i-1] > arr[i+1] - arr[i]){
                leftarr[i+1] = leftarr[i] + 1;
            }
            else if(i+1<n && arr[i]-arr[i-1] < arr[i+1] - arr[i]){
                leftarr[i+1] = leftarr[i] + (arr[i+1] - arr[i]);
            }
            else{
                leftarr[i+1] = leftarr[i] + 1;
            }
        }

        long long int rightarr[n+1]= {0};
        rightarr[n] = 0;
        rightarr[n-1] = 1;

        for(int i=n-2; i>=0; i--){
            if(i-1>=0 && arr[i]-arr[i-1] < arr[i+1] - arr[i]){
                rightarr[i] = rightarr[i+1] + 1;
            }
            else if(i-1>=0 && arr[i]-arr[i-1] > arr[i+1] - arr[i]){
                rightarr[i] = rightarr[i+1] + (arr[i] - arr[i-1]);
            }
            else{
                rightarr[i] = rightarr[i+1] + 1;
            }
        }

        // for(int i=0; i<=n; i++)
        // cout<<leftarr[i]<<" "<<rightarr[i]<<endl;

        int q;
        cin>>q;

        while(q--){
            int l,r;
            cin>>l>>r;

            if(l>r){
                cout<<rightarr[r]-rightarr[l]<<endl;
            }
            else{
                cout<<leftarr[r-1]-leftarr[l-1]<<endl;
            }
        }
        
    }

    return 0;
}