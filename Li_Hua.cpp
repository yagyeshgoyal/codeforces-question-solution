#include<iostream>
using namespace std;

int main()
{

    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;
        if((x1==1 && y1==1) || (x1==n && y1==1) || (x1==1 && y1==m) || (x1==n && y1==m)){
            cout<<2<<endl;
        }
        else if((x2==1 && y2==1) || (x2==n && y2==1) || (x2==1 && y2==m) || (x2==n && y2==m)){
            cout<<2<<endl;
        }
        else if(x1==1 || x1 == n || y1 == 1 || y1 == m || x2==1 || x2 == n || y2 == 1 || y2== m ){
            cout<<3<<endl;
        }
        else if(abs(x1-x2)+abs(y1-y2) == 2){
            if(x2>x1){
                cout<<min(4,n)<<endl;
            }
            else{
                cout<<min(4,m)<<endl;
            }
        }
        else {
            cout<<4<<endl;
        }
    }

    return 0;
}