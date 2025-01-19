#include<iostream>
#include<bits/stdc++.h>
#include<string>

using namespace std;

void increase1(string &temp , int index, int n){


    if(temp[index] == '9'){
        temp[index] = '0';
        
        increase1(temp,index-1,n);
        return ;
    }
    else{
        temp[index] = char(temp[index] + 1);
        return ;
    }

}

int main()
{
    int t;
    cin>>t;

    cin.ignore();

    while(t--){
        

        string s;
        cin>>s;
        s = '0'+s;

        string ans = s;
        string temp = s;
   
        
        for(int i=temp.length()-1; i>0; i--){
            
            char ch = temp[i];
            
            if(ch >= '5'){
                increase1(temp,i-1,temp.length());
                temp[i] = '0';
                ans = temp;
            }
            else{
                temp[i] = '0';
            }
        }

        

        if(ans[0] != '0'){
            
            
                cout<<ans;
            
            cout<<endl;
        }
        else{
            
                for(int i=1; i<ans.length(); i++){
                    cout<<ans[i];
                }
                cout<<endl;
            
        }

    }


    return 0;
}