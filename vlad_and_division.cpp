#include<iostream>
#include<map>
using namespace std;

int main()
{

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        long long int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }

        map<long long int,long long int>mp;

        int ans=0;
        for(int i=0; i<n; i++){
            if(!mp[arr[i]]) ++ans, ++mp[((1 << 31) - 1) ^ arr[i]];
            else --mp[arr[i]];
        }

        cout<<ans<<endl;
    }

    return 0;
}