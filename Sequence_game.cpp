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
        int arr[n];
        vector<int>v;
        cin>>arr[0];
        v.push_back(arr[0]);
        for(int i=1;i<n;i++){
            cin>>arr[i];
            
        }
        for(int i=1;i<n;i++){
            int l=v.size();
            if(v[l-1]<=arr[i])
            v.push_back(arr[i]);
            else {
                v.push_back(arr[i]);
                i=i-1;
            }
        }

        cout<<v.size()<<endl;
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;

    }

    return 0;
}