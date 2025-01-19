#include<iostream>
#include<vector>
using namespace std;

int main()
{

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>ans;
        for(int i=0; i<n/2; i++){
            ans.push_back(i+1);
            ans.push_back(n-i);
        }

        if(n%2 == 1){
            ans.push_back(n/2+1);
        }

        for(auto i: ans){
            cout<<i<<" ";
        }
        cout<<endl;
    }

    return 0;
}