#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<unordered_map>
#include<queue>
#include<cmath>
#include<bits/stdc++.h>
using namespace std;

int countDigits(int n) {
    if (n == 0) return 1; // Special case for 0
    return (int)(log10(abs(n)) + 1);
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;

        vector<int>arr(n);
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        priority_queue<pair<int, int>> pq;
        int countdigits = 0;

        for(int i=0; i<n; i++){
            if(arr[i]%10 == 0){
                int temp = countDigits(arr[i]);
                int num = arr[i];
                int count = 0;
                while(num%10 == 0){
                    count++;
                    num /= 10;
                }
                pq.push({count,arr[i]});
            }
            else{
                countdigits += countDigits(arr[i]);
            }
        }

        while(!pq.empty()){
            pair<int, int> top = pq.top();
            pq.pop();
            int count = top.first;
            int num = countDigits(top.second);

            int count2 = 0;
            if(!pq.empty()){
                pair<int, int> nextTop = pq.top();
                pq.pop();
                count2 = countDigits(nextTop.second);
            }

            countdigits += (num-count) + count2;

        }

        // cout<<countdigits<<endl;

        if(countdigits > m){
            cout<<"Sasha"<<endl;
        }
        else{
            cout<<"Anna"<<endl;
        }



    }

    return 0;
}