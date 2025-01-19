#include<iostream>
#include<stack>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        string s;
        cin>>s;

        stack<int>yogi;
        int ans = 0;

        for(int i=0; i<n; i++){
            if(yogi.size() == 0){
                yogi.push(i);
            }
            else if(s[i] == '('){
                yogi.push(i);
            }
            else if(s[i] == '_'){
                if(s[yogi.top()] == '('){
                    ans = ans+ i-yogi.top();
                    yogi.pop();
                }
                else{
                    yogi.push(i);
                }
            }
            else if(s[i] == ')'){
                if(s[yogi.top()] == '_'){
                    ans = ans + i - yogi.top();
                    yogi.pop();
                }
                else{
                    yogi.push(i);
                }
            }
        }

        cout<<ans<<endl;

    }


    return 0;
}