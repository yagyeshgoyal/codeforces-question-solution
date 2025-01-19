#include<iostream>
#define ll long long int
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll low=n+1;
        ll high=-1;
        ll *arr=new ll[n];

        long long int sum = 0;

        for(ll i=0;i<n;i++)
        {
            cin>>arr[i];
            sum = sum + abs(arr[i]);
            
        }
        int ans =0;
        int count = 0;
        for(int i=0; i<n; i++){
            if(arr[i]<=0){
                if(arr[i] != 0){
                    count++;
                }
            }
            else{
                if(count>0){
                    ans++;
                }

                count = 0;
            }
        }

        if(count>0){
            ans++;
        }


        cout<<sum<<" "<<ans<<endl;
        
        delete []arr;
    }

    return 0;
}