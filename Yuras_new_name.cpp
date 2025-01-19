#include<iostream>
using namespace std;

void count(string s ){
    if(s.length()==1){
        if(s[0]=='^')
        cout<<1<<endl;
        else
        cout<<2<<endl;
        return;
    }

    int count=0;

    if(s[0]=='_')
    count++;

    for(int i=1;i<s.length();i++){

        if(s[i-1]=='_' && s[i]=='_'){
            count++;
        }
        if(i==s.length()-1 && s[i]=='_'){
            count++;
        }

    }

    cout<<count<<endl;
}

int main()
{
    int t;
    cin>>t;
    cin.ignore();
   while(t--){
    string s;
    getline(cin,s);

    count(s);

    


   }


    return 0;
}