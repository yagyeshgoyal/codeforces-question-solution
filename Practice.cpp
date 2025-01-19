#include<bits/stdc++.h>
using namespace std;
    
#define d1(x)                cout<<#x<<": "<<x<<endl
#define d2(x, y)             cout<<#x<<": "<<x<<" | "<<#y<<": "<<y<<endl
#define d3(x, y, z)          cout<<#x<<":" <<x<<" | "<<#y<<": "<<y<<" | "<<#z<<": "<<z<<endl
#define d4(a, b, c, d)       cout<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<endl
#define d5(a, b, c, d, e)    cout<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<endl
#define d6(a, b, c, d, e, f) cout<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<" | "<<#f<<": "<<f<<endl
    
// #define  int   long long int
#define pi pair<int, int >
#define vi vector< int > 
#define dd double
#define f(i,a,b) for(int i=a;i<b;i++)
#define fr(i,a,b) for(int i=a;i>=b;i--)
// #define ll long long int
#define pb push_back
#define lcm(a, b) ((a) * (b)) / __gcd(a, b)
#define mp make_pair
#define in insert
#define fi first
#define lb lower_bound
#define ub upper_bound
#define se second
#define all(v) (v).begin(),(v).end()
const int mod = 1e9 + 7;
int cnt1=0,cnt2=0,cnt3=0,cnt4=0,cnt5=0,ans1=0,ans2=0,ans3=0;
 
using ll = long long;
 
int main()
{
    int T;
    cin >> T;
 
    while(T--){
        int n;
            cin >> n;
        vector<ll> v(n);
            f(i, 0, n)  cin >> v[i];
        if (n == 1) {
            cout << "1" << endl;
            continue;
        }
        map<ll, ll> mp;
            f(i, 0, n-1) {
                mp[v[i+1] - v[i]]++;
            }   
        vector<pair<ll, ll>> vp;
        for (auto ele : mp) {
            vp.push_back({ele.first, ele.second});
            cout<<ele.first<<" "<<ele.second<<endl;
        }
        if (vp.size() == 1) {
            if (vp[vp.size() - 1].second == 1) {
                if (vp[vp.size()-1].first % 2 == 0)     cout << vp[vp.size()-1].first / 2 << endl;
                else    cout << (vp[vp.size()-1].first / 2) + 1 <<endl;
            }
            else    cout << vp[vp.size()-1].first << endl;
        }
        else {
            if (vp[vp.size()-1].second != 1)    cout << vp[vp.size()-1].first << endl;
            else    cout << vp[vp.size()-2].first << endl;
        }
    }   
}