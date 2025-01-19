#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<string.h>
using namespace std;

int main()
{

    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;

        int arr[n];
        long long int  multi = 1;
        string t = to_string(multi);
        for(int i=0; i<n; i++){
            cin>>arr[i];
            // multi = multi*arr[i];
            // double  temp = 0;
            // for(int j=0; j<arr[i]; j++){
            //     temp = multi +temp;
            // }
            // multi = temp;
            string a = to_string(arr[i]);
            int m = a.size() - 1, n = t.size() - 1, carry = 0;
            string product;
            for (int i=0; i<=m+n || carry; ++i) {
                for (int j=max(0, i-n); j<=min(i, m); ++j)
                    carry += (a[m-j] - '0') * (t[n-i+j] - '0');
                product += carry % 10 + '0';
                carry /= 10;
            }
            reverse(begin(product), end(product));
            t = product;
        }

        cin.ignore();
        string st;
        cin>>st;

        vector<int>result;

        int l=0;
        int r=n-1;

        for(int i=0; i<n; i++){
            // cout<<int(multi-(int(multi/m)*m))<<endl;
            // cout<<multi/m<<endl;
            // result.push_back(int(multi-(int(multi/m)*m)));
            // long long int temp = stoi()
            result.push_back(stoi(t)%m);

            if(st[i] == 'L'){
                // cout<<t<<endl;
                t =to_string(stoi(t)/arr[l]);
                l++;
            }
            else{
                // cout<<t<<endl;
                t =to_string(stoi(t)/arr[r]);
                r--;
            }
        }

        for(auto i : result){
            cout<<i<<" ";
        }
        cout<<endl;
    }

    return 0;
}