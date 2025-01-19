#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--){
        int n,k;
        cin>>n>>k;

        vector<int>arr;
        for(int i=0; i<n; i++){
            int a;
            cin>>a;

            arr.push_back(a);
        }

        sort(arr.begin(), arr.end());

        long long int ans = k;
        long long int able = n;
        long long int notable = 0;
        long long int countnorow = 0;

        for(int i=0; i<n; i++){
            long long int p = arr[i]-countnorow;
            if(arr[i]- countnorow == 0 ){
                able--;
                notable++;
            } 
            else if(1ll*p*able < 1ll*k){
                // ans = ans + p*able;
                countnorow = countnorow + p;
                // able--;
                notable++;
                k = k - p*able;
                able--;
            }
            else if(1ll*p*able == 1ll*k){
                // ans = ans + p*able;
                countnorow = countnorow + p;
                // able--;
                k = 0;
                able--;
            }
            else{
                // ans  = ans + k;
                k = 0;
                // countnorow = countnorow 
                able--;
            }

            if(k ==0){
                break;
            }
        }

        ans = ans + notable;
        cout<<ans<<endl;
    }


    return 0;
}