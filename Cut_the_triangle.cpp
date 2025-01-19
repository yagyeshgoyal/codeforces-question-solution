#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int x1,y1,x2,y2,x3,y3;
        cin>>x1>>y1;
        cin>>x2>>y2;
        cin>>x3>>y3;

        bool flage = false;

        if((x1>x2 && x1<x3) || (x1<x2 && x1>x3) || (x2>x1 && x2<x3)
        || (x2<x1 && x2>x3) || (x3>x1 && x3<x2) || (x3<x1 && x3>x2)
        ||(y1>y2 && y1<y3) || (y1<y2 && y1>y3) || (y2>y1 && y2<y3)
        || (y2<y1 && y2>y3) || (y3>y1 && y3<y2) || (y3<y1 && y3>y2)){
            flage = true;
        }

        if(flage){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }


    return 0;
}