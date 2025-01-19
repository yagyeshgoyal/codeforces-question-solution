#include<iostream>
using namespace std;

void check(int s[],int e[],int n){
    int w=s[0];
    for(int i=1;i<n;i++){
        if((e[i]==e[0] && s[i]>=s[0] )|| (e[i]>e[0] && s[i]>=s[0])){
            cout<<-1<<endl;
            return;
        }
        
    }
    cout<<w<<endl;
    return;
}

int main()
{

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int s[n];
        int e[n];
        for(int i=0;i<n;i++)
        cin>>s[i]>>e[i];
        check(s,e,n);
    }

    return 0;
}