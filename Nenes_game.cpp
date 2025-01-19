#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--){
        int n,k;
        cin>>n>>k;

        int p[n];
        for(int i=0; i<n; i++){
            cin>>p[i];
        }

        while(k--){
            int s;
            cin>>s;

            if(s<p[0]){
                cout<<s<<" ";
            }
            else{
                cout<<p[0]-1<<" ";
            }
        }
        cout<<endl;
    }


    return 0;
}