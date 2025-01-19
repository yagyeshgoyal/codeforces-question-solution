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

        string ans;
        for(int i=0; i<n; ){
            ans.push_back(s[i]);
            int count = 1;
            for(int j=i+1; j<n; j++){
                count++;
                if(s[i]==s[j]){
                    break;
                }
            }
            i = i+count;
        }

        cout<<ans<<endl;
    }


    return 0;
}