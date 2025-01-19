#include<iostream>
#include<vector>
using namespace std;

void makeString(int n, int k, int index, string ans, vector<string>&st){
    if(index == k){
        st.push_back(ans);
        return ;
    }

    for(int i=0; i<n; i++){
        makeString(n,k,index+1,ans+char(i+'a'), st);
    }
    return ;
}
void checkString(vector<string>&st, string ys, int m){

    for(auto i : st){
        int k = 0;
        for(int j=0; j<m; j++){
            if(ys[j] == i[k] && k<i.size()){
                k++;
            }
            // cout<<i[k]<<k<<j<<endl;
        }
        // cout<<i<<endl;
        // cout<<k<<endl;
        if(k<i.size()){
            cout<<"NO"<<endl;
            cout<<i<<endl;
            return;
        }
    }

    cout<<"YES"<<endl;
}
int main()
{
    int tt;
    cin>>tt;
    while(tt--){
        int n,k,m;
        cin>>n>>k>>m;

        cin.ignore();
        string ys;
        getline(cin,ys);

        vector<string>st;
        string ans = "";

        makeString(n,k,0,ans,st);

        checkString(st,ys,m);
        
    }


    return 0;
}