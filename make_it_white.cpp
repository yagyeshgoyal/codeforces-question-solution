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
        getline(cin,s);
        int start = 0;
        for(int i=0; i<n; i++){
            if(s[i] == 'B'){
                start = i;
                break;
            }
        }
        int end = n;
        for(int i=n-1; i>=0; i--){
            if(s[i] == 'B'){
                end = i;
                break;
            }
        }

        if((end-start)<0){
            cout<<0<<endl;
        }
        else{
            cout<<end-start+1<<endl;
        }
    }

    return 0;
}