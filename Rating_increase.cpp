#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        string s;
        cin>>s;
        string a = "";
        string b = "";
        a.push_back(s[0]);
        int i = 1;
        while(i != s.length()){
            if(s[i] == '0'){
                a.push_back(s[i]);
            }
            else{
                break;
            }
            i++;
        }

        while(i != s.length()){
            b.push_back(s[i]);
            i++;
        }

        if(b.length() > a.length())
        {
            cout<<a<<" "<<b<<endl;
        }
        else if(b.length() < a.length()){
            cout<<-1<<endl;
        }
        else{
            if(a<b){
                cout<<a<<" "<<b<<endl;
            }
            else{
                cout<<-1<<endl;
            }
        }
    }


    return 0;
}