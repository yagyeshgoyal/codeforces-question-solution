#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int num;
        cin>>num;


        string str = "";
        int temp = num;

        while(temp != 0){
            if(temp%2 ==1){
                str.push_back('1');
            }
            else{
                str.push_back('0');
            }

            temp = temp/2;
        }

        // reverse(str.begin(), str.end());

        vector<int>ans;
        ans.push_back(num);

        // cout<<num<<" ";

        for(int i=0; i<str.length()-1; i++){
            if(str[i] == '1'){
                num = num - pow(2,i);
                // cout<<num<<" ";
                ans.push_back(num);
            }
        }

        int k = str.length()-2;

        while(k--){
            num  = num - pow(2,k+1);
            // cout<<num<<" ";
            ans.push_back(num);
        }

        num = num-1;
        // cout<<num<<endl;
        ans.push_back(num);

        cout<<ans.size()<<endl;
        for(auto i : ans){
            cout<<i<<" ";
        }
        cout<<endl;


        

    }

    return 0;
}