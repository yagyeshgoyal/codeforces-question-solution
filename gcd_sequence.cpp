#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool findans(int arr[], int n, int pos, int p){
    if(pos<0 || pos>=n){
        return false;
    }
    vector<int>makegcd;
    int s = 0;
    if(pos == 0){
        s++;
    }
    for(int i=s+1; i<n; i++){
        if(i != pos){
            makegcd.push_back(__gcd(arr[s],arr[i]));
            s = i;
        }
    }

    
    for(int i=0; i<makegcd.size()-1; i++){
        if(makegcd[i]>makegcd[i+1]){
            return false;
        }
    }

    return true;
}

int main()
{
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }

        int makegcd[n-1];
        for(int i=0; i<n-1; i++){
            makegcd[i] = __gcd(arr[i],arr[i+1]);
        }
        int p = n-1;

        // for(int i=0; i<n-1; i++){
        //     cout<<makegcd[i]<<" ";
        // }
        // cout<<endl;
        bool flage = true;
        int pos = -1;
        for(int i=0; i<p-1; i++){
            if(makegcd[i]>makegcd[i+1]){
                flage = false;
                pos = i+1;
                break;
            }
        }


        if(flage){
            cout<<"YES"<<endl;
        }
        else{
            bool ans1 = findans(arr,n,pos,p);
            bool ans2 = findans(arr,n,pos-1,p);
            bool ans3 = findans(arr,n,pos+1,p);

            if(ans1 || ans2 || ans3){

                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }


    return 0;
}