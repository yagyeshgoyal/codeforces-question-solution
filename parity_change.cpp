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
        
        int arr[n];
        vector<int> even;
        vector<int> odd ;
        long long int maxi = 0;
        for(int i=0; i<n; i++){
            cin>>arr[i];

            if(arr[i]%2==0){
                even.push_back(arr[i]);
            }
            else{
                // odd++;
                odd.push_back(arr[i]);
                maxi = max<long long int>(maxi,arr[i]);
            }
        }

        sort(arr,arr+n);
        sort(even.begin(),even.end());
        sort(odd.begin(),odd.end());

        if(even.size()==0||odd.size()==0){
            cout<<0<<endl;
        }
        else{
            long long int ans = 0;
            for(int i=0; i<even.size(); i++){
                // if(arr[i]%2 == 0){
                    if(even[i]<maxi){
                        ans++;
                        maxi = maxi + even[i];
                    }
                    else{
                        // ans = ans + 2;
                        // maxi = maxi + arr[i];
                        // maxi = maxi + arr[i];
                        ans = 1 + even.size();
                        break;
                    }

                        // maxi = maxi + arr[i];
                    
                // }
            }

            cout<<ans<<endl;
        }
    }


    return 0;
}