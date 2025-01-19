#include<iostream>
#include<bits/stdc++.h>
#include<queue>
using namespace std;

int main()
{

    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    sort(arr,arr+n);

    queue<int>q;

    for(int i=0; i<n; i++){
        q.push(arr[i]);
    }
    int cost = 0;
    int time = n/2;
    if(n%2 != 0){
        time++;
    }
    while(q.size()>1){
        for(int i=0; i<time-1; i++){
            int a = q.front();
            q.pop();
            int b = q.front();
            q.pop();
            
        }
    }

    return 0;
}