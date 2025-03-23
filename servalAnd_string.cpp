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
        int k;
        cin>>k;
        
        string s;
        cin>>s;

        

        for(int i=0; i<n; i++){
            
            string temp = s;
            reverse(temp.begin(), temp.end());
            if(s < temp){
                break;
            }

            if(s[i] == s[n-i-1] ){
                // cout<<"p"<<endl;
                if(k<=0){
                    break;
                }
                int t = -1;
                char p = s[i];
                for(int j=i+1; j<n; j++){
                    // cout<<"a"<<endl;
                    if(s[j] <p){
                        p = s[j];
                        t = j;
                    }
                }

                if(t != -1){
                    swap(s[t],s[i]);
                    k--;
                }


            }
            else if(s[i] > s[n-i-1] && k>0){
                swap(s[i],s[n-i-1]);
                break;
            }
            else{
                break;
            }
        }

        string temp = s;
        reverse(temp.begin(), temp.end());

        if(s<temp){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

        


    }

    return 0;
}