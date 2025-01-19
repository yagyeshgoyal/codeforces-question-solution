#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool find_ans(int arr1[], int arr2[], int a, int b,int n, int target, int count1,int count2, int index1, int index2){
    if(target == n+1){
        return true;
    }

    if(index1>=a && index2>=b){
        return false;
    }

    bool ans = false;
    if(index1<a && count1<n/2){
        if(arr1[index1] == target){
            ans = find_ans(arr1,arr2,a,b,n, target+1, count1+1, count2,index1+1,index2);
        }
        else if(arr1[index1] < target){
            ans = find_ans(arr1,arr2,a,b,n, target, count1, count2,index1+1,index2);
        }
        
    }

    if(ans==true){
        return true;
    }
    if(index2<b && count2<n/2){
        if(arr2[index2] == target){
            ans = find_ans(arr1,arr2,a,b,n, target+1, count1, count2+1,index1,index2+1);
        }
        else if(arr2[index2] < target){
            ans = find_ans(arr1,arr2,a,b,n, target, count1, count2,index1,index2+1);
        }
        
    }

    if(ans){
        return true;
    }

    return false;
}

bool find_ans2(int arr1[], int arr2[], int a, int b,int n, int target, int count1,int count2, int index1, int index2,
vector<vector<vector<int>>> &v1,vector<vector<vector<int>>> &v2){
    if(target == n+1){
        return true;
    }

    if(index1>=a && index2>=b){
        return false;
    }
    if(v1[index][count1][count2] != -1){
        return v1[index1]
    }
    bool ans = false;
    if(index1<a && count1<n/2){
        if(arr1[index1] == target){
            ans = find_ans(arr1,arr2,a,b,n, target+1, count1+1, count2,index1+1,index2);
        }
        else if(arr1[index1] < target){
            ans = find_ans(arr1,arr2,a,b,n, target, count1, count2,index1+1,index2);
        }
        
    }

    if(ans==true){
        return true;
    }
    if(index2<b && count2<n/2){
        if(arr2[index2] == target){
            ans = find_ans(arr1,arr2,a,b,n, target+1, count1, count2+1,index1,index2+1);
        }
        else if(arr2[index2] < target){
            ans = find_ans(arr1,arr2,a,b,n, target, count1, count2,index1,index2+1);
        }
        
    }

    if(ans){
        return true;
    }

    return false;
}

int main()
{

    int t;
    cin>>t;
    while(t--){
        int a,b,n;
        cin>>a>>b>>n;

        int arr1[a];
        for(int i=0; i<a; i++){
            cin>>arr1[i];
        }
        int arr2[b];
        for(int i=0; i<b; i++){
            cin>>arr2[i];
        }

        sort(arr1,arr1+a);
        sort(arr2,arr2+b);
        int count1 = 0;
        int count2 = 0;
        vector<vector<vector<int>>> v1(n+1, vector<vector<int>>(n, vector<int>(n,-1)));
        vector<vector<vector<int>>> v2(n+1, vector<vector<int>>(n, vector<int>(n,-1)));
        // bool ans = find_ans(arr1,arr2,a,b,n, 1, count1, count2,0,0);
        bool ans = find_ans2(arr1,arr2,a,b,n, 1, count1, count2,0,0,v1,v2);

        if(ans == true){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        
    }

    return 0;
}