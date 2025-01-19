#include<iostream>
#include<vector>
#include<map>

using namespace std;

int main()
{
    int n;
    cin>>n;

    int arr1[n];
    for(int i=0; i<n; i++){
        cin>>arr1[i];
    }

    int arr[n];
    map<int,int>mp;
    for(int i=0; i<n; i++){
        arr[i] = i+1;
        mp[i+1] = i;
    }

    vector<pair<int,int>>ans;

    for(int i=n-1; i>=0; i--){
        int num = arr1[i];

        int ind = mp[num];

        for(int j=ind; j>=1; j--){
            ans.push_back({arr[j],arr[j-1]});
            swap(mp[arr[j]], mp[arr[j-1]]);
            swap(arr[j], arr[j-1]);
        } 
    }

    cout<<ans.size()<<endl;

    for(int i=0; i<ans.size(); i++){
        cout<<ans[i].first<<" "<<ans[i].second<<endl;
    }



    return 0;
}