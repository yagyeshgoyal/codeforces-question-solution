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

        int f,k;
        cin>>f>>k;


        int arr[n];
        map<int,int>mps;
        set<int>sk;
        for(int i=0; i<n; i++){
            cin>>arr[i];
            mps[arr[i]]++;
            sk.insert(arr[i]);
        }

        int fav = arr[f-1];

        string ans = "YES";

        auto it  = sk.rbegin();
        for( ; it != sk.rend(); ++it){
            
            
            if(mps[*it] == k){
                if(*it == fav){
                    ans = "YES";
                }
                else{
                    ans = "NO";
                }
                k = k-mps[*it];
                break;
            }
            else if(mps[*it] >k){
                if(*it == fav){
                    ans = "MAYBE";
                }
                else{
                    ans = "NO";
                }
                k = k - mps[*it];
                break;
            }
            else{
                if(*it == fav){
                    ans = "YES";
                    break;
                }
                k = k - mps[*it];
            }

            if(k<=0){
                break;
            }

        }

        cout<<ans<<endl;


    }

    return 0;
}