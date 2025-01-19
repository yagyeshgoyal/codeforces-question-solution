#include<iostream>
using namespace std;

bool check(int freq[],int n){

    // if(arr[0]!=0)
    // return false;
    // int i;
    // for(i=1;i<n;i++){
    //     if(arr[i]>arr[i-1]+1)
    //     return false;
    // }
    // if(i==n)
    // return true;
    if(freq[0]==0)
    return false ;
    for(int i=1;i<=n;i++){
        if(freq[i]==0)
        return false;
        else if(freq[i]>freq[i-1])
        return false;
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
        int freq[100]={0};
        int m=-1;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            freq[arr[i]]++;
            m=max<int>(m,arr[i]);
        }
        bool ans = check(freq,m);
        if(ans == true)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }


    return 0;
}