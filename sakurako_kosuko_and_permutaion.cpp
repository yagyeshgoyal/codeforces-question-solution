#include<iostream>
#include<vector>
using namespace std;

int checkdfs(int arr[], vector<int>&visited, int i){
    
    if(visited[arr[i]-1] == true){
        return 1;
    }

    visited[arr[i]-1] = true;
    int count = checkdfs(arr,visited,arr[i]-1);

    return count+ 1;
}

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

        vector<int>visited(n,false);

        // vector<vector<int>>v;
        int ans = 0;

        for(int i=0; i<n; i++){
            if(visited[i] == false){
                visited[i] = true;
                int count = checkdfs(arr,visited,i);

                ans = ans + (count-1)/2;
            }
        }

        cout<<ans<<endl;
    }


    return 0;
}