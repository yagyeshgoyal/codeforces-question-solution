#include<iostream>
#include<map>
#include<vector>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--){
        int n,m,q;
        cin>>n>>m>>q;

        int arr1[n];
        for(int i=0; i<n; i++){
            cin>>arr1[i];
        }
        vector<int>arr2;
        map<int, bool>mp;
        for(int i=0; i<m; i++){
            int a;
            cin>>a;

            if(!mp.count(a)){
                arr2.push_back(a);
                mp[a] = true;
            }
        }

        int ans = 1;

        if(arr2.size()>n){
            ans = 0;
        }
        else{
            int i=0;
            int j=0;

            while(i<n && j<arr2.size()){
                if(arr1[i] == arr2[j]){
                    i++;
                    j++;
                    
                }
                else{
                    ans = 0;
                    break;
                }
            }
        }

        if(ans){
            cout<<"YA"<<endl;
        }
        else{
            cout<<"TIDAK"<<endl;
        }
    }


    return 0;
}