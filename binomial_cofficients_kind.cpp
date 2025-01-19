#include<iostream>
#include<vector>
#define  modu 1000000007
using namespace std;

long long int  findans(int a, int b){
    // if(a == b){
    //     return 1;
    // }
    // cout<<b<<endl;
    if(b==0){
        return 1;
    }

    if(b==1){
        return 2;
    }

    // return findans(a,b-1) + findans(a-1,b-1);
    if(b%2 == 1){
        return (1ll*((1ll*findans(a,b/2)*findans(a,b/2))%modu)*2)%modu;
    }
    else{
        return (1ll*findans(a,b/2)*findans(a,b/2))%modu;
    }
}

int main()
{
    int t;
    cin>>t;


    int arr[t];
    for(int i=0; i<t;i++){
        cin>>arr[i];
    }

    int arr2[t];
    for(int i=0; i<t; i++){
        cin>>arr2[i];
    }
    // long long int modu = 1000000007;
    // vector<vector<long long int>>v(100001, vector<long long int>(100001,0));

    // for(int i=1; i<100001; i++){
    //     for(int j=1; j<i; j++){
    //         v[i][j] =( v[i][j-1] + v[i-1][j-1])%modu;
    //     }
    // }

    // for(int i=0; i<t; i++){
    //     cout<<arr[i]<<" "<<arr2[i]<<endl;
    // }

    for(int i=0; i<t; i++){
        // cout<<arr2[i]<<endl;
        // cout<<"k"<<endl;
        long long int  ans = findans(arr[i],arr2[i]);
        cout<<ans<<endl;
        // cout<<v[arr[i]][arr2[i]]<<endl;
    }
    


    return 0;
}