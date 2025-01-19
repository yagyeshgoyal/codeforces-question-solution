#include<iostream>
using namespace std;

void count(string s){
    int n=s.length();
    int sum=0;
    int k=1;
    for(int i=0;i<n;i++){
        if(s[i]-'0'==k){
            sum++;
        }
        else if(k==0){
            int p=10-(s[i]-'0');
            sum=sum+p+1;
            k=s[i]-'0';
        }
        else if(s[i]-'0'==0){
            int p=10-k;
            sum=sum+p+1;
            k=0;
        }
        else if(s[i]-'0'!=0){
            int p=s[i]-'0'-k;
            if(p>0)
            sum=sum+p+1;
            else 
            sum=sum+(-p)+1;
            k=s[i]-'0';
        }
       
    }
    cout<<sum<<endl;
}

int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        string s;
        cin>>s;

        count(s);
    }


    return 0;
}