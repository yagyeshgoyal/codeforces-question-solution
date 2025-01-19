#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n],b[n];
        int count=0;
        for(int i=0;i<n;i++){
            cin>>a[i]>>b[i];
            if(a[i]>b[i])
            count++;
        }
        cout<<count<<endl;
    }


    return 0;
}