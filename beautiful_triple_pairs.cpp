#include<iostream>
#include<map>
#include<vector>
#include<set>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--){
        long long int n;
        cin>>n;

        long long int arr[n];
        for(long long int i=0; i<n; i++){
            cin>>arr[i];
        }

        set<vector<long long int>>stp;

        map<vector<long long int>,long long int>mp1;
        map<vector<long long int>,long long int>mp2;
        map<vector<long long int>,long long int>mp3;
        map<pair<vector<long long int>,pair<long long int,long long int>>,long long int>mp;

        for(long long int i=0; i<=n-3; i++){
            vector<long long int>v1;
            
            v1.push_back(arr[i]);
            v1.push_back(arr[i+1]);
            v1.push_back(arr[i+2]);
            
            stp.insert(v1);

        }


        // for(auto k : stp){
        //     vector<long long int>v1;
        //     vector<long long int>v2;
        //     vector<long long int>v3;
        //     v1.push_back(k[0]);
        //     v1.push_back(k[0+1]);
        //     v2.push_back(k[0]);
        //     v2.push_back(k[0+2]);
        //     v3.push_back(k[0+1]);
        //     v3.push_back(k[0+2]);
        //     mp1[v1]++;
        //     mp2[v2]++;
        //     mp3[v3]++;

        // }

        for(long long int i=0; i<=n-3; i++){
            vector<long long int>v1;
            vector<long long int>v2;
            vector<long long int>v3;
            v1.push_back(arr[i]);
            v1.push_back(arr[i+1]);
            v2.push_back(arr[i]);
            v2.push_back(arr[i+2]);
            v3.push_back(arr[i+1]);
            v3.push_back(arr[i+2]);
            mp1[v1]++;
            mp2[v2]++;
            mp3[v3]++;

            mp[{v1,{arr[i+2],2}}]++;
            mp[{v2,{arr[i+1],1}}]++;
            mp[{v3,{arr[i],0}}]++;

        }

        long long int result = 0;
        // for(auto k : stp){
        //     vector<long long int>v1;
        //     vector<long long int>v2;
        //     vector<long long int>v3;
        //     v1.push_back(k[0]);
        //     v1.push_back(k[0+1]);
        //     v2.push_back(k[0]);
        //     v2.push_back(k[0+2]);
        //     v3.push_back(k[0+1]);
        //     v3.push_back(k[0+2]);

        //     if(mp1[v1] >1){
        //         result = result + mp1[v1]-1;
        //     }
        //     if(mp2[v2] >1){
        //         result = result + mp2[v2]-1;
        //     }
        //     if(mp3[v3] >1){
        //         result = result + mp3[v3]-1;
        //     }
        // }
        for(long long int i=0; i<=n-3; i++){
            vector<long long int>v1;
            vector<long long int>v2;
            vector<long long int>v3;
            v1.push_back(arr[i]);
            v1.push_back(arr[i+1]);
            v2.push_back(arr[i]);
            v2.push_back(arr[i+2]);
            v3.push_back(arr[i+1]);
            v3.push_back(arr[i+2]);

            if(mp1[v1] >1){
                result = result + mp1[v1]-mp[{v1,{arr[i+2],2}}];
            }
            if(mp2[v2] >1){
                result = result + mp2[v2]-mp[{v2,{arr[i+1],1}}];
            }
            if(mp3[v3] >1){
                result = result + mp3[v3]-mp[{v3,{arr[i],0}}];
            }
        }

        result = result/2;
        cout<<result<<endl;

    }


    return 0;
}