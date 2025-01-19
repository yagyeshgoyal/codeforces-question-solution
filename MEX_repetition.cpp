#include<iostream>
#include<set>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;

        int arr[n+1];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }

        set<int>nonPresent;
        for(int i=0; i<=n; i++){
            nonPresent.insert(i);
        }



        for(int i=0; i<n; i++){
            nonPresent.erase(arr[i]);
        }

        auto it = nonPresent.begin();
        arr[n] = *it;

        k = k%(n+1);
        
        // sort(nonPresent.begin(), nonPresent.end());

        // for(int i=0; i<k; i++){
        //     for(int j=0; j<n; j++){
        //         auto it = nonPresent.begin();
        //         int temp = arr[j];
        //         arr[j] = *it;
        //         nonPresent.erase(*it);
        //         nonPresent.insert(temp);
        //         // sort(nonPresent.begin(), nonPresent.end());

        //     }
        // }


        int p = 0;
        for(int i=(n+1-k); p<n; i = (i+1)){
            cout<<arr[(i)%(n+1)]<<" ";
            p++;
        }
        cout<<endl;
    }


    return 0;
}