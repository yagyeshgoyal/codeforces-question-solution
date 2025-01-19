#include<iostream>
#include<bits/stdc++.h>
using namespace std;

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

        long long int count = 1;
        int happy = 1;

        for(int i=1; i<n; i++){
            count += arr[i];

            int p = sqrtl(count);
            if(p%2 == 1 && 1ll*p*p == count){
                happy++;
            }
        }

        cout<<happy<<endl;
    }


    return 0;
}