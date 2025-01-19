#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void findans(int i, vector<int>&arr,string &st, vector<int>&vp, int &count){

    if(vp[i] != -1){
        count = count + vp[i];
        return ;
    }

    if(st[i] == '0'){
        count++;
    }

    findans(arr[i], arr, st, vp, count);

    vp[i] = count;
}
int main()
{
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<int>arr;
        for(int i=0; i<n; i++){
            int a;
            cin>>a;

            // arr[i] = a-1;
            arr.push_back(a-1);
        }

        string st;
        cin>>st;

        vector<int>vp(n,-1);
        int count = 0;
        for(int i=0; i<n; i++){
            if(vp[i] == -1){
                
                if(st[i] == '0'){
                    count++;
                }
                vp[i] = 0;

                findans(arr[i],arr,st,vp,count);

                vp[i] = count;

                count = 0;

            }
        }

        for(int i=0; i<n; i++){
            cout<<vp[i]<<" ";
        }
        cout<<endl;
    }


    return 0;
}