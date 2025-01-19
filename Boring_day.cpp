#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    

    while(t--){
        int n,l,r;
        cin>>n>>l>>r;

        int arr[n];

        for(int i=0; i<n; i++){
            cin>>arr[i];
        }

        int ans = 0;
        int i=0;
        int j=0;
        int sum = 0;

        while(j<n){
            sum = sum + arr[j];
            if(sum<l){
                j++;
            }
            else if(sum>=l && sum<=r){
                ans++;
                i=j+1;
                j++;
                sum = 0;
            }
            else{
                while(i<=j && sum>r){
                    sum = sum - arr[i];
                    i++;
                }

                if(sum>=l && sum<=r){
                    ans++;
                    i=j+1;
                    j++;
                    sum = 0;
                }
                else{
                    j++;
                }
            }

            // cout<<sum<<endl;
        }

        cout<<ans<<endl;
    }


    return 0;
}