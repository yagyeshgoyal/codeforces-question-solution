#include<iostream>
#include<limits.h>
using namespace std;

void findleaf(int &n , int leftNode[], int rightNode[], int nodePosition , string &s,
    int &ans, int op){
    if(nodePosition == 0){
        return ;
    }

    if(leftNode[nodePosition] == 0 && rightNode[nodePosition] == 0){
        ans = min(ans,op);
        return ;
    }
    if(op>ans){
        return ;
    }
    if(s[nodePosition-1] == 'L'){
        findleaf(n,leftNode,rightNode,leftNode[nodePosition],s,ans,op);
        findleaf(n,leftNode,rightNode,rightNode[nodePosition],s,ans,op+1);

        
    }
    else if(s[nodePosition-1] == 'R'){
        findleaf(n,leftNode,rightNode,leftNode[nodePosition],s,ans,op+1);
        findleaf(n,leftNode,rightNode,rightNode[nodePosition],s,ans,op);

        
    }
    else{
        findleaf(n,leftNode,rightNode,leftNode[nodePosition],s,ans,op+1);
        findleaf(n,leftNode,rightNode,rightNode[nodePosition],s,ans,op+1);

    }

    return ;
}
// int findleaf(int &n , int leftNode[], int rightNode[],int nodePosition , string s){
//     if(nodePosition == 0){
//         return (INT_MAX - 1);
//     }

//     if(leftNode[nodePosition] == 0 && rightNode[nodePosition] == 0){
//         return 0;
//     }

//     if(s[nodePosition-1] == 'L'){
//         int ans1 = findleaf(n,leftNode,rightNode,leftNode[nodePosition],s);
//         int ans2 = 1 + findleaf(n,leftNode,rightNode,rightNode[nodePosition],s);

//         return min(ans1,ans2);
//     }
//     else if(s[nodePosition-1] == 'R'){
//         int ans1 = 1 + findleaf(n,leftNode,rightNode,leftNode[nodePosition],s);
//         int ans2 = findleaf(n,leftNode,rightNode,rightNode[nodePosition],s);

//         return min(ans1,ans2);
//     }
//     else{
//         int ans1 = 1 + findleaf(n,leftNode,rightNode,leftNode[nodePosition],s);
//         int ans2 = 1 + findleaf(n,leftNode,rightNode,rightNode[nodePosition],s);

//         return min(ans1,ans2);
//     }
// }

int main()
{

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        string s;
        cin>>s;
        n++;
        int leftnode[n] = {0};
        int rightnode[n] = {0};
        for(int i=1; i<n; i++){
            cin>>leftnode[i];
            cin>>rightnode[i];
        }

        // int op = findleaf(n,leftnode,rightnode,1,s);

        // cout<<op<<endl;

        int op = 0 ;
        int ans = INT_MAX;
        findleaf(n,leftnode,rightnode,1,s,ans,op);

        cout<<ans<<endl;
    }

    return 0;
}