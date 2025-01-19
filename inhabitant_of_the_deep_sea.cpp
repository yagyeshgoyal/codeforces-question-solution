#include<iostream>
using namespace std;

int main()
{

    int t;
    cin>>t;

    while(t--){
        long long int n,k;
        cin>>n>>k;


        long long int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }

        long long int start_yogi = k/2;
        if(k%2 == 1){
            start_yogi++;
        }

        long long int end_yogi = k/2;

        long long int ans = 0;

        for(long long int i=0; i<n; i++){
            if(arr[i] <= start_yogi){
                start_yogi = start_yogi - arr[i];
                arr[i] = 0;
                // cout<<"k"<<" ";
                ans++;
            }
            else{
                arr[i] = arr[i] - start_yogi;
                start_yogi = 0;
            }

            if(start_yogi == 0){
                break;
            }
        }

        // cout<<ans<<endl;

        for(long long int i=n-1; i>=0; i--){
            if(arr[i]==0){
                break;
            }

            if(arr[i] <= end_yogi){
                end_yogi = end_yogi - arr[i];
                arr[i] = 0;
                ans++;
            }
            else{
                arr[i] = arr[i] - end_yogi;
                end_yogi = 0;
            }

            if(end_yogi == 0){
                break;
            }
        }

        cout<<ans<<endl;
    }

    return 0;
}