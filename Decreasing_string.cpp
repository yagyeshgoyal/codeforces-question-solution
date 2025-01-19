#include<iostream>
#include<vector>
#include<set>
#include<stack>
#include<map>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        cin.ignore();
        string s;
        cin>>s;
        long long int pos;
        cin>>pos;

        // map<char,int>countCharOccurance;
        // set<char>presentChar;
        stack<char>st;
        // string S = s;

        // for(int i=0; i<s.length(); i++){
        //     presentChar.insert(s[i]);
        //     countCharOccurance[s[i]]++;
        // }

        // while(S.length() < pos){
        //     // char ch = *presentChar.rbegin();
            
        //     // int pos = s.find(ch);
        //     // string temp = s.substr(0,pos) + s.substr(pos+1);

        //     // s = temp;
        //     // S = S + temp;
        // }

        // cout<<S[pos-1];

        long long int size = s.length();
        long long int k  = size -1;
        int i= 0;
        int point = 0;
        while(size < pos && i+1<s.length()){
            if(point == 1){
                if(st.size() == 0){
                    point = 0;
                    i++;
                }
                else if(st.top() > s[i+1]){
                    st.pop();
                    size = size + k;
                    k--;
                }
                else{
                    i++;
                    point = 0;
                }
            }
            else{
                if(s[i] > s[i+1]){
                    size = size+ k;
                    k--;
                    // i++;
                    point = 1;
                }
                else{
                    st.push(s[i]);
                    i++;
                }
            }
            

        }

        if(point == 1){
            i++;
        }

        while(i<s.length()){
            st.push(s[i]);
            i++;
        }

        while(st.size()>0 && size<pos){
            st.pop();
            size = size + k;
            k--;
        }

       long long int man = size-pos;
    
        while(st.size()>0 &&man--){
            st.pop();
        }

        // if(!st.empty())
        cout<<st.top();
        // else{
        //     cout<<pos<<" "<<s<<" ";
        //     cout<<"-1";
        // }

    }

    // if("pbdm" > "pbtm"){
    //     cout<<"d"<<endl;
    // }
    cout<<endl;


    return 0;
}