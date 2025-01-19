#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin,s);
        string temp = s;
        
        // bool flage = true;
        for(int i=temp.size()-1; i>=0; i--){
            if(i != 0 && temp[i] == '?' && temp[i-1] == '1'){
                temp[i] = '1';
            }
            else if(i != 0 && temp[i] == '?' && temp[i-1] == '0'){
                temp[i] = '0';
            }
            // else if(temp[i] == '0' && flage == true){
            //     flage = false;
            // }
            // else if(temp[i] == '?' && flage == false){
            //     temp[i] = '0';
            // }
            else if(i != 0 && temp[i] == '?' && temp[i-1] == '?'){
                if(i == temp.size()-1){
                    temp[i] = '1';
                }
                else{
                    temp[i] = temp[i+1];
                }
            }
            else if(i == 0 && temp[i] == '?'){
                temp[i] = '0';
            }
        }
        string temp2 = temp;
        sort(temp2.begin(), temp2.end());
        cout<<temp<<endl;

    }

    return 0;
}