#include<iostream>
using namespace std;

void solve(){
    long long int n,left_time,a,b;
    cin>>n>>left_time>>a>>b;
    long long int arr[n];
    
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    // if(left_time <= b || left_time == 0){
    //     cout<<"NO"<<endl;
    //     return ;
    // }
    long long int moment = 0;
    for(int i=0;i<n; i++){
        left_time = left_time - min<long long int>(((arr[i]-moment)*a), b);
        moment = arr[i];

        if(left_time <= 0){
            cout<<"NO"<<endl;
            return ;
        }
    }
    cout<<"YES"<<endl;
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