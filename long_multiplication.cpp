#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{

    int tt;
    cin>>tt;

    while(tt--){
        string m1,m2;
        cin>>m1>>m2;

        // for(int i=1; i<m1.length(); i = i+2){
        //     // if(m1[i] >m2[i]){
        //         swap(m1[i],m2[i]);
        //     // }
        // }

        // // if(m1.length() == 1){
        // //     swap(m1[0],m2[0]);
        // // }

        // for(int i=m1.length()-1; i>=0; i = i-2){
        //     swap(m1[i] , m2[i]);
        // }
        int a=0;
        int b = 1;
        for(int i=0; i<m1.length();i++){
            if(m1[i] > m2[i]){
                a = i;
                b = 1;
                break;
            }
            else if(m1[i] < m2[i]){
                a = i;
                b = 2;
                break;
            }
        }

        if(b == 1){
            for(int i=a+1; i<m1.length(); i++){
                if(m1[i] > m2[i]){
                    swap(m1[i],m2[i]);
                }
            }
        }
        else{
            for(int i=a+1; i<m1.length(); i++){
                if(m2[i] > m1[i]){
                    swap(m1[i],m2[i]);
                }
            }
        }

        cout<<m1<<endl;
        cout<<m2<<endl;
    }

    return 0;
}