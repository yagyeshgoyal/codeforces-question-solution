#include<iostream>
using namespace std;

int main()
{
    int tt;
    cin>>tt;
    while(tt--){
        int n,k;
        cin>>n>>k;

        for(int i=0; i<n; i++){
            for(int j=0; j<k; j++){
                cout<<char(j+'a');
            }
        }
        cout<<endl;
    }


    return 0;
}