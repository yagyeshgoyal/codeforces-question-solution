// // // // // // // #include<iostream>
// // // // // // // #include<vector>
// // // // // // // using namespace std;



// // // // // // // int main()
// // // // // // // {
    

// // // // // // //     int n;
// // // // // // //     cin>>n;

// // // // // // //     int arr[n][n] = {0};

// // // // // // //     for(int p=0; p<n; p++){
// // // // // // //         for(int k = 0; k<n; k++){
// // // // // // //             arr[p][k]=0;
// // // // // // //         }
// // // // // // //     }

// // // // // // //     int num = 1;

// // // // // // //     int count = 0;
// // // // // // //     int i = 0;
// // // // // // //     int j = n/2;
// // // // // // //     int x = 0;
// // // // // // //     int y = 0;
// // // // // // //     while(count<n*n){

// // // // // // //         // cout<<i<<" "<<j<<endl;
        
// // // // // // //         if(arr[i][j] != 0){
// // // // // // //             x = x+1;
// // // // // // //             // if(i>=n){
// // // // // // //             //     i = 0;
// // // // // // //             // }
// // // // // // //             // if(j>=n){
// // // // // // //             //     j =0;
// // // // // // //             // }
            
// // // // // // //             arr[x][y] = num;
// // // // // // //             i = x;
// // // // // // //             j = y;
// // // // // // //         }
// // // // // // //         else{
// // // // // // //             arr[i][j] = num;
// // // // // // //             x = i;
// // // // // // //             y = j;
// // // // // // //         }

// // // // // // //         num++;
// // // // // // //         i = i-1;
// // // // // // //         j = j-1;

// // // // // // //         if(i<0){
// // // // // // //             i = n-1;
// // // // // // //         }
// // // // // // //         if(j<0){
// // // // // // //             j = n-1;
// // // // // // //         }

// // // // // // //         count++;
// // // // // // //     }

// // // // // // //     for(int p=0; p<n; p++){
// // // // // // //         for(int k = 0; k<n; k++){
// // // // // // //             cout<<arr[p][k] <<" ";
// // // // // // //         }
// // // // // // //         cout<<endl;
// // // // // // //     }

// // // // // // //     return 0;
// // // // // // // }




// // // // // // #include<iostream>
// // // // // // using namespace std;

// // // // // // int main()
// // // // // // {
// // // // // //     int n;
// // // // // //     cin>>n;

// // // // // //     int arr[n][n];

// // // // // //     for(int i=0; i<n; i++){
// // // // // //         for(int j=0; j<n; j++){
// // // // // //             arr[i][j] = (n*i)+j+1;
// // // // // //         }
// // // // // //     }

// // // // // //     for(int i=0; i<n/4; i++){
// // // // // //         for(int j=0; j<n/4; j++){
// // // // // //             arr[i][j] = (n*n+1)-arr[i][j];
// // // // // //         }
// // // // // //     }
// // // // // //     for(int i=0; i<n/4; i++){
// // // // // //         for(int j=3*(n/4); j<n; j++){
// // // // // //             arr[i][j] = (n*n+1)-arr[i][j];
// // // // // //         }
// // // // // //     }
// // // // // //     for(int i=3*(n/4); i<n; i++){
// // // // // //         for(int j=0; j<n/4; j++){
// // // // // //             arr[i][j] = (n*n+1)-arr[i][j];
// // // // // //         }
// // // // // //     }
// // // // // //     for(int i=3*(n/4); i<n; i++){
// // // // // //         for(int j=3*(n/4); j<n; j++){
// // // // // //             arr[i][j] = (n*n+1)-arr[i][j];
// // // // // //         }
// // // // // //     }

// // // // // //     for(int i =n/4; i<3*(n/4); i++){
// // // // // //         for(int j=n/4; j<3*(n/4); j++){
// // // // // //             arr[i][j] = (n*n +1 )- arr[i][j];
// // // // // //         }
// // // // // //     }

// // // // // //     for(int i=0; i<n; i++){
// // // // // //         for(int j=0; j<n; j++){
// // // // // //             cout<<arr[i][j]<<" ";
// // // // // //         }
// // // // // //         cout<<endl;
// // // // // //     }

// // // // // //     return 0;
// // // // // // }



// // // // // #include<iostream>
// // // // // using namespace std;

// // // // // int main()
// // // // // {
// // // // //     int n;
// // // // //     cin>>n;


// // // // //     int arr[n][n];
// // // // //     for(int i=0; i<n; i++){
// // // // //         for(int j=0; j<n; j++){
// // // // //             arr[i][j] = 0;
// // // // //         }
// // // // //     }

// // // // //     int temp[n/2][n/2];
// // // // //     for(int i=0; i<n/2; i++){
// // // // //         for(int j=0; j<n/2; j++){
// // // // //             temp[i][j] = 0;
// // // // //         }
// // // // //     }

// // // // //     n = n/2;

// // // // //     int num = 1;

// // // // //     int count = 0;
// // // // //     int i = 0;
// // // // //     int j = n/2;
// // // // //     int x = 0;
// // // // //     int y = 0;
// // // // //     while(count<n*n){
        
// // // // //         if(temp[i][j] != 0){
// // // // //             x = x+1;
           
            
// // // // //             temp[x][y] = num;
// // // // //             i = x;
// // // // //             j = y;
// // // // //         }
// // // // //         else{
// // // // //             temp[i][j] = num;
// // // // //             x = i;
// // // // //             y = j;
// // // // //         }

// // // // //         num++;
// // // // //         i = i-1;
// // // // //         j = j-1;

// // // // //         if(i<0){
// // // // //             i = n-1;
// // // // //         }
// // // // //         if(j<0){
// // // // //             j = n-1;
// // // // //         }

// // // // //         count++;
// // // // //     }

    

// // // // //     for(int k = 0; k<2*n; k++){
// // // // //         for(int p = 0; p<2*n; p++){
// // // // //             if(k<n && p<n){
// // // // //                 arr[k][p] = temp[k][p];
// // // // //             }
// // // // //             else if(k>=n && p>=n){
// // // // //                 arr[k][p] = n*n + temp[k-n][p-n];
// // // // //             }
// // // // //             else if(k>=n && p<n){
// // // // //                 arr[k][p] = 2*n*n +temp[k-n][p];
// // // // //             }
// // // // //             else if(k<n && p>=n){
// // // // //                 arr[k][p] = 3*n*n +temp[k][p-n];
// // // // //             }
// // // // //         }
// // // // //     }


// // // // //     for(int k=0; k<n; k++){
// // // // //         if(k%2 == 0){
// // // // //             swap(arr[0][k],arr[0][k+n]);
// // // // //         }
// // // // //         else{
// // // // //             swap(arr[1][k],arr[1][k+n]);
// // // // //         }
// // // // //     }
    

// // // // //     for(int i=0; i<2*n; i++){
// // // // //         for(int j=0; j<2*n; j++){
// // // // //             cout<<arr[i][j]<<" ";
// // // // //         }
// // // // //         cout<<endl;
// // // // //     }




// // // // //     return 0;
// // // // // }




// // // // #include<iostream>
// // // // #include<vector>
// // // // using namespace std;

// // // // void mergesort(int arr[], int s, int e){
// // // //     if(s==e){
// // // //         return ;
// // // //     }

// // // //     int mid = s + (e-s)/2;

// // // //     int arr1[mid-s+1];
// // // //     for(int i=s; i<=mid; i++){
// // // //         arr1[i-s] = arr[i];
// // // //     }

// // // //     int arr2[e-mid];
// // // //     for(int i=mid+1; i<=e; i++){
// // // //         arr2[i-mid-1] = arr[i];
// // // //     }

// // // //     mergesort(arr1,0,mid-s);
// // // //     mergesort(arr2,0,e-mid-1);

// // // //     int i=0,j=0,k=s;

// // // //     while(i<mid-s+1 && j<e-mid){
// // // //         if(arr1[i] <= arr2[j]){
// // // //             arr[k] = arr1[i];
// // // //             i++;
// // // //             k++;
// // // //         }
// // // //         else{
// // // //             arr[k] = arr2[j];
// // // //             j++;
// // // //             k++;
// // // //         }
// // // //     }

// // // //     while(i<mid-s+1){
// // // //         arr[k] = arr1[i];
// // // //         k++;
// // // //         i++;
// // // //     }

// // // //     while(j<e-mid){
// // // //         arr[k] = arr2[j];
// // // //         k++;
// // // //         j++;
// // // //     }

// // // //     return ;
// // // // }

// // // // int main()
// // // // {
// // // //     int n;
// // // //     cin>>n;

// // // //     int arr[n];
// // // //     for(int i=0; i<n; i++){
// // // //         cin>>arr[i];
// // // //     }
    
// // // //     mergesort(arr,0, n-1);

// // // //     for(int i=0; i<n; i++){
// // // //         cout<<arr[i]<<" ";
// // // //     }
// // // //     cout<<endl;


// // // //     return 0;
// // // // }


// // // #include<iostream>
// // // using namespace std;

// // // void insertion_sort(int arr[], int s, int e){

// // //     for(int i=s+1; i<=e; i++){
// // //         // int temp = arr[i];
// // //         for(int j=i; j>s; j--){
// // //             if(arr[j] < arr[j-1]){
// // //                 swap(arr[j],arr[j-1]);
// // //             }
// // //             else{
// // //                 break;
// // //             }
// // //         }
// // //     }
// // //     return ;
// // // }

// // // void quick_sort(int arr[], int s, int e){

// // //     if(s>=e){
// // //         return ;
// // //     }

// // //     if(e-s+1 <= 4){
// // //         insertion_sort(arr,s,e);
// // //         return ;
// // //     }

// // //     int pivot = s;
// // //     int mincount=0;
// // //     for(int i = s+1; i<=e; i++){
// // //         if(arr[pivot]>=arr[i]){
// // //             mincount++;
// // //         }
// // //     }

// // //     swap(arr[pivot],arr[s+mincount]);
// // //     pivot = s + mincount;

// // //     int i=s;
// // //     int j = e;

// // //     while(i<pivot &&  j>pivot){
// // //         if(arr[i] > arr[pivot] && arr[j]<= arr[pivot]){
// // //             swap(arr[i],arr[j]);
// // //             i++;
// // //             j--;
// // //         }

// // //         if(arr[i]<=arr[pivot]){
// // //             i++;
// // //         }
        
// // //         if(arr[j]>arr[pivot]){
// // //             j--;
// // //         }
// // //     }

// // //     quick_sort(arr, s, pivot-1);
// // //     quick_sort(arr,pivot+1,e);

// // //     return ;
// // // }

// // // int main()
// // // {
// // //     int n;
// // //     cin>>n;

// // //     int arr[n];
// // //     for(int i=0; i<n; i++){
// // //         cin>>arr[i];
// // //     }

// // //     quick_sort(arr,0,n-1);

// // //     for(int i=0; i<n; i++){
// // //         cout<<arr[i]<<" ";
// // //     }
// // //     cout<<endl;


// // //     return 0;
// // // }

// // #include<iostream>
// // #include<map>
// // #include<list>
// // #include<vector>
// // #include<limits.h>
// // using namespace std;

// // int main()
// // {

// //     int v;
// //     cin>>v;

// //     int e;
// //     cin>>e;

// //     map<int,list<pair<int,int>>>graph;

// //     for(int i=0; i<e; i++){
// //         int u,v,w;
// //         cin>>u>>v>>w;
// //         graph[u].push_back(make_pair(v,w));
// //         graph[v].push_back(make_pair(u,w));
// //     }

// //     vector<int>dis(v);
// //     vector<bool>visited(v);
// //     vector<int>parent(v);

// //     for(int i=0; i<v; i++){
// //         dis[i] = INT_MAX;
// //         visited[i] = false;
// //         parent[i] = -1;
// //     }

// //     dis[0] = 0;

// //     for(int i=0; i<v; i++){

// //         int mini = INT_MAX;
// //         int index = -1;

// //         for(int i=0; i<v; i++){
// //             if(visited[i] != true && dis[i]<mini){
// //                 mini = dis[i];
// //                 index = i;
// //             }
// //         }

// //         visited[index]= true;

// //         for(auto k : graph[index]){
// //             int v1 = k.first;
// //             int w1 = k.second;

// //             if(visited[v1] == false && dis[v1]>w1){
// //                 dis[v1] = w1;
// //                 parent[v1] = index;
// //             }
// //         }
// //     }

// //     for(int i=1; i<v; i++){
// //         cout<<parent[i]<<" "<<i<<" "<<dis[i]<<endl;
// //     }


// //     return 0;
// // }


// #include<iostream>
// #include<bits/stdc++.h>
// #include<vector>
// using namespace std;

// int findparent(vector<int>&parent, int u){
//     if(parent[u] == u){
//         return u;
//     }
//     else{
//         return parent[u] = findparent(parent,parent[u]);
//     }
// }

// void parentvalue(vector<int>&parent, int u, int a){
//     if(parent[u] == u){
//         parent[u]= a;
//     }
//     else{
//         parentvalue(parent, parent[u], a);
//         parent[u] = a;
//     }
//     return ;
// }

// int main()
// {
//     int v;
//     cin>>v;

//     int e;
//     cin>>e;

//     vector<pair<int,pair<int,int>>>graph;

//     for(int i=0; i<e; i++){
//         int u,v,w;
//         cin>>u>>v>>w;

//         graph.push_back({w,{u,v}});
//     }


//     sort(graph.begin(), graph.end());

//     vector<int>parent;
//     for(int i=0; i<v; i++){
//         parent.push_back(i);
//     }

//     int sum = 0;
//     // cout<<"k"<<endl;

//     for(int i=0; i<e; i++){
//         int w = graph[i].first;
//         int u = graph[i].second.first;
//         int v = graph[i].second.second;


//         int a = findparent(parent, u);
//         int b = findparent(parent,v);

//         // cout<<"k"<<endl;


//         if(a!=b){

//             parentvalue(parent,u,min(a,b));
//             parentvalue(parent,v,min(a,b));

//             sum  = sum + w;

//         }
//     }
//     cout<<sum<<endl;




//     return 0;
// }

#include<iostream>
#include<set>
#include<limits.h>
using namespace std;

int main()
{

    int v;
    cout<<"Enter the number of vertices : ";
    cin>>v;

    int e;
    cout<<"Enter the number of edges : ";
    cin>>e;

    int arr[v][v];
    for(int i=0; i<v; i++){
        for(int j=0; j<v; j++){
            arr[i][j] = 0;
        }
    }

    for(int i=0; i<e; i++){
        int u,v,w;
        cin>>u>>v>>w;
        arr[u][v] = w;
        arr[v][u] = w;
    }

    int dis[v] ;
    for(int i=0; i<v; i++){
        dis[i] = INT_MAX;
    }

    dis[0] = 0;

    set<pair<int,int>>s;

    s.insert({0,0});

    int sum  = 0;

    while(!s.empty()){
        pair<int,int>front = *s.begin();

        s.erase(front);


        int w = front.first;
        int k = front.second;

        for(int i=0; i<v; i++){
            if(arr[k][i] >0 && w + arr[k][i] < dis[i]){
                s.insert({w+arr[k][i],i});
                dis[i] = w + arr[k][i];
            }
        }
    }

    for(int i=0; i<v; i++){
        cout<<dis[i]<<" ";
    }
    cout<<endl;

    

    return 0;
}