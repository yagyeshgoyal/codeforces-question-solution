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
        string f;

        cin>>s;
        cin>>f;

        int a=0, b=0;
        for(int i=0; i<n; i++){
            if(s[i] == '0' && f[i]=='1'){
                b++;
            }
            else if(s[i] == '1' && f[i]=='0'){
                a++;
            }
        }

        cout<<max(a,b)<<endl;
    }


    return 0;
}