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
    int count = 0;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        
        string s;
        cin>>s;
        count++;
        // if(count == 195){
        //     cout<<s<<endl;
        // }

        int count01 = 0;
        int count10 = 0;
        int count00 = 0;
        int count11 = 0;

        for(int i=0; i<s.length()/2; i++){
            if(s[i]== '0' && s[s.length()-1-i] == '1'){
                count01++;
            }
            else if(s[i] == '1' && s[s.length()-1-i] == '0'){
                count10++;
            }
            else if(s[i] == '0' && s[s.length()-1-i] == '0'){
                count00++;
            }
            else if(s[i] == '1' && s[s.length()-1-i] == '1'){
                count11++;
            }
        }

        if(count00+count11 >= k){
            while(count00>count11 && k>0){
                count00--;
                k--;
            }
            while(count00<count11 && k>0){
                count11--;
                k--;
            }

            if(k == 0 && count00 == count11){
                cout<<"YES"<<endl;
                goto end;
            }
            else if(k == 0 && count00 != count11){
                cout<<"NO"<<endl;
                goto end;;
            }
            

            if(k%2 == 0){
                while(count00 > 0 && k > 0){
                    count00--;
                    count11--;
                    k -= 2;
                }

                if(k == 0){
                    cout<<"YES"<<endl;;
                    goto end;;
                }
                
                while(count01>0 && count10>0 && k>0){
                    count01--;
                    count10--;
                    k -= 2;
                }

                while(count01>1 && k>0){
                    count01 -= 2;
                    k -= 2;
                }

                while(count10>1 && k>0){
                    count10 -= 2;
                    k -= 2;
                }

                if(k==0){
                    cout<<"YES"<<endl;
                    goto end;;
                }
                else{
                    cout<<"NO"<<endl;
                    goto end;;
                }
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        else{
            k = k - count00 - count11;

            while(count01>0 && count10>0 && k>0 && k%2 ==0){
                count01--;
                count10--;
                k -= 2;
            }

            
            if(k == 0){
                cout<<"YES"<<endl;

            }
            else if(k%2 == 0 && count01>=k){
                cout<<"YES"<<endl;
            }
            else if(k%2 == 0 && count10 >=k){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }

        end:;
    }

    return 0;
}