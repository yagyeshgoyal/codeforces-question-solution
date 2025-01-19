#include<iostream>
#include<map>
using namespace std;

bool find(){
    int n;
        cin>>n;
        int arr[n];
        

        int mini = INT8_MAX;
        map<int , bool> visited;
        bool found = true;

        for(int i=0; i<n;i++){
            cin>>arr[i];

            if(visited[arr[i]]==true){
                found = false;
            }
            else{
                visited[arr[i]]=true;
            }

            if(arr[i]>n){
                found = false;
            }

            mini = min(mini, arr[i]);

        }

        if(arr[0] != mini || found == false){
            return false;
        }
 
        for(int i=0;i<n-2;i++){
            for(int j=1; j<n-1;j++){
                if(arr[j] > arr[j-1] && arr[j] > arr[j+1]){
                    swap(arr[j], arr[j+1]);
                }
            }
        }

        for(int i=1;i<n;i++){
            if(arr[i]<arr[i-1]){
                return false;
            }
        }

        return true;
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        
        bool ans = find();

        if(ans){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }


    return 0;
}