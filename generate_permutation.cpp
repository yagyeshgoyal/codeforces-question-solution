#include<iostream>
using namespace std;

int main()
{

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        if(n%2 == 0){
            cout<<-1<<endl;
        }
        else{
            int k = (n+1)/2;
            while(k){
                cout<<k<<" ";
                k--;
            }
            k = (n+1)/2;
            k++;
            while(k<=n){
                cout<<k<<" ";
                k++;
            }
            cout<<endl;
        }
    }

    return 0;
}