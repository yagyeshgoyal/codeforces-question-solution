#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin>>n;

    vector<int>arr;
    for(int i=0; i<n; i++){
        int a;
        cin>>a;
        arr.push_back(a);
    }

    sort(arr.begin(), arr.end());

    list<pair<int,int>>ans;

    int count = 1;
    for(int i=1; i<n; i++){
        if(arr[i] == arr[i-1]){
            count++;
        }
        else{
            ans.push_back({arr[i-1],count});
            count = 1;
        }
    }

    ans.push_back({arr[n-1],count});

    cout<<"[";
    int temp = ans.size();
    for(auto i : ans){
        temp--;
        cout<<"("<<i.first<<", "<<i.second<<")";

        if(temp == 0){
            cout<<" ";
            temp++;
        }
        else{
            cout<<", ";
        }
    }
    cout<<"]"<<endl;



    return 0;
}