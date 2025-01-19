#include<iostream>
#include<string>
using namespace std;

int solve(string s, string s2,int count){

    if(s.find(s2) <= s.length()){
        return count;
    }

    if(s.length() > s2.length()*2 && count>=1){
        return -1;
    }

    count++;
    return solve(s+s,s2,count);
}

int main()
{

    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;

        cin.ignore();
        string s;
        cin>>s;
        string s2;
        cin>>s2;

        int ans = solve(s,s2,0);

        cout<<ans<<endl;
    }

    return 0;
}