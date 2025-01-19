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
        int odd[n];
        int even[n];
        int o=0;
        int e=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]%2==1){
                odd[o]=i+1;
                o++;
            }
            else{
                even[e]=i+1;
                e++;
            }
        }
        
        if(o>=3){
            cout<<"YES"<<endl<<odd[0]<<" "<<odd[1]<<" "<<odd[2]<<endl;
        }
        else if(e>=2 && o>=1){
            cout<<"YES"<<endl<<even[0]<<" "<<even[1]<<" "<<odd[0]<<endl;
        }
        else
        cout<<"NO"<<endl;
    }

    return 0;
}