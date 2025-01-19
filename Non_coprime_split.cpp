#include<iostream>
#include<map>
#include<vector>
#include<bits/stdc++.h>
// #include<cmath>
using namespace std;


// bool findPrime(vector<bool>&arr, int n,map<int,int>&nonPrime){
    
//     if(n<=1){
//         return true;
//     }


//     for(int i=2*n; i<10000007; i= i+n){
//         if(arr[i] == true){
//             arr[i] = false;
//             nonPrime[i] = n;
//         }
//     }
//     return true;
// }

// void find_ans(int l ,int r, vector<bool>&arr, map<int,int>&nonprime){

//     for(int j=l; j<=r; j++){
//         if(arr[j] == false){
//             cout<<nonprime[j]<<" "<<j - nonprime[j]<<endl;
//             return ;
//         }
//     }

//     cout<<-1<<endl;
//     return ;
// }

bool isprime(int l){

    if(l<=1){
        return true;
    }

    for(int i=2; i<=sqrtl(l); i++){
        if(l%i == 0){
            cout<<i<<" "<<l-i<<endl;
            return true ;
        }
    }

    return false;
}

void solve(int l, int r){

    if(r<=3){
        cout<<-1<<endl;
        return ;
    }

    for(int i = l ; i<=r; i++){
        if(i != 2 && i%2 == 0){
            cout<<2<<" "<<i-2<<endl;
            return ;
        }
    }

    if(isprime(l)){
        return ;
    }
    cout<<-1<<endl;
}

int main()
{
    int t;
    cin>>t;

    // bool arr[10000007] = {true};
    // vector<bool>arr;


    // for(int i=0; i<10000007; i++){
    //     arr.push_back(true);
    // }


    // map<int, int>nonPrime;

    // for(int i=0; i<10000007; i++){
    //     if(arr[i] == true){
    //         arr[i] = findPrime(arr,i,nonPrime);
    //     }
    // }


    while(t--){
        int l,r;
        cin>>l>>r;

        // find_ans(l,r,arr,nonPrime);

        solve(l,r);

    }


    return 0;
}