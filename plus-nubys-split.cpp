#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cin.ignore();
        string s;
        cin>>s;

        int plus = 0;
        int minus = 0;
        for(int i=0; i<n; i++){
            if(s[i] == '+')
            plus++;
            else
            minus++;
        }

        cout<<abs(plus-minus)<<endl;
    }

    return 0;
}