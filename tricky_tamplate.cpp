#include<iostream>
using namespace std;

bool solve(){
    int n;
    cin>>n;
    cin.ignore();

    string a,b,c;
    getline(cin,a);
    getline(cin,b);
    getline(cin,c);

    if(n==1){
        if(a[0] != c[0] && b[0] != c[0]){
            return true;
        }
        else{
            return false;
        }
    }

    bool flage = true;

    // for(int i=0; i<n; i++){
    //     if(a[i] != b[i]){
    //         if(a[i] == c[i] || b[i] == c[i]){
    //             return false;
    //         }

    //     }
    //     else{
    //         if(a[i] != c[i] && b[i] != c[i]){
    //             flage = true;
    //         }
    //     }
    // }
    // if(flage)
    // return true;
    // else{
    //     return false;
    // }

    for(int i=0; i<n; i++){
        if(c[i]!=a[i] && c[i] != b[i]){
            return true;
        }
    }

    return false;
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        
        bool ans = solve();

        if(ans){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }


    }


    return 0;
}