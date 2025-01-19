#include<iostream>
using namespace std;

void convert(string &s,char ch,int n,char c){
    for(int i=0;i<n;i++){
        if(s[i]==ch)
        s[i]=c;
    }
}

int check(string &s,int n){

    convert(s,s[0],n,1);
    int k=0;
    int j=1;
    for(int i=1;i<n;i++){
        if(s[i]!='1'&&s[i]!='0'){
            convert(s,s[i],n,k);
            k=k+j;
            j=k-j;
            k=k-j;
        }

    }
    for(int i=1;i<n;i++){
        if(s[i]==s[i-1])
        return 0;
    }
    return 1;
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cin.ignore();
        string s;
        cin>>s;
        if(check(s,n))
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }


    return 0;
}