#include <bits/stdc++.h>
using namespace std;



bool cmp(pair<long long int, long long int> a, pair<long long int, long long int> b) {
    return a.first < b.first; 
}
 


int main() {
    

    int t;
    cin >> t;
    while (t--) {
        long long int n, m;
    cin >> n >> m;

    vector<vector<long long int>>vt(n, vector<long long int>(m));
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> vt[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        sort(vt[i].begin(), vt[i].end());
    }


    vector<long long int>s;
    bool flag = true;
    



    for (int j = 0; j < m; j++) {
        vector<pair<long long int, long long int>>k;

        for (int i = 0; i < n; i++) {
            k.push_back( {vt[i][j], i});
        }
        sort(k.begin(), k.end(), cmp);

        int ret = 0;
        vector<long long int> temp;
        temp.push_back(k[0].second);

        for (int i = 1; i < k.size(); i++) {
            long long int diff = k[i].first - k[i - 1].first; 
            if (diff > 1) {
                flag = false;
                break;
            }
            temp.push_back(k[i].second);
        }

        if (s.empty()) {
            s = temp;
        } else {
            for (int i = 0; i < temp.size(); i++) {
                long long int comparison = temp[i] - s[i];
                if (comparison != 0) {
                    flag = false;
                    break;
                }
            }
        }

        int msir  = 0;
    }

    if (flag) {
        for (auto i : s) {
            long long int ans = i + 1;
            cout << ans << " ";
        }
    } else {
        cout << -1;
    }
    cout<<endl;
    }

    return 0;
}