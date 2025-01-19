#include<iostream>
#include<vector>
using namespace std;

bool find_ans(int arr[], int &n, int &mid){

    vector<int>v;
    for(int i=0; i<n; i++){
        if(arr[i]<mid){
            v.push_back(i);
        }
    }

    if(v.size() == 0){
        return true;
    }

    int k = 0;

    for(int i=0; i<n; i++){
        if(arr[i]<mid){
            return false;
        }
        else if(arr[i] > mid ){
            // if(arr[v[k]] < mid){
            //     arr[i]--;
            //     arr[v[k]]++;
            //     i = i-1;
            // }
            // else{
            //     k++;
            //     i--;
            // }
            arr[v[k]] = arr[v[k]] + arr[i] - mid;
            arr[i] = mid;

            if(arr[v[k]]>=mid){
                k++;
            }
        }
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
        int sum = 0;
        for(int i=0;i<n; i++){
            cin>>arr[i];

            sum+=arr[i];
        }

        int mid = sum/n;

        bool ans = find_ans(arr,n,mid);

        if(ans){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}