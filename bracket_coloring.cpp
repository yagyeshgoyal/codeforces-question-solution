#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<unordered_map>
#include<queue>
#include<cmath>
#include<bits/stdc++.h>
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

        int left = 0;
        int right = 0;

        for(auto i : s){
            if(i=='('){
                left++;
            } else if(i==')'){
                right++;
            }
        }

        if(left != right){
            cout<<-1<<endl;
        }
        else{
            vector<int>color(n,0);
            stack<char>st1;
            stack<char>st2;
            int c1 = 0;
            int c2 = 0;

            for(int i = 0; i<n; i++){
                if(s[i] == '('){
                    

                    if(st2.size() > 0){
                        st2.pop();
                        color[i] = c2;
                    }
                    else{
                        if(c1 == 0){
                            if(c2 >0){
                                c1 = 2;
                            }
                            else{
                                c1 = 1;
                            }
                        }
                        st1.push(s[i]);
                        color[i] = c1;
                    }
                }
                else{
                    

                    if(st1.size() > 0){
                        st1.pop();
                        color[i] = c1;
                    }
                    else{
                        if(c2 == 0){
                            if(c1 > 0){
                                c2 = 2;
                            }
                            else{
                                c2 = 1;
                            }
                        }
                        st2.push(s[i]);
                        color[i] = c2;
                    }
                }

                
            }

            cout<<max(c1,c2)<<endl;
            for(auto i : color){
                cout<<i<<" ";
            }
            cout<<endl;

        }


    }

    return 0;
}