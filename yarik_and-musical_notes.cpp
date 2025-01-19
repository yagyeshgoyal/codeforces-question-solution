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

        int arr[n];
        map<int,int>mp;
        for(int i=0; i<n; i++){
            cin>>arr[i];
            mp[arr[i]]++;
        }

        long long int ans = 0;

        for(auto i : mp){
            ans = ans + (1ll*i.second *(i.second-1))/2;
        }

        ans = ans + 1ll*mp[1]*mp[2];

        cout<<ans<<endl;
    }

    return 0;
}