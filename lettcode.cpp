#include<iostream>
#include<stack>
#include<set>
#include<vector>

using namespace std;

class Solution {
public:

    int count(string s){

        stack<char>st;
        for(int i=0; i<s.length(); i++){
            if(st.empty() && (s[i] == ')' || s[i] == '(')){
                st.push(s[i]);
            }
            else if(st.top()=='('&& s[i] == ')'){
                st.pop();
            }
            else if(s[i] == ')' || s[i] == '('){
                st.push(s[i]);
            }
        }

        return st.size();
    }
    void solve(string s, int index, set<string>&y_result, string ans,int l){

        if(index == s.length()){
            if(count(ans) == 0 && ans.length() == l){
                y_result.insert(ans);
            }
            return;
        }

        if(s[index] != '(' && s[index] != ')'){
            solve(s,index+1,y_result, ans+s[index],l);
        }
        else{
            //including
            solve(s,index+1,y_result, ans+s[index],l);

            //excluding
            solve(s,index+1,y_result,ans,l);
        }
        return;
    }
    vector<string> removeInvalidParentheses(string s) {

        int final_length = count(s);
        set<string>y_result;
        string y_ans = "";
        solve(s,0,y_result,y_ans, s.length()-final_length);

        vector<string>final_ans;
        // for(int i=0; i<y_result.size(); i++){

        //     string s = y_result[i];
        //     final_ans.push_back(s);
        // }
        for(auto i : y_result){
            final_ans.push_back(i);
        }
        return final_ans;
        
    }
};

int main(){
    Solution sp;

    vector<string>ans = sp.removeInvalidParentheses("(a)())(");

    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<endl;
    }

}