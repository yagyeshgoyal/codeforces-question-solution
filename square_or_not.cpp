#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        string sk;
        cin>>sk;

        int p = sqrtl(n);

        if(p*p == n){
            bool flage = true;
            for(int i=0; i<n; i++){
                int a = i/p;
                int b = i%p;

                if((a==0 || b==0 || a==p-1 || b==p-1) && sk[i] == '1'){

                }
                else if(a != 0 && b!= 0 && a != p-1 && b != p-1 && sk[i] == '0'){

                }
                else{
                    flage = false;
                    break;
                }
                
            }

            if(flage){
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



    return 0;
}