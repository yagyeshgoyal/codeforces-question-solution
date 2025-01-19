#include<iostream>
using namespace std;

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

        int p=0;
        for(int i=1;i<n;i++){
            if(s[i]<=s[0] && s[i]!=s[i-1]){
                if(s[i]<=s[p])
                p=i;
            }
            
        }
        char k=s[p];
        for(int j=p; j>0;j--){
            s[j]=s[j-1];
        }
        s[0]=k;

        cout<<s<<endl;
    }
    

    return 0;
}