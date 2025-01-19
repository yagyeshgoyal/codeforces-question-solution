#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void pallindrom(string s,int n){
    
    int arr[26]={0};
    int ans=-1;
    for(int i=0;i<n;i++)
    {
        int k=s[i]-'a';
        arr[k]=arr[k]+1;
    
        ans=max<int>(ans,k);
    }

    int count=0;
    int k=0;
    for(int i=0;i<=ans;i++){
       
        if(arr[i]%2==0 && arr[i]>0)
        count++;
        else if(arr[i]%2==1 && arr[i]>1)
        count++;
    }
   
    if(count>1){
        cout<<"YES"<<endl;
        return;
    }
    else
    {
        cout<<"NO"<<endl;
        return;
    }

}

int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        // cin.ignore();
        string s;
        // cin.ignore();
        getline(cin,s);
        // cin.ignore();
       
        pallindrom(s,s.length());
    
    }


    return 0;
}