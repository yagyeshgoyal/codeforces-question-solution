#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct node{
    int a;
    int b;
    int c;
};

struct comparator{
    bool operator()(node* x, node* y)const{
        if(x->a != y->a){
            return x->a > y->a;
        }
        else if(x->b != y->b){
            return x->b > y->b;
        }

        return true;
    }
};

int main()
{
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int arr[n][2];
        priority_queue<node* , vector<node*>, comparator> pq;
        for(int i=0; i<n; i++){
            cin>>arr[i][0]>>arr[i][1];
            
            node *temp = new node;
            temp->a = max<int>(arr[i][0],arr[i][1]);
            temp->b = min<int>(arr[i][0],arr[i][1]);
            temp->c = i;
            pq.push(temp);
        }
        vector<int>ans;
        while(!pq.empty()){
            auto front = pq.top();
            pq.pop();
            // cout<<front->a<<" "<<front->b<<" "<<front->c<<endl;
            int i = front->c;
            ans.push_back(arr[i][0]);
            ans.push_back(arr[i][1]);
        }


        for(auto i : ans){
            cout<<i<<" ";
        }
        cout<<endl;




    }


    return 0;
}