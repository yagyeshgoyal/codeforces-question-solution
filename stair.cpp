#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--){
        int q,w,e;
        cin>>q>>w>>e;

        if(w>q && e>w){
            cout<<"STAIR"<<endl;
        }
        else if(w>q && w>e){
            cout<<"PEAK"<<endl;
        }
        else{
            cout<<"NONE"<<endl;
        }
    }


    return 0;
}