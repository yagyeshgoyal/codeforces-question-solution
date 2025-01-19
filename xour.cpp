#include<iostream>
#include<queue>
#include<map>
using namespace std;

int main()
{

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        
        // int arr[n];
        // priority_queue<pair<int,int>>maxHeap;
        // map<int,vector<int>>mp;
        // for(int i=0; i<n; i++){
        //     cin>>arr[i];
        //     maxHeap.push({arr[i],i});
        //     mp[arr[i]].push_back(i);
        // }

        // int i=n-1;

        // while(!maxHeap.empty()){
        //     pair<int,int>front = maxHeap.top();
        //     maxHeap.pop();

        //     if(front.first == arr[i]){
        //         i--;
        //     }
        //     else if(front.first != arr[i] && front.first > arr[i] && (front.first ^ arr[i]) < 4){
        //         swap(arr[i],arr[front.second]);
        //         i--;
        //     }

        // }

        // for(int i=0; i<n; i++){
        //     cout<<arr[i]<<" ";
        // }

        int arr[n];
        map<int, priority_queue<int>> mp;
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
            mp[arr[i]>>2].push(-arr[i]);
        }
        for(int i = 0; i < n; i++)
        {
            cout << -mp[arr[i]>>2].top() << " ";
            mp[arr[i]>>2].pop();
        }
        
        cout<<endl;


    }


    return 0;
}