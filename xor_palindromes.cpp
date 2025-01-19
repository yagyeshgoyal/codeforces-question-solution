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

        int notvalid = 0;
        int valid = 0;

        for(int i=0; i<n/2; i++){

            if(s[i] == s[n-i-1]){
                valid = valid + 2;
            }
            else{
                notvalid++;
            }
        }
        
        string ans = "";

        if(n%2 == 1){
            valid++;

            int i;
            for(i=0; i<notvalid; i++){
                ans.push_back('0');
            }

            while(i<=notvalid+valid){
                ans.push_back('1');
                i++;
            }

            while(i<=n){
                ans.push_back('0');
                i++;
            }

        }
        else{

            int i=0;

            while(i<notvalid){
                ans.push_back('0');
                i++;
            }
            ans.push_back('1');
            i++;

            while(i<notvalid+valid){
                ans.push_back('0');
                ans.push_back('1');
                i = i+2;
            }

            while(i<=n){
                ans.push_back('0');
                i++;
            }
        }
        cout<<ans<<endl;

        

    }


    return 0;
}