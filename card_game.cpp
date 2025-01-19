#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        cin.ignore();
        char ch;
        cin>>ch;
        vector<string>c;
        vector<string>d;
        vector<string>h;
        vector<string>s;
        string arr[2*n];
        int card[4] = {0};
        for(int i=0; i<2*n; i++){
            cin>>arr[i];
            if(arr[i][1] == 'C'){
                c.push_back(arr[i]);
                card[0]++;
            }
            else if(arr[i][1] == 'D'){
                d.push_back(arr[i]);
                card[1]++;
            }
            else if(arr[i][1] == 'H'){
                h.push_back(arr[i]);
                card[2]++;
            }
            else if(arr[i][1] == 'S'){
                s.push_back(arr[i]);
                card[3]++;
            }
        }
        int p = 0;
        if(ch == 'D'){
            p = 1;
        }
        else if(ch == 'H'){
            p = 2;
        }
        else if(ch == 'S'){
            p = 3;
        }

        for(int i=0; i<4; i++){
            if(i != p)
            card[i] = card[i] % 2;
        }

        sort(c.begin(), c.end());
        sort(d.begin(), d.end());
        sort(h.begin(), h.end());
        sort(s.begin(), s.end());

        

        int count = 0;
        for(int i=0; i<4; i++){
            if(i != p){
                count = count+card[i];
            }
        }

        if(count>card[p]){
            cout<<"IMPOSSIBLE"<<endl;
        }
        else if (p == 0){
            int k = 0;
            for(int i=0; i<d.size(); i++){
                if(i%2 == 0){
                    cout<<d[i]<<" ";
                }
                else{
                    cout<<d[i]<<endl;
                }
            }

            if(d.size()%2 == 1 && d.size() >0){
                cout<<c[k]<<endl;
                k++;
            }
            for(int i=0; i<h.size(); i++){
                if(i%2 == 0){
                    cout<<h[i]<<" ";
                }
                else{
                    cout<<h[i]<<endl;
                }
            }

            if(h.size()%2 == 1 && h.size() >0){
                cout<<c[k]<<endl;
                k++;
            }
            for(int i=0; i<s.size(); i++){
                if(i%2 == 0){
                    cout<<s[i]<<" ";
                }
                else{
                    cout<<s[i]<<endl;
                }
            }

            if(s.size()%2 == 1 && s.size() >0){
                cout<<c[k]<<endl;
                k++;
            }

            for(int i=k; i<c.size(); i = i+2){
                
                cout<<c[i]<<" "<<c[i+1]<<endl;
                
            }


        }
        else if (p == 1){
            int k = 0;
            for(int i=0; i<c.size(); i++){
                if(i%2 == 0){
                    cout<<c[i]<<" ";
                }
                else{
                    cout<<c[i]<<endl;
                }
            }

            if(c.size()%2 == 1 && c.size() >0){
                cout<<d[k]<<endl;
                k++;
            }
            for(int i=0; i<h.size(); i++){
                if(i%2 == 0){
                    cout<<h[i]<<" ";
                }
                else{
                    cout<<h[i]<<endl;
                }
            }

            if(h.size()%2 == 1 && h.size() >0){
                cout<<d[k]<<endl;
                k++;
            }
            for(int i=0; i<s.size(); i++){
                if(i%2 == 0){
                    cout<<s[i]<<" ";
                }
                else{
                    cout<<s[i]<<endl;
                }
            }

            if(s.size()%2 == 1 && s.size() >0){
                cout<<d[k]<<endl;
                k++;
            }

            for(int i=k; i<d.size(); i = i+2){
                
                    cout<<d[i]<<" "<<d[i+1]<<endl;
                
                
            }
        }
        else if (p == 2){
            int k = 0;
            for(int i=0; i<d.size(); i++){
                if(i%2 == 0){
                    cout<<d[i]<<" ";
                }
                else{
                    cout<<d[i]<<endl;
                }
            }

            if(d.size()%2 == 1 && d.size() >0){
                cout<<h[k]<<endl;
                k++;
            }
            for(int i=0; i<c.size(); i++){
                if(i%2 == 0){
                    cout<<c[i]<<" ";
                }
                else{
                    cout<<c[i]<<endl;
                }
            }

            if(c.size()%2 == 1 && c.size() >0){
                cout<<h[k]<<endl;
                k++;
            }
            for(int i=0; i<s.size(); i++){
                if(i%2 == 0){
                    cout<<s[i]<<" ";
                }
                else{
                    cout<<s[i]<<endl;
                }
            }

            if(s.size()%2 == 1 && s.size() >0){
                cout<<h[k]<<endl;
                k++;
            }

            for(int i=k; i<h.size(); i = i+2){
                
                    cout<<h[i]<<" "<<h[i+1]<<endl;
               
            }

        }
        else if (p == 3){
            int k = 0;
            for(int i=0; i<d.size(); i++){
                if(i%2 == 0){
                    cout<<d[i]<<" ";
                }
                else{
                    cout<<d[i]<<endl;
                }
            }

            if(d.size()%2 == 1 && d.size() >0){
                cout<<s[k]<<endl;
                k++;
            }
            for(int i=0; i<h.size(); i++){
                if(i%2 == 0){
                    cout<<h[i]<<" ";
                }
                else{
                    cout<<h[i]<<endl;
                }
            }

            if(h.size()%2 == 1 && h.size() >0){
                cout<<s[k]<<endl;
                k++;
            }
            for(int i=0; i<c.size(); i++){
                if(i%2 == 0){
                    cout<<c[i]<<" ";
                }
                else{
                    cout<<c[i]<<endl;
                }
            }

            if(c.size()%2 == 1 && c.size() >0){
                cout<<s[k]<<endl;
                k++;
            }

            for(int i=k; i<s.size(); i = i+2){
               
                cout<<s[i]<<" "<<s[i+1]<<endl;
                
            }
        }



    }


    return 0;
}