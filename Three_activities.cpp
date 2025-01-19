#include<iostream>
#include<queue>
#include<vector>
// #include<pair>
#include<limits.h>
#include<bits/stdc++.h>
using namespace std;

long long int findans2(int i, int j, vector<pair<int,int>>&heap1,vector<pair<int,int>>&heap2, vector<pair<int,int>>&heap3){

    int result = 0;

    for(int k=0; k<3; k++){
        if(heap3[k].second != heap1[i].second && heap3[k].second != heap2[j].second){
            int ans = heap3[k].first ;
            result = max(result , ans);
        }
    }
    return result;
}

long long int findans(int i, vector<pair<int,int>>&heap1,vector<pair<int,int>>&heap2, vector<pair<int,int>>&heap3){

    int result = 0;

    for(int j=0; j<3; j++){
        if(heap2[j].second != heap1[i].second){
            int ans = heap2[j].first + findans2(i,j,heap1,heap2,heap3);
            result = max(result , ans);
        }
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

        int skiing[n],cinema[n],games[n];

        vector<pair<int,int>>heap1;
        vector<pair<int,int>>heap2;
        vector<pair<int,int>>heap3;

        for(int i=0; i<n; i++){
            cin>>skiing[i];
            pair<int,int> p  = make_pair(skiing[i],i);
            heap1.push_back(p);
        }

        for(int i=0; i<n; i++){
            cin>>cinema[i];
            pair<int,int> p  = make_pair(cinema[i],i);
            heap2.push_back(p);
        }

        for(int i=0; i<n; i++){
            cin>>games[i];
            pair<int,int> p  = make_pair(games[i],i);
            heap3.push_back(p);
        }

        sort(heap1.begin(), heap1.end());
        sort(heap2.begin(), heap2.end());
        sort(heap3.begin(), heap3.end());

        reverse(heap1.begin(), heap1.end());
        reverse(heap2.begin(), heap2.end());
        reverse(heap3.begin(), heap3.end());

        

        long long int result = 0;
        for(int i=0; i<3; i++){
            long long int ans = heap1[i].first + findans(i,heap1,heap2,heap3);

            result = max(result ,ans);
        }

        cout<<result<<endl;

    }


    return 0;
}