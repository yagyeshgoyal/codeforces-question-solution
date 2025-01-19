#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--){


        string s1,s2;
        cin>>s1>>s2;

        int i=0;
        int j=0;
        while(i<s1.length() && j<s2.length()){
            if(s1[i] != s2[j]){
                break;
            }
            
            i++;
            j++;
        }
        int ans = 0;
        if(i==s1.length() || j==s2.length()){
            if(i==s1.length()){
                ans = s1.length() + (s2.length() - i) + 1;
            }
            else{
                ans  = s2.length() + (s1.length() - i) + + 1;
            }
        }
        else{
            ans = (i)+ (s1.length() -i) + (s2.length()-i);
            if(i>0){
                ans++;
            }
        }

        cout<<ans<<endl;
    }


    return 0;
}