#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int findans(int i, int n,int arr1[], int arr2[], int a, int b ,map<int,map<int,map<int,int>>>&mp){
    if(i==n){
        return min(a,b);
    }

    if(mp.count(i) && mp[i].count(a) && mp[i][a].count(b)){
        return mp[i][a][b];
    }


    int left = findans(i+1,n,arr1,arr2,a+arr1[i],b,mp);
    int right = findans(i+1,n,arr1,arr2,a,b+arr2[i],mp);

    mp[i][a][b] = max(left,right);

    return max(left,right);
}
// void findans(int i, int n,int arr1[], int arr2[], int a, int b , long long int &ans,bool &flage,
// ){
//     if(i==n){
//         if(flage)
//         ans = max<long long int>(ans,min(a,b));
//         else{
//             ans = min(a,b);
//             flage = true;
//         }
//         return ;
//     }

//     findans(i+1,n,arr1,arr2,a+arr1[i],b,ans,flage);
//     findans(i+1,n,arr1,arr2,a,b+arr2[i],ans,flage);

//     return ;
// }

int main()
{
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int arr1[n];
        for(int i=0; i<n; i++){
            cin>>arr1[i];
        }

        int arr2[n];
        for(int i=0; i<n; i++){

            cin>>arr2[i];
        }

        long long int a = 0;
        long long int b = 0;

        // for(int i=0; i<n; i++){
        //     if(arr1[i] == 1 && arr2[i] == 1){
        //         if(a<=b){
        //             a = a + arr1[i];
        //         }
        //         else{
        //             b++;
        //         }
        //     }
        //     else if(arr1[i] == 1 && arr2[i] == 0){
        //         if(a<=b){
        //             a = a + 1;
        //         }
        //     }
        //     else if(arr1[i]== 0 && arr2[1]){
        //         if(b<=a){
        //             b++;
        //         }
        //     }
        //     else if(arr1[i] == 1 && arr2[i]==-1){
        //         if(a<=b){
        //             a++;
        //         }
        //         else{
        //             b--;
        //         }
        //     }
        //     else if(arr1[i] == -1 && arr2[i]==1){
        //         if(b<=a){
        //             b++;
        //         }
        //         else{
        //             a--;
        //         }
        //     }
        //     else if(arr1[i] == 0 && arr2[i]==0){

        //     }
        //     else if(arr1[i] == 0 && arr2[i] == -1){
        //         if(b>a){
        //             b--;
        //         }
                
        //     }
        //     else if(arr1[i] == -1 && arr2[i] == 0){
        //         if(b>)
        //     }
        // }
        // long long int ans = 0;
        map<int,map<int,map<int,int>>>mp;
        bool flage = false;
        int ans = findans(0,n,arr1,arr2,0,0,mp);

        cout<<ans<<endl;
    }


    return 0;
}