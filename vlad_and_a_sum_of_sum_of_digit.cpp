#include<iostream>
using namespace std;

long long int s(int n){
//    if(n==1){
//     return 1;
//    }
    long long int ans = 0;

    while(n>0){
        ans = ans + n%10;
        n = n/10;
    }
    return ans;
}

int main()
{  
    // cout<<"k"<<endl;    
    long   int arr[200001];
    arr[0] = 0;
    for(int i=1; i<=200001; i++){
        arr[i] = arr[i-1] + s(i);
    }

    int t;
    cin>>t;

    while(t--){
        long long int n;
        cin>>n;

        cout<<arr[n]<<endl;
    }


    return 0;
}