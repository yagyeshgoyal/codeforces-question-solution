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

        char arr[8];
        for(int i=0; i<8;i++){
            arr[i] = 'a'+ i;
        }

        char integer[8];
        for(int i=0; i<8;i++){
            integer[i] = '1'+ i;
        }

        for(int i=0; i<8; i++){
            if(integer[i] != s[1]){
                cout<<s[0]<<integer[i]<<" ";
            }
        }

        for(int i=0; i<8; i++){
            if(arr[i] != s[0]){
                cout<<arr[i]<<s[1]<<" ";
            }
        }
        cout<<endl;;
    }

    return 0;
}