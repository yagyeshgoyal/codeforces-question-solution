#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int arr[n];
    int sum = 0;
    for(int i=0; i<n; i++){
        cin>>arr[i];
        sum = sum + arr[i];
    }

    if(arr[0] >= (sum/2 + 1)){
        cout<<1<<endl<<1<<endl;
    }
    else{
        vector<int>v;
        v.push_back(1);
        int target = arr[0];
        for(int i=1; i<n; i++){
            if(arr[0] >= arr[i]*2){
                v.push_back(i+1);
                target = target + arr[i];
            }
            // cout<<target<<endl;
            if(target >= (sum/2 + 1)){
                break;
            }
        }

        if(target >= (sum/2 + 1)){
            cout<<v.size()<<endl;
            for(auto i:v){
                cout<<i<<" ";
            }
            cout<<endl;
        }
        else{
            cout<<0<<endl;
        }
    }


    return 0;
}