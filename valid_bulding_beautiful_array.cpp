#include<iostream>
#include<limits.h>
using namespace std;

bool solve(){
    int n;
    cin>>n;

    int arr[n];
    int even=0, odd=0;
    int mini = INT_MAX;
    for(int i=0; i<n; i++){

        cin>>arr[i];
        if(arr[i]%2 == 0){
            even ++;
        }
        else{
            odd ++;
        }

        mini = min(mini, arr[i]);
    }


    if(even == 0 || odd == 0){
        return true ;
    }
    else if(mini % 2 == 0 && odd>0){
        return false;
    }
    else if(mini % 2 ==1)
    return true;
}

int main()
{

    int t;
    cin>>t;
    while(t--){

       bool ans = solve();


       if(ans){
        cout<<"YES"<<endl;
       }
       else{
        cout<<"NO"<<endl;       }
    }

    return 0;
}