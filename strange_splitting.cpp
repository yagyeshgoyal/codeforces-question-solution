#include<iostream>
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
        
        if(arr[0] == arr[n-1]){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
            if(arr[0] == arr[1]){
                cout<<"R";
                for(int i=1; i<n; i++){
                    cout<<"B";
                }
            }
            else if(arr[0] != arr[1]){
                cout<<"RB";
                for(int i=2; i<n; i++){
                    cout<<"R";
                }

            }
            cout<<endl;
        }
    }


    return 0;
}