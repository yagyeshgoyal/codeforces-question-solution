#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<unordered_map>
#include<queue>
#include<cmath>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int count = 0;
    while(t--){
        count++;
        int n;
        cin>>n;

        int arr[n];
        for(int i = 0; i<n; i++){
            cin>>arr[i];
        }

        for(int i = 0; i<n; i++){
            if(arr[i]%2 == 1){
                arr[i] = arr[i] + (arr[i]%10);
            }
        }

        sort(arr, arr+n);

        int even1 = 0;
        int odd1 = 0;
        int even3 = 0;
        int odd3 = 0;
        
        int count5 = 0;
        int count10 = 0;

        set<int>s5;
        set<int>s10;

        for(int i = 0; i<n; i++){
            if(arr[i]%10 == 0){
                s10.insert(arr[i]);
                count10++;
            }
            else if(arr[i]%10 == 2){
                if((arr[i]/10)%2 == 0){
                    even1++;
                    odd3++;
                }
                else{
                    odd1++;
                    even3++;
                }
            }
            else if(arr[i]%10 == 4){
                if((arr[i]/10)%2 == 0){
                    
                    even1++;
                    odd3++;
                }
                else{
                    odd1++;
                    even3++;
                }
            }
            else if(arr[i]%10 == 6){
                if((arr[i]/10)%2 == 0){
                    even3++;
                    odd1++;

                }
                else{
                    odd3++;
                    even1++;
                }
            }
            else if(arr[i]%10 == 8){
                if((arr[i]/10)%2 == 0){
                    even1++;
                    odd3++;
                }
                else{
                    odd1++;
                    even3++;
                }
            }

        }


        if(even1 == n || even3 == n ){
            cout<<"YES"<<endl;
        }
        else if(count10 == n && s10.size() == 1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }


    }

    return 0;
}