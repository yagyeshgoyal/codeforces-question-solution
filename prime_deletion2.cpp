#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin,s);

        int p;
        for(int i=0;i<s.length();i++){
            if(s[i]=='1')
            {
                p=1;
                break;
            }
            else if(s[i]=='3'){
                p=3;
                break;
            }
        }
        if(p==1)
        cout<<13<<endl;
        else
        cout<<31<<endl;

    }

    return 0;
}