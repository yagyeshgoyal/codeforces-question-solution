#include<iostream>
#include<vector>
#include<map>
#include<stack>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        cin.ignore();
        string s;
        cin>>s;

        map<int,int>mp;
        int maxi = 0;
        for(int i=0; i<n; i++){
            mp[s[i]-'a']++;
            maxi = max(maxi,mp[s[i]-'a']);
        }

        // if(maxi >= n/2){
        //     int left = n- maxi;
        //     if(maxi>=left){
        //         cout<<n-(left*2)<<endl;
        //     }
        //     else{
        //         cout<<n-(maxi*2)<<endl;
        //     }

        // }
        // else{
        //     stack<char>st;

        //     st.push(s[0]);

        //     for(int i=1; i<n; i++){
        //         if(st.empty()){
        //             st.push(s[i]);
        //         }
        //         else if(s[i] == st.top()){
        //             st.push(s[i]);
        //         }
        //         else{
        //             char p = st.top();
        //             st.pop();

        //             if(!st.empty() && p == st.top()){

        //             }
        //             else if(st.empty() || p != st.top()){
                        
        //                 if(i<n-1 && s[i] == s[i+1]){

        //                 }
        //                 else {
        //                     st.push(p);
        //                     st.push(s[i]);
        //                 }
        //             }
        //         }
        //     }

        //     vector<char>ans;
        //     int i = st.size();
        //     while(i>0 && !st.empty()){
        //         char p = st.top();
        //         st.pop();

        //         if(!st.empty() && p != st.top()){
        //             st.pop();
        //             i--;
        //         }
        //         else{
        //             if(ans.size() >0 && p != ans[ans.size()-1]){
        //                 ans.pop_back();
        //             }
        //             else
        //             ans.push_back(p);
        //         }
        //     }

        //     cout<<ans.size()<<endl;
        // }

        cout<<max(n%2, 2*maxi - n)<<endl;

        
    }


    return 0;
}