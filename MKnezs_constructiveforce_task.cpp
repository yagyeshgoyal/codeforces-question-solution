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
            cout<<"YES"<<endl;
            for(int i=0; i<n; i++){
                if(i%2==0){
                    cout<<1<<" ";
                }
                else{
                    cout<<-1<<" ";
                }
            }
        }
        else if(n ==3){
            cout<<"NO";
        }
        else{
            cout<<"YES"<<endl;
            int p = n/2;
            int y = p-1;
            int x = y+1;
            x = -x;
            
            for(int i=0; i<n; i++){
                if(i%2==0){
                    cout<<y<<" ";
                }
                else{
                    cout<<x<<" ";
                }
            }
        }


        cout<<endl;
    }

    return 0;
}