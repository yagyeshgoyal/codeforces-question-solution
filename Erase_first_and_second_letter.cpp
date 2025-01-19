// #include<iostream>
// // #include<queue>
// #include<set>
// // #include<map>
// #include<unordered_map>
// using namespace std;

// void solve(int n, string s ,set<string> & st, int index, unordered_map<string,int>&m){

//     if(index>=n){
        
//         return ;
//     }
//     // if(index+1 == n){
//     //     string s = "";
//     //     s.push_back(s[0]);
//     //     st.insert(s);
//     //     return ;
//     // }
    
//     if(m.count(s)){
//         return ;
//     }

//     string p = "";
//     for(int i=0; i<n; i++){
//         if( i != index){
//             p.push_back(s[i]);
//         }
//     }
//     st.insert(p);


//     solve(p.length(), p, st, 0,m);
//     // cout<<"k"<<endl;
//     solve(p.length(), p, st, 1,m);
//     // cout<<"p"<<endl;

//     m[p] = 1;

    

//     return ;
// }

// int main()
// {
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         cin.ignore();
//         string s ;
//         cin>>s;

//         // deque<char>dq;
//         // for(int i =0; i<n; i++){
//         //     dq.push_back(s[i]);
//         // }

//         set<string>st; 
//         unordered_map<string,int>m;
        
//         solve(n, s,  st,-1,m);
//         // solve(n, s,  st,1);

//         // st.insert(s);
//         st.erase("");

//         // for(auto i = st.begin(); i != st.end(); i++){
//         //     cout<<*i<<endl;
//         // }
//         cout<<st.size()<<endl;


//     }


//     return 0;
// }


#include<iostream>
#include<vector>
#include<set>
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

        set<char>st;
        int ans = 0;
        for(int i=0; i<n; i++){
            st.insert(s[i]);
            ans = ans + st.size();
        }

        cout<<ans<<endl;
    }

    return 0;
}