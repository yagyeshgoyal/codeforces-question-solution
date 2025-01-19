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

        // string ans = "";
        int ans = 0;
        for(int i=0; i<n-2; i++){
            if((s[i] == 'm' && s[i+1]== 'a' && s[i+2] == 'p') || s[i] == 'p' && s[i+1]== 'i' && s[i+2] == 'e'){
                ans++;
                i = i+2;

            }
        }
        cout<<ans<<endl;

    }


    return 0;
}