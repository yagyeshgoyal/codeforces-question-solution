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
        int maxi = 0;
        for(int i=0; i<n; i++){
            cin>>arr[i];
            maxi = max(maxi,arr[i]);
        }

        int p = 2*k;

        for(int i=0; i<n; i++){
            arr[i] = arr[i] + (((maxi-arr[i])/p)*p);
        }
        
        int left = maxi;
        int right = maxi + k -1;

        for(int i=0; i<n; i++){
            if(arr[i]+k-1>=left && arr[i]<=right){
                left = max(left,arr[i]);
                right = min(right,arr[i]+k-1);
            }
            else if(arr[i]+k-1 < left){
                arr[i] = arr[i] + (2*k);

                if(arr[i]+k-1>=left && arr[i]<=right){
                    left = max(left,arr[i]);
                    right = min(right,arr[i]+k-1);
                }
                else{
                    cout<<-1<<endl;
                    goto end;
                }
            }
        }

        if(left<=right){
            cout<<left<<endl;
        }
        else{
            cout<<-1<<endl;
        }

        end:;
        
    }


    return 0;
}