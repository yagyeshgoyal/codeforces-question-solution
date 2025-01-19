#include<iostream>
#include<set>
#include<map>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--){
        long long int n,a,b;
        cin>>n>>a>>b;

        a = __gcd(a,b);


        set<long long int>s;
        for(int i=0; i<n; i++){
            long long int k;
            cin>>k;

            s.insert(k%a);
        }

        // int maxi = *(s.rbegin());

        // set<int>st;
        // st.insert(maxi);

        // for(auto i : s){
        //     int diff = maxi - i;
        //     if(diff == 0){
        //         break;
        //     }
        //     else if(diff<a && diff < b){
        //         st.insert(i);
        //     }
        //     else {
        //         int temp = diff;
        //         temp = temp - (temp/a)*a;
        //         temp = temp - (temp/b)*b;

        //         if(temp != 0){
        //             int temp1 = temp;
        //             temp = diff;
        //             temp = temp - (temp/b)*b;
        //             temp = temp - (temp/a)*a;

        //             if(temp != 0){
        //                 if(temp1<=temp){
        //                     st.insert(maxi-temp1);
        //                 }
        //                 else{
        //                     st.insert(maxi-temp);
        //                 }
        //             }
        //         }
        //     }
        // }

        // if(st.size() == 1){
        //     cout<<0<<endl;
        // }
        // else{
        //     int p = max(a,b);
        //     int q = min(a,b);

        //     // auto it = st.begin();
        //     // int k = *it;
        //     // it++;

        //     // int m = *(st.rbegin());
        //     // int n = *(st.begin());

        //     // if(m+q <= n+p){
        //     //     int ans = min((n+p)-(*it+ q), (m)-(n));
        //     //     cout<<ans<<endl;
        //     // }
        //     // else{
        //     //     int ans = min((m+q)-min((n+p),(*it+ q)), m-n);
        //     //     cout<<ans<<endl;
        //     // }

        //     int ans = *(st.rbegin()) - *(st.begin());
        //     int curr = max(*(st.begin()) + p, *(st.rbegin()));
        //     auto it = st.begin();
        //     it++;
        //     while(it != st.end()){
        //         ans = min(ans,curr-(*it));

        //         curr = max(curr,*it + q);
        //         it++;
        //     }

        //     if(curr >= *(st.rbegin()) + q){
        //         ans = min(ans, curr- *(st.rbegin())+q);
        //     }
        //     else{
        //         ans = min(ans, abs(curr- *(st.rbegin())+q));
        //     }

        //     curr = max(*(st.begin()) + q, *(st.rbegin()));
        //     it = st.begin();
        //     it++;
        //     while(it != st.end()){
        //         ans = min(ans,curr-(*it));

        //         curr = max(curr,*it + q);
        //         it++;
        //     }

        //     if(curr >= *(st.rbegin()) + q){
        //         ans = min(ans, curr- *(st.rbegin())+q);
        //     }
        //     else{
        //         ans = min(ans, abs(curr- *(st.rbegin())+q));
        //     }
            

        //     cout<<ans<<endl;

        // }
        
        // set<long long int>tp;
        // for(auto i : s){
        //     if(i%a <= i%b){
        //         tp.insert(i%a);
        //     }
        //     else{
        //         tp.insert(i%b);
        //     }
        // }

        // long long int ans = *(tp.rbegin()) - *(tp.begin());

        // long long int diff = abs(a-b);
        // diff = min(diff, min(a,b));

        // if(diff == 0){
        //     auto it = tp.begin();
        //     long long int p = *it;
        //     it++;
        //     while(it != tp.end()){
        //         ans = min(ans, p+a - *it);

        //         p = *it;
        //         it++;
        //     }
        // }
        // else{
        //     set<long long int>sk;
        //     for(auto i : tp){
        //         // cout<<i<<" ";
        //         sk.insert(i%diff);
        //     }
        //     // cout<<endl;

        //     ans = min(ans, *(sk.rbegin()) - *(sk.begin()));

        //     // cout<<diff<<endl;

        //     auto it = sk.begin();
        //     long long int p = *it;
        //     // cout<<p<<" ";
        //     it++;
        //     while(it != sk.end()){
        //         ans = min(ans, p+diff - *it);

        //         p = *it;
        //         // cout<<p<<" ";
        //         it++;
        //     }
        // }

        long long int ans = *s.rbegin() - *s.begin();

        auto it = s.begin();
        int k = *it;

        it++;

        while(it != s.end()){
            ans = min(ans,k+a - *it);
            k = *it;
            it++;
        }

        cout<<ans<<endl;
    }


    return 0;
}