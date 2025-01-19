#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        long long int arr[n][n];
        // long long int ans[n];
        vector<long long int>ans;
        for(int i=0; i<n; i++){
            // ans[i] = pow(2,30)-1;
            ans.push_back(pow(2,30) - 1);
        }

        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cin>>arr[i][j];
                if(i!=j){
                    ans[i] = ans[i] & arr[i][j];
                ans[j] = ans[j] & arr[i][j];
                }
            }
        }

        bool flage = true;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){

                if(i!=j && arr[i][j] != (ans[i] | ans[j])){
                    flage = false;
                    break;
                }
            }
            
            if(flage == false){
                break;
            }
        }

        if(flage){
            cout<<"YES"<<endl;
            for(int i=0; i<n; i++){
                cout<<ans[i]<<" ";
            }
        }
        else{
            cout<<"NO";
        }
        cout<<endl;
    }


    return 0;
}