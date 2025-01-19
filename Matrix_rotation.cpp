#include<iostream>
using namespace std;

void solve(){
    int arr[2][2];

    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            cin>>arr[i][j];
        }
    }

    for(int i=0; i<4; i++){
        if(arr[0][0] < arr[0][1] && arr[1][0] < arr[1][1] 
         && arr[0][0] < arr[1][0] && arr[0][1] < arr[1][1])
         {
            cout<<"YES"<<endl;
            return;
         }

        int temp = arr[0][0];
        arr[0][0] = arr[1][0];
        arr[1][0] = arr[1][1];
        arr[1][1] = arr[0][1];
        arr[0][1] = temp;
    }

    cout<<"NO"<<endl;
    return;
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