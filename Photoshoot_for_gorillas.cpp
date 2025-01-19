#include<iostream>
#include<bits/stdc++.h>
#include<set>
#include<map>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--){
        int n,m,k;
        cin>>n>>m>>k;

        int s;
        cin>>s;

        long long int arr[s];
        for(int i=0; i<s; i++){
            cin>>arr[i];
        }

        sort(arr,arr+s);

        long long int newarr[n][m];

        long long int count = 0;
        for(int i=0; i<(n+1)/2; i++){
            if(count<k && n-i>=k){
                count++;
            }

            for(int j=0; j<m; j++){
                newarr[i][j] = count;
                newarr[n-i-1][j] = count;
            }
        }

         count = 0;

        for(int j=0; j<(m+1)/2; j++){
            if(count<k && m-j>=k){
                count++;
            }

            for(int i=0; i<n; i++){
                if(newarr[i][j] ==1 || count == 1){
                    newarr[i][j] = max(newarr[i][j],count);
                }
                else{
                    newarr[i][j] *= count;
                }

                if(newarr[i][j] != newarr[i][m-j-1]){
                    if(newarr[i][m-j-1] ==1 || count==1){
                        newarr[i][m-j-1] = max(newarr[i][m-j-1],count);
                    }
                    else{
                        newarr[i][m-j-1] *= count;
                    }
                }
                
            }
        }

        set<long long int>st;
        map<long long int,long long int>mp;

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                mp[newarr[i][j]]++;
                st.insert(newarr[i][j]);
                // cout<<newarr[i][j]<<" ";
            }
            // cout<<endl;
        }

        long long int ans = 0;
        int right = s-1;

        auto it = st.rbegin();

        // cout<<"p"<<endl;
        
        while(it != st.rend()){
            // cout<<*it<<endl;
            if(s>=mp[*it]){
                s = s - mp[*it];
                while(mp[*it]--){
                    ans = ans + 1ll*(*it)*(arr[right]);
                    right--;
                }
            }
            else{
                while(s>0){
                    ans = ans + 1ll*(*it)*(arr[right]);
                    right--;
                    s--;
                }
            }

            // cout<<s<<endl;

            if(s==0){
                // cout<<"m"<<endl;
                break;
            }

            it++;
        }

        cout<<ans<<endl;

    }


    return 0;
}