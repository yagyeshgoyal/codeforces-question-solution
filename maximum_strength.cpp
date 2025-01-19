#include<iostream>
#include<bits/stdc++.h>
#include<string>
#include<stack>
using namespace std;

int main()
{

    int t;
    cin>>t;
    // while(t--){
    //     long double a,b;
    //     cin>>a>>b;

    //     int length_a = floor(log10(a) + 1);
    //     int length_b = floor(log10(b) + 1);
    //     int sum = 0;
    //     string new_a = to_string(a);
    //     string new_b = to_string(b);
    //     // cout<<a<<" "<<b<<endl;
    //     // cout<<new_a<<" "<<new_b<<endl;

    //     stack<long double>s1;
    //     stack<long double>s2;

    //     for(int i=0; i<length_a; i++){
    //         s1.push(a-((a/10)*10));
    //         a = a/10;
    //     }
    //     for(int i=0; i<length_b; i++){
    //         s1.push(b-((b/10)*10));
    //         b = b/10;
    //     }



        // if(length_a == length_b){
        //     int count = 0;
        //     // for(int i=0; i<length_a; i++){
        //     //     if(new_a[i] != new_b[i]){
        //     //         count++;
        //     //         sum = sum + abs(new_a[i]-new_b[i]);
        //     //         break;
        //     //     }
        //     //     else{
        //     //         count++;
        //     //     }
        //     // }
        //     // sum = sum + (9* (length_a-count));
        //     while(!s1.empty()){
        //         if(s1.top() == s2.top()){
        //             count++;
        //             s1.pop();
        //             s2.pop();
        //         }
    //             else{
    //                 count++;
    //                 break;
    //             }
    //         }

    //         if(count == length_a && s1.top() == s2.top()){
    //             sum = 0;
    //         }
    //         else{
    //             sum = sum + (length_a-count)*9 + abs(s1.top()-s2.top());
    //         }

    //     }
    //     else if(length_a>length_b){
    //         // sum = sum + (9*(length_a-1)) + abs(new_a[0]-'0');
    //         sum = sum + (9*(length_a-1)) + abs(s1.top());
    //     }
    //     else if(length_a<length_b){
    //         // sum = sum + (9*(length_b-1)) + abs(new_b[0]-'0');
    //         sum = sum + (9*(length_b-1)) + abs(s2.top());
    //     }

    //     cout<<sum<<endl;

    // }
    cin.ignore();
    while(t--){
        string a,b;
        cin>>a>>b;
        // cout<<a<<" "<<b<<endl;
        int sum = 0;
        if(a.length() == b.length()){
            int count = 0;
            for(int i=0; i<a.length(); i++){
                if(a[i]!=b[i]){
                    sum = sum + (a.length()-i-1)*9 + abs(a[i]-b[i]);
                    // cout<<a[i]<<" "<<b[i];
                    break;
                }
            }
        }
        else if(a.length()>b.length()){
            sum = sum + (a.length()-1)*9 + abs(a[0]-'0');
        }
        else{
            sum = sum + (b.length()-1)*9 + abs(b[0]-'0');
        }

        cout<<sum<<endl;
    }

    return 0;
}