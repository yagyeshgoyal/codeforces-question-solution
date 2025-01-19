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

        int index1,index2,indexn;
        for(int i=0; i<n; i++){
            if(arr[i] == 1){
                index1 = i+1;
            }

            if(arr[i] == 2){
                index2 = i+1;
            }

            if(arr[i] == n){
                indexn = i+1;
            }
        }

        if((indexn>index1 && indexn < index2 ) || (indexn > index2 && indexn <index1)){
            cout<<index1<<" "<<index2<<endl;
        }
        else if(indexn<index1 && indexn <index2 ){
            cout<<indexn<<" "<<min(index1, index2)<<endl;
        }
        else if(indexn>index1 && indexn >index2 ){
            cout<<indexn<<" "<<max(index1, index2)<<endl;
        }

    }


    return 0;
}