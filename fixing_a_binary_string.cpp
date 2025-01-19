#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool check(string s, int n, int k){
     for (int i = 0; i < k; i++) {
        if (s[i] != s[0]) 
        return false;
    }
    for (int i = 0; i + k < n; i++) {
        if (s[i] == s[i + k]) 
        return false;
    }
    return true;
}

void findans(string s, int n, int k, int p){
    reverse(s.begin(), s.begin() + p);
    s = s.substr(p, (int)s.size() - p) + s.substr(0, p);
    if (check(s,n,k)) {
        cout << p <<endl;
    } else {
        cout << -1 <<endl;
    }
}

int main()
{
    int t;
    cin>>t;

    while(t--){
        int n,k;
        cin>>n>>k;

        string s;
        cin>>s;

        int x = 0;
        for(int i=n-1; i>=0; i--){
            if(s[i] == s[n-1]){
                x++;
            }
            else{
                break;
            }
        }

        if(x==k){
            int p = n;
            for(int i=n-1-k; i>=0; i--){
                if(s[i] == s[i+k]){
                    p = i+1;
                    break;
                }
            }

            findans(s,n,k,p);
        }
        else if(x>k){
            cout<<-1<<endl;
        }
        else{
            bool flage = false;
            for(int i=0; i<n; i++){
                if(s[i] != s.back()){
                    continue;
                }
                int j=i;
                while(j+1<n && s[i] == s[j+1]){
                    j++;
                }

                if(j-i+1+x == k){
                    findans(s,n,k,j+1);
                    flage = true;
                    break;
                }
                else if(j-i+1-k+x == k){
                    findans(s,n,k,i+k-x);
                    flage = true;
                    break;
                }
                i=j;
            }
            if(!flage){
                // cout<<"k"<<endl;
                findans(s,n,k,n);
            }
        }
    }


    return 0;
}