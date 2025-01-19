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

        int count =0;

        for(int i=0; i<n; i++){
            if(s[i]=='@'){
                count++;
            }
            else if(s[i] == '*'){
                if(i+1<n && s[i+1] == '*'){
                    break;
                }
            }
        }

        cout<<count<<endl;

    }

    return 0;
}