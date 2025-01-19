#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int check(char ch){
    if(ch-'0'>= 0 && ch-'0'<=9){
        return 1;
    }
    else{
        return 0;
    }
}

int main()
{
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        string s;
        cin>>s;

        bool flage = true;
        for(int i=1; i<n; i++){
            if(check(s[i]) == 0 && check(s[i]) == 1){
                flage = false;
                break;
            }
        }

        if(flage){
            string s1 = "";
            string s2 = "";

            for(int i=0; i<n; i++){
                if(check(s[i])==1){
                    s1.push_back(s[i]);
                }
                else{
                    s2.push_back(s[i]);
                }
            }

            sort(s1.begin(), s1.end());
            sort(s2.begin(), s2.end());

            int i=0;
            int j=0;
            bool flage2 = true;
            while(j<s1.length()){
                if(s1[j] == s[i]){
                    i++;
                    j++;
                }
                else{
                    flage2 = false;
                    break;
                }
            }

            if(flage2){
                j=0;
                while(j<s2.length()){
                    if(s2[j] == s[i]){
                        i++;
                        j++;
                    }
                    else{
                        flage2 = false;
                        break;
                    }
                }

                if(flage2 == true){
                    cout<<"YES"<<endl;
                }
                else{
                    cout<<"NO"<<endl;
                }
            }
            else{
                cout<<"NO"<<endl;
            }

        }
        else{
            cout<<"NO"<<endl;
        }
    }


    return 0;
}