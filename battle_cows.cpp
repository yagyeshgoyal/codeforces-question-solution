#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--){
        int n,k;
        cin>>n>>k;

        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }

        //for matching with indexing
        k = k-1;
        int index = k;
        for(int i=0; i<n; i++){
            if(arr[i] > arr[index]){
                index = i;
                break;
            }
        }

        if(index == k){
            cout<<n-1<<endl;
        }
        else if(index > k){
            cout<<index-1<<endl;
        }
        else{
            int count = index;
            for(int i = index+1; i<n; i++){
                if(arr[i] >= arr[k]){
                    index = i;
                    break;
                }
            }

            int ans;
            if(count>0)
            ans = max(count-1, 1 + (index - count-1));
            else{
                ans = max(count-1, 0 + (index - count-1));
            }
            cout<<ans<<endl;
        }
        
    }


    return 0;
}