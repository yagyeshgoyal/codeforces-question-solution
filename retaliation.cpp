

#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<unordered_map>
#include<queue>
#include<cmath>
#include<bits/stdc++.h>
using namespace std;


bool findans(vector<int>& arr) {
    int n = arr.size();
    if (n == 1) return arr[0] == 0;

    
    int a1 = arr[0];
    int  a2 = arr[1];


    int value = 1*(n-1) - 2*n; 

    if (value == 0) return false; 

    // Use Cramer's rule
    int dx = a1 * (n-1) - a2*n;
    int dy = 1ll * a2 - 2*a1;

    if (dx%value != 0 || dy%value != 0) return false;

    int x = dx / value;
    int y = dy / value;

    
    for (int i = 0; i < n; ++i) {
        int ans = x * (i + 1) + y * (n - i);
        if (arr[i] != ans) return false;
    }

    return true;
}

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int &x : arr) cin >> x;
        cout << (findans(arr) ? "YES" : "NO") << endl;
    }
    return 0;
}
