#include<iostream>
using namespace std;

int main()
{
    int p;
    cin>>p;

    while(p--){
        int n;
        cin>>n;

        if(n%2 == 0){
            cout<<"YES"<<endl;

            int k = n;
            for(int i=1; i<=k/2; i++){
                cout<<char('A' + (i-1)%26);
                cout<<char('A' + (i-1)%26);
            }
            cout<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }


    return 0;
}