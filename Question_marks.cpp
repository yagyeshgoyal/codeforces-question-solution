#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        string s;
        cin>>s;

        int counta =0;
        int countb =0;
        int countc =0;
        int countd =0;


        for(int i=0; i<4*n; i++){
            if(s[i] == 'A'){
                counta++;
            }
            else if(s[i]=='B'){
                countb++;
            }
            else if(s[i]=='C'){
                countc++;
            }
            else if(s[i]=='D'){
                countd++;
            }
        }

        int ans = 0;

        if(counta>n){
            ans = ans + n;
        }
        else{
            ans = ans + counta;
        }

        if(countb>n){
            ans = ans + n;
        }
        else{
            ans = ans + countb;
        }
        if(countc>n){
            ans = ans + n;
        }
        else{
            ans = ans + countc;
        }
        if(countd>n){
            ans = ans + n;
        }
        else{
            ans = ans + countd;
        }


        cout<<ans<<endl;
    }


    return 0;
}