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

        string ans = "";
        int sum = s[0] - '0';
        for(int i=1; i<n; i++){
            if(sum == 0){
                ans.push_back('+');
                sum = sum + (s[i]-'0');
            }
            else{
                ans.push_back('-');
                sum = sum - (s[i] - '0');
            }
        }

        cout<<ans<<endl;
    }


    return 0;
}