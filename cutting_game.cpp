#include<iostream>
#include<vector>
#include<map>
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){
    
        int a,b,n,m;
        cin>>a>>b>>n>>m;
        int up = 1;
        int down = a;
        int left = 1;
        int right = b;
        
        map<int,vector<int>>mp;
        
        for(int i=0; i<n; i++){
            int l,k;
            cin>>l>>k;
            mp[l].push_back(k);
        }

        int player1 = 0;
        int player2 = 0;
        
        bool flage = true;
        while(m--){
            char ch ;
            cin>>ch;
            int l;
            cin>>l;
            int count = 0;
            if(ch == 'U'){
                for(int i=up; i<up+l; i++){
                    if(mp.count(i)){
                        for(auto j : mp[i]){ if(j>=left && j<=right)count++;}
                    }

                }
                up = up + l;
            }
            else if(ch == 'D'){
                for(int i=down-l+1; i<= down; i++){
                    if(mp.count(i)){
                        for(auto j : mp[i]){ if(j>=left && j<=right)count++;}
                    }

                }
                down = down - l;
            }
            else if(ch == 'L'){
                for(int i=up; i<=down; i++){
                    if(mp.count(i)){
                        for(auto j : mp[i]){ if(j>=left && j<left+l)count++;}
                    }

                }
                left = left + l;
            }
            else if(ch == 'R'){
                for(int i=up; i<=down; i++){
                    if(mp.count(i)){
                        for(auto j : mp[i]){ if(j>right-l && j<=right)count++;}
                    }

                }
                right = right -l;
            }

            if(flage == true){player1 = player1 + count; flage = false;}
            else { player2 = player2 + count; flage = true;}
            

        }
        cout<<player1<<" "<<player2<<endl;

    }



    return 0;
}