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

        vector<int>arr;

        for(int i=0; i<n; i++){
            int a;
            cin>>a;

            arr.push_back(a);
        }


        for(int i=1; i<(n+1)/2; i++){
            if(arr[i] != arr[n-i-1]){
                int count1 = 0;
                if(arr[i] == arr[i-1]){
                    count1++;
                }
                if(arr[n-i-1] == arr[n-i]){
                    count1++;
                }

                int count2 = 0;
                if(arr[i] == arr[n-i]){
                    count2++;
                }
                if(arr[n-i-1] == arr[i-1]){
                    count2++;
                }

                if(count1>count2){
                    swap(arr[i],arr[n-i-1]);
                }
            }
        }

        int ans = 0;
        for(int i=1; i<n; i++){
            if(arr[i] == arr[i-1]){
                ans++;
            }
        }

        cout<<ans<<endl;
    }

    return 0;
}