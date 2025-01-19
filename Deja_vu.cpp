#include<iostream>
#include<bits/stdc++.h>
#include<set>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,q;
        cin>>n>>q;
        int arr1[n],arr2[q];
        set<int>st;

        long long int maxy = -1;
        for(int i=0;i<n;i++){
            cin>>arr1[i];
            if(arr1[i]%2==0){
                st.insert(i);
                 maxy = max<long long int>(maxy,arr1[i]);
            }
        }
        
        set<int>st2;

        for(int i=0;i<q;i++)
        cin>>arr2[i];

        int min = 31;
        for(int i=0; i<q; i++){
            if(arr2[i]<min){
                st2.insert(i);
                min = arr2[i];
            }
        }
        
        for(auto i : st2){
            long long  int p=pow(2,arr2[i]);
            if(p<=maxy){
                for(auto j : st){
                    if(arr1[j]%p==0){
                        arr1[j]+=(p/2);
                        maxy = max<long long int>(maxy,arr1[j]);
                    }
                    
                }
                if(arr2[i] == 1){
                    st.empty();
                }
            }
            if(st.size() == 0){
                break;
            }
        }

        for(int i=0;i<n;i++)
        cout<<arr1[i]<<" ";
        cout<<endl;
        
    }


    return 0;
}