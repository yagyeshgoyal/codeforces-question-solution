#include<iostream>
using namespace std;

long long int findCost(int a[], int b[], int n, int index){
    if(index == 0){
        return a[index];
    }

    if(a[index]<=b[index]){
        return a[index];
    }
    else{
        int ans1 = a[index];
        long long int ans2 = b[index] + findCost(a,b,n,index-1);
        return min<long long>(ans1,ans2);
    }
}

int main()
{
    int t;
    cin>>t;

    while(t--){
        int n,k;
        cin>>n>>k;

        int a[n],b[n];

        for(int i=0; i<n; i++){
            cin>>a[i];
        }

        for(int i=0; i<n; i++){
            cin>>b[i];
        }

        long long int cost = 0;

        for(int i=k; i<n; i++){
            cost = cost + min(a[i],b[i]);
        }

        // if(k==1){
        //     cost = cost + a[0];
        // }
        // else{
        //     if(a[k-1]<=b[k-1]){
        //         cost = cost + a[k-1];
        //     }
        //     else {

        //     }
        // }
        long long int sum = findCost(a,b,n,k-1);

        cout<<cost+sum<<endl;
    }


    return 0;
}