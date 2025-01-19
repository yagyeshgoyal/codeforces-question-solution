#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int findMex(int a , int b){
    set<int>st;
    st.insert(a);
    st.insert(b);

    int k = 0;

    for(auto i : st){
        if(i == k){
            k++;
        }
        else{
            return k;
        }
    }

    return k;
}

int main()
{   
    int t;
    cin>>t;

    while(t--){
        int n, a,b;
        cin>>n>>a>>b;

        vector<int>ans(n,-1);
        a--;
        b--;

        ans[a] = 0;
        ans[(a+1)%n] = 1;
        ans[(a-1+n)%n] = 1;

        if((a+1)%n == b || (a-1+n)%n == b){
            // continue;
        }
        else if((a+1 +1)%n == b || (a-2+n)%n == b){
            ans[b] = 2;
        }
        else{
            ans[b] = 1;
        }

        // cout<<"r"<<endl;

        for(int i=a+2; i<n; i++){
            // cout<<"k"<<endl;
            if(ans[i] == -1){
                if(ans[(i+1)%n] == -1){
                    // ans[i] = findMex(ans[i-2],ans[i-1]);
                    ans[i] = (ans[i-2])%2;
                }
                else{
                    ans[i] = findMex(ans[i-1], ans[(i+1)%n]);
                }
            }
        }
        // cout<<"p"<<endl;

        for(int i=0; i<n; i++){
            if(ans[i] == -1){
                if(ans[(i+1)%n] == -1){
                    // ans[i] = findMex(ans[(i-2 + n)%n],ans[(i-1+n)%n]);
                    ans[i] = ans[(i-2+n)%n]%2;
                }
                else{
                    ans[i] = findMex(ans[(i-1+n)%n], ans[(i+1)%n]);
                }
            }
            else{
                // ans[i] = findMex(ans[(i-1+n)%n], ans[(i+1)%n]);
                break;
            }
        }

        if(n==3){
            ans[0] = 0;
            ans[1] = 1;
            ans[2] = 2;
        }

        for(int i=0; i<n; i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }



    return 0;
}