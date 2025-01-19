#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
       int n;
       cin>>n;
       cin.ignore();
       string k;
       getline(cin,k);
    //    cin.ignore();
       string s;
       getline(cin,s);
       char p[n+1];

       int i=0;

       if(k[0]!='0')
      { bool flage=false;
       while(i!=n){
        if(s[i]>k[0]){
            cout<<s[i];
            i++;
        }
        else if(s[i]==k[0] && s[i+1]<k[0])
        {
            cout<<k[0];
            flage=true;
            break;
        }
        else if(s[i]<k[0]){
            cout<<k[0];
            flage=true;
            break;
        }
        else{
            cout<<s[i];
            i++;
        }


       } 
         while(i!=n){
            cout<<s[i];
            i++;
        }
        if(flage==false)
        cout<<k[0];
        cout<<endl;}
        else
        {
            cout<<s<<k[0]<<endl;
        }
   

       
         
      
       
    }
    


    return 0;
}