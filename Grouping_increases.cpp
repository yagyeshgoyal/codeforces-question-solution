#include<iostream>
#include<vector>
using namespace std;

void solve(){
    int n;
    cin>>n;

    int arr[n];
    int k = 0;
    int maxi = -1;
    for(int i=0; i<n; i++){
        cin>>arr[i];

        if(arr[i]>maxi){
            maxi = arr[i];
            k = i;
        }
    }

    if(n == 1){
        cout<<0<<endl;
        return ;
    }
    if(n == 2){
        cout<<0<<endl;
        return ;
    }
    
    vector<int>s;
    vector<int>t;
    s.push_back(k);
    for(int i=k+1; i<n; i++){
        if(arr[i]<=arr[k]){
            s.push_back(i);
            k=i;
        }
    }
    k = 0;
    for(int i=0; i<n; i++){
        if(i == s[k]){
            k++;
        }
        else{
            t.push_back(arr[i]);
        }
    }
    // for(int i=0; i<s.size(); i++){
    //     cout<<s[i]<<endl;
    // }
    // for(int i=0; i<t.size(); i++){
    //     cout<<t[i]<<endl;
    // }
    int count = 0;
    for(int i=1; i<t.size(); i++){
        if(t[i]>t[i-1]){
            count++;
        }
    }

    cout<<count<<endl;
    return ;
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        solve();
    }


    return 0;
}