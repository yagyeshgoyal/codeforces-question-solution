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
        int n,m;
        cin>>n>>m;

        string s;
        cin>>s;

        int count_ca = 0;
        int count_cb = 0;
        int count_ba = 0;
        int count_bc = 0;
        int count_extra_ca = 0;
        int count_extra_ba = 0;

        for(int i = 0; i<m; i++){
            char c1 , c2;
            cin>>c1>>c2;
            if(c1 == 'b' && c2=='a'){
                if(count_cb>count_ba)
                count_ba++;
                else{
                    count_extra_ba++;
                }
                
            }
            else if(c1 == 'c' && c2=='a'){
                if(count_bc>count_ca)
                count_ca++;
                else{
                    count_extra_ca++;
                }
            }
            else if(c1 == 'b' && c2=='c'){
                count_bc++;
            }
            else if(c1 == 'c' && c2=='b'){
                count_cb++;
            }
        }

        string ans = "";
        for(int i = 0; i<n; i++){
            if(s[i] == 'a'){
                ans.push_back('a');
            }
            else if(s[i] == 'b'){
                if(count_extra_ba>0){
                    ans.push_back('a');
                    count_extra_ba--;
                }
                else if(count_ba>0){
                    ans.push_back('a');
                    count_ba--;
                }
                else if(count_bc>0 && count_ca>0){
                    ans.push_back('a');
                    count_bc--;
                    count_ca--;
                }
                else{
                    ans.push_back('b');
                }
            }
            else if(s[i] == 'c'){
                if(count_extra_ca>0){
                    ans.push_back('a');
                    count_extra_ca--;
                }
                else if(count_ca>0){
                    ans.push_back('a');
                    count_ca--;
                }
                else if(count_cb>0 && count_ba>0){
                    ans.push_back('a');
                    count_cb--;
                    count_ba--;
                }
                else if(count_cb>0){
                    ans.push_back('b');
                    count_cb--;
                }
                else{
                    ans.push_back('c');
                }
            }
        }

        cout<<ans<<endl;


    }

    return 0;
}