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

        int count = 0;

        for(int i=0; i<n; i++){
            if(s[i] == '1'){
                count++;
            }
        }
        int t = 0;
        if(count == 2){
            for(int i=1; i<n; i++){
                if(s[i] == '1' && s[i-1] == '1'){
                    t = 1;
                    break;
                }
            }
        }

        if(count%2==1){
            cout<<"NO"<<endl;
        }
        else if(count%2==0 && t == 1){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }


    return 0;
}