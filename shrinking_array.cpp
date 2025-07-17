#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<unordered_map>
#include<queue>
#include<cmath>
#include<bits/stdc++.h>
using namespace std;

vector<int> firstGreaterLeft(const vector<int>& arr) {
    int n = arr.size();
    vector<int> result(n, -1);
    stack<int> st;

    for (int i = 0; i < n; i++) {
        while (!st.empty() && arr[st.top()] <= arr[i]) {
            st.pop();
        }

        if (!st.empty()) {
            result[i] = st.top();
        }

        st.push(i);
    }

    return result;
}

// Function to find first smaller element on the right for each element
vector<int> firstSmallerRight(const vector<int>& arr) {
    int n = arr.size();
    vector<int> result(n, -1);
    stack<int> st;

    for (int i = n - 1; i >= 0; i--) {
        while (!st.empty() && arr[st.top()] >= arr[i]) {
            st.pop();
        }

        if (!st.empty()) {
            result[i] = st.top();
        }

        st.push(i);
    }

    return result;
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        vector<int> arr(n);
        for(int i=0;i<n; i++){
            int a;
            cin>>a;
            arr[i] = a;
        }

        bool flage = false;
        for(int i=0; i+1<n; i++){
            if(abs(arr[i]-arr[i+1])<=1){
                flage = true;
                break;
            }
        }

        if(flage){
            cout<<0<<endl;
            continue;
        }

        for(int i=0; i+1<n; i++){
            if(i+2<n && min(arr[i],arr[i+1])<=arr[i+2] && max(arr[i],arr[i+1])>=arr[i+2]){
                flage = true;
                break;
            }

            if(i-1>=0 && min(arr[i],arr[i+1])<=arr[i-1] && max(arr[i],arr[i+1])>=arr[i-1]){
                flage = true;
                break;
            }
        }

        if(flage){
            cout<<1<<endl;
            continue;
        }

        vector<int> greaterLeft = firstGreaterLeft(arr);
        vector<int> smallerRight = firstSmallerRight(arr);
        // cout<<greaterLeft[n-1]<<" "<<smallerRight[n-1]<<endl;
        int ans = -1;

        for(int i=0; i<n; i++){
            int temp = -1;
            if(greaterLeft[i] != -1){
                int d = abs(i-greaterLeft[i]) - 1;
            }

            if(smallerRight[i] != -1){
                if(temp == -1){
                    temp = abs(i-smallerRight[i])-1;
                }
                else{
                    temp = min(temp,abs(i-smallerRight[i])-1);
                }
            }

            if(ans == -1){
                ans = temp;
            }
            else{
                ans = min(ans,temp);
            }
        }

        cout<<ans<<endl;



    }

    return 0;
}