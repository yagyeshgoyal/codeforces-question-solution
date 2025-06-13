#include <bits/stdc++.h>
using namespace std;
using ll = long long;


int count1s(ll x) {
    return __builtin_popcountll(x);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--){
        int n;
        ll k;
        cin >> n >> k;

        vector<ll> a(n);
        ll ans = 0;
        for (int i = 0; i < n; ++i) {
            // cout<<i<<endl;
            int b;
            cin>>b;
            a[i] = b;
            ans += count1s(a[i]);
        }
        // cout<<"k"<<endl;

        
        // using T = tuple<ll, int, ll>; 
        using T = pair<int,int>;
        priority_queue<T, vector<T>, greater<T>> pq;

        for (int i = 0; i < n; ++i) {
            ll x = a[i];
            int j = 1;
            while(x%2 != 0){
                x = x/2;
                j++;
            }

            pq.push({j,x/2});
        }

        while (k > 0 && !pq.empty()) {
            auto front = pq.top(); 
            pq.pop();

            // cout<<k<<" "<<front.first<<""

            long long int num = powl(2,front.first);
            if(num>k){
                break;
            }
            else{
                ans = ans + num;
                k = k - num;
            }

            int j = front.first;
            int value = front.second;

            while(value%2 != 0){
                value = value/2;
                j++;
            }

            pq.push({j,value/2});

           
        }

        // cout<<"k"<<endl;

        cout << ans <<endl;;

        // cout<<"ans"<<endl;
    }
    return 0;
}
