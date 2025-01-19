#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,q;
        cin>>n>>q;
        vector<long long int>arr;
        arr.push_back(0);
        long long int sum = 0;
        for(int i=0; i<n; i++){
            int a;
            cin>>a;

            sum = sum + a;

            arr.push_back(a);
        }

        for(int i=1; i<=n; i++){
            arr[i] = arr[i] + arr[i-1];
        }

        while(q--){
            int l,r,k;
            cin>>l>>r>>k;

            long long int  intervalSum = arr[r]- arr[l-1];

            int noOfInterval = r-l+1;

            if(((sum-intervalSum)%2 == 0 && (1ll*noOfInterval*k)%2 == 1) || ((sum-intervalSum)%2 == 1 && (1ll*noOfInterval*k)%2 == 0)){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }

            
        }

    }


    return 0;
}