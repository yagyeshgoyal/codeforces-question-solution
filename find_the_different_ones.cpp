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

        int index[n];

        // for(int i=0; i<n-1; i++){
        //     for(int j=i+1; j<n; j++){
        //         if(arr[i] != arr[j]){
        //             index[i] = j;
        //             break;
        //         }
        //         else{
        //             index[i] = n+1;
        //         }
        //     }
        // }

        // index[n-1] = n+1;

        index[n-1] = n;
        for(int i=n-2; i>=0; i--){
            if(arr[i] != arr[i+1]){
                index[i] = i+1;
            }
            else{
                index[i] = index[i+1];
            }
        }

        int m;
        cin>>m;

        while(m--){
            int l,r;
            cin>>l>>r;

            if(r>=index[l-1]+1){
                cout<<l<<" "<<index[l-1]+1<<endl;
            }
            else{
                cout<<-1<<" "<<-1<<endl;
            }
        }
    }

    return 0;
}