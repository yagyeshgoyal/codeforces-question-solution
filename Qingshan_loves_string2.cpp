#include<iostream>
#include<vector>
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

        if(n&1 == 1){
            cout<<-1<<endl;
        }
        else{
            // int count = 0;
            int i=0; 
            int j= s.length()-1;
            vector<int>position;
            while(i<j && position.size()<301){
                if(i+1 != j && s[i] == '0' && s[j] == '0' ){
                    s.insert(s.begin()+j+1 , '0');
                    s.insert(s.begin()+j+2 , '1');
                    position.push_back(j+1);
                    i++;
                    j++;
                }
                else if(i+1 != j && s[i] == '1' && s[j] == '1'){
                    s.insert(s.begin()+i , '1');
                    s.insert(s.begin()+i , '0');
                    position.push_back(i);
                    i++;
                    j++;
                }
                else if((s[i] == '0' && s[j] == '1') || (s[i] == '1' && s[j] == '0')){
                    i++;
                    j--;
                }
                else{
                    break;
                }
                // cout<<s<<" "<<i<<" "<<j<<endl;
            }

            if(i<j || position.size() > 300){
                cout<<-1<<endl;
            }
            else{
                cout<<position.size()<<endl;
                for(auto i : position){
                    cout<<i<<" ";
                }
                cout<<endl;
            }
        }
    }

    return 0;
}