#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--){
        int n, k;
            cin >> n >> k;


        vector<pair<int,int>> vp;


            for (int i = 0; i < n; i++) {
                int x, y;
                    cin >> x >> y;
                vp.push_back({min(x,y), max(x,y)});
            }


        sort(vp.begin(), vp.end());

        bool flag = false;
        int count = 0;

            for (int i = 0; i < n; i++) {
                int val = vp[i].first + vp[i].second;
                if (k >= val) {
                    k -= val;
                    count += (vp[i].first)*(vp[i].second);

                    if (!k) {
                        flag = true;
                        break;
                    }
                }
                else {
                    if (k >= vp[i].second)      count += (vp[i].first)*(vp[i].second);
                    else    count += (vp[i].first)*(k);

                    flag = true;
                    break;
                }
            }
        if (flag)   cout << count << endl;
        else    cout << -1 << endl;
    }
}