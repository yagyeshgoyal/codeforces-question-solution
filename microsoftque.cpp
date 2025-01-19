#include<iostream>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

int swapAndCount(string s, string t) {
    int swaps=0;
    int flag=1;
    int n=s.size();
    for(int i=0;i<n;i++){
        if(s[i]==t[i]) continue;
        else if(s[i]<t[i]){
            if(flag) {
                swaps++;
                flag=0;
            }
            if(!flag){
                continue;
            }
        }
        else{
            if(flag){
                flag=0;
            }
            else if(!flag){
                swaps++;
            }
        }
    }
    return swaps;
}

int solution(string S, string T) {
    return min(swapAndCount(S, T),swapAndCount(T, S));
}

int main() {
    string S = "29162";
    string T = "10524";
    cout<< solution(S, T) << endl;  
    return 0;
}