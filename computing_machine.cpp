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

        string s;
        cin>>s;

        string k;
        cin>>k;

        string ss = s;
        string kk = k;

        int p ;
        cin>>p;

        // while(p--){
        //     int a,b;
        //     cin>>a>>b;

        //     string c = s.substr(a-1,b-a+1);
        //     string d = k.substr(a-1,b-a+1);
            

        //     // cout<<c<<" "<<d<<endl;

        //     for(int i=0; i+2<c.length(); i++){
        //         if(c[i] == '0' &&  c[i+2] == '0'){
        //             d[i+1] = '1'; 
        //         }
        //     }

        //     for(int i=0; i+2<c.length(); i++){
        //         if(d[i] == '1' && d[i+2] == '1'){
        //             // cout<<i<<endl;
        //             c[i+1] = '1'; 
        //         }
        //     }

        //     int count = 0;
        //     for(int i=0; i<c.length(); i++){
        //         if(c[i] == '1'){
        //             count++;
        //         }
        //     }

        //     cout<<count<<endl;
        // }

        for(int i=0; i+2<n; i++){
            if(s[i] == '0' && s[i+2] == '0'){
                k[i+1] = '1';
            }
        }

        for(int i=0; i+2<n; i++){
            if(k[i] == '1' && k[i+2] == '1'){
                s[i+1] = '1';
            }
        }

        int sumarr[n+1] = {0};
        for(int i=0; i<n; i++){
            if(s[i] == '1'){
                sumarr[i+1] = sumarr[i] + 1;
            }
            else{
                sumarr[i+1] = sumarr[i];
            }
        }

        while(p--){

            int a,b;
            cin>>a>>b;
            int count = 0;

            // for(int i=a-1; i<b; i++){
            //     if(s[i] == '1'){
            //         count++;
            //     }
            // }

            count = sumarr[b]-sumarr[a-1];

            vector<bool>visited(b-a+1,false);

            if(visited[a-a] == false && s[a-1] == '1' &&   ss[a-1] == '0'){
                visited[a-a] = true;
                count--;
            }

            if(visited[b-a] == false && s[b-1] == '1' && ss[b-1] == '0'){
                visited[b-a] = true;
                count--;
            }

            if(k[a-1] == '1' && kk[a-1] == '0' && a-1+1<=b-1 && s[a-1+1]=='1' && ss[a-1+1] == '0' && visited[1] == false){
                visited[1] = true;
                count--;
            }

            if(k[b-1] == '1' && kk[b-1] == '0' && b-1-1>=a-1 && s[b-1-1]=='1' && ss[b-1-1] == '0' && visited[b-1-a] == false){
                visited[b-1-a] = true;
                count--;
            }

            cout<<count<<endl;
        }
    }


    return 0;
}