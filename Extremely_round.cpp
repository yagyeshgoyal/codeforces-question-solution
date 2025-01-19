#include<iostream>
using namespace std;

int solve(int s){

    if(s<10){
        return s;
    }

    
    if(s>=100000 ){
        return (s/100000) + solve(99999);
    }
    if(s>=10000 ){
        return (s/10000) + solve(9999);
    }
    if(s>=1000){
        return (s/1000) + solve(999);
    }
    if(s>=100 ){
        return (s/100) + solve(99);
    }
    if(s>=10 ){
        return (s/10) + 9;
    }


}

int main()
{
    int t;
    cin>>t;

    while(t--){
        int s;

        cin>>s;

        int ans = solve(s);
        
        cout<<ans<<endl;
        
    }


    return 0;
}