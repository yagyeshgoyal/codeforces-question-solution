#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--){
        string s;
        cin>>s;

        int i=0;
        // string curr = "";
        while(i<s.length()-1){
            // curr.push_back(s[i]);
            if(s[i] == s[i+1]){
                break;
            }i++;
        }

        // string last  = "";
        // for(int j=i+1; j<s.length(); j++){
        //     last.push_back(s[j]);
        // }
        
        // if(curr.length() == 0){
        //     curr.push_back(s[0]);
        // }
        // string ans = curr + (char)(s[i]+1) + last;

        // cout<<ans<<endl;

        string ans ="";
        int j=0;

        while(j<s.length()){
            if(j==i){
                ans.push_back(s[i]);
                if(s[i] != 'z')
                ans.push_back((char)(s[i]+1));
                else{
                    ans.push_back((char)(s[i]-1));
                }
                i=-1;
                j++;
            }
            else{
                ans.push_back(s[j]);
                j++;
            }

        }

        cout<<ans<<endl;
    }


    return 0;
}