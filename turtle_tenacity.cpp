#include<iostream>
#include<bits/stdc++.h>
#include<set>
using namespace std;

void find_ans(int arr[], int &n){
    if(n==1){
        cout<<"YES"<<endl;
        return;
    }

    // sort(arr,arr+n);

    if(arr[n-1] == arr[0]){
        cout<<"NO"<<endl;
        return ;
    }

    if(arr[1] != arr[0]){
        cout<<"YES"<<endl;
        return ;
    }

    for(int i=1; i<n; i++){
        if(arr[i]%arr[0] <arr[0] && arr[i]%arr[0] != 0 && arr[i] != arr[0]){
            cout<<"YES"<<endl;
            return;
        }
    }

    cout<<"NO"<<endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        int arr[n];
        int count_one = 0;
        for(int i=0; i<n; i++){
            cin>>arr[i];

            if(arr[i] == 1){
                count_one++;
            }
        }

        sort(arr,arr+n);
        if(count_one>1){
            cout<<"NO"<<endl;
        }
        else if(count_one == 1){
            cout<<"YES"<<endl;
        }
        else{
            find_ans(arr,n);
        }
    }


    return 0;
}