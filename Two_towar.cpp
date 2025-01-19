#include<iostream>
using namespace std;

int check(string s,int n){
    int k=1;
    for(int i=2;i<n;i++){
        if(s[i]==s[i-1] && s[i]==s[i-2]){
            return k;
        }
    }
    return 0;
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        cin.ignore();
        string s1,s2;
        cin>>s1>>s2;
    //     int i,j;
    //     for(i=1;i<n;i++){
    //         if(s1[i]==s1[i-1])
    //         break;
    //     }
    //     for(j=1;j<m;j++){
    //         if(s2[j]==s2[j-1])
    //         break;
    //     }

    //     if((i!=n && j!=m)){
    //         cout<<"NO"<<endl;
    //     }
    //     else if(i==n && j==m){
    //         cout<<"YES"<<endl;
    //     }
    //     else if(i!=n && j==m){
    //         int k=check(s1,n);
    //         if((k==1) ||  (s1[n-1]==s2[m-1]))
    //         cout<<"NO"<<endl;
    //         else
    //         cout<<"YES"<<endl;
    //     }
    //     else {
    //         int k=check(s2,m);
    //         if((k==1) ||  (s1[n-1]==s2[m-1]))
    //         cout<<"NO"<<endl;
    //         else
    //         cout<<"YES"<<endl;
    //     }

        int count1 = 0,count2 = 0;

        for(int i=1; i<s1.length(); i++){
            if(s1[i] == s1[i-1])
            count1++;
        }

        for(int i=1; i<s2.length(); i++){
            if(s2[i] == s2[i-1]){
                count2++;
            }
        }

        if(s1[s1.length()-1] == s2[s2.length()-1]){
            if(count1 == 0 && count2 == 0){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        else{
            if(count1 >=2 || count2>= 2){
                cout<<"NO"<<endl;
            }
            else if(count1 == 1 && count2 ==1){
                cout<<"NO"<<endl;
            }
            else{
                cout<<"YES"<<endl;
            }
        }
    }


    return 0;
}