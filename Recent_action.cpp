#include<iostream>
using namespace std;

int main()
{

    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int arr[n];
        int  k=n-1;
        int arr2[m];
        cin>>arr2[0];
        arr[k]=1;
        k--;
        for(int i=1;i<m;i++){
            cin>>arr2[i];
        }
        int i;
        for( i=1;i<m;i++){
            if(k==-1)
            break;
            int j;
            for( j=0 ; j<i;j++){
                if(arr2[j]==arr2[i]){
                    break;
                }
            }
            if(j==i){
                arr[k]=i+1;
                k--;
            }
        }
        while(k!=-1){
            arr[k]=-1;
            k--;
        }
        for(int p=0;p<n;p++){
            cout<<arr[p]<<" ";       
        }
        cout<<endl;
        
    }


    return 0;
}