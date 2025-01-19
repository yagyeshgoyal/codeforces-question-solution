#include<iostream>
#include<set>
using namespace std;

int main()
{

    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int xking, yking;
        cin>>xking>>yking;
        int xqueen, yqueen;
        cin>>xqueen>>yqueen;

        set<pair<int,int>>king;
        king.insert(make_pair(xking-a,yking-b));
        king.insert(make_pair(xking-a,yking+b));
        king.insert(make_pair(xking+a,yking-b));
        king.insert(make_pair(xking+a,yking+b));
        king.insert(make_pair(xking-b,yking-a));
        king.insert(make_pair(xking-b,yking+a));
        king.insert(make_pair(xking+b,yking-a));
        king.insert(make_pair(xking+b,yking+a));

        set<pair<int,int>>queen;
        queen.insert(make_pair(xqueen-a,yqueen-b));
        queen.insert(make_pair(xqueen-a,yqueen+b));
        queen.insert(make_pair(xqueen+a,yqueen-b));
        queen.insert(make_pair(xqueen+a,yqueen+b));
        queen.insert(make_pair(xqueen-b,yqueen-a));
        queen.insert(make_pair(xqueen-b,yqueen+a));
        queen.insert(make_pair(xqueen+b,yqueen-a));
        queen.insert(make_pair(xqueen+b,yqueen+a));

        int count = 0;

        for(auto i : king){
            for(auto j : queen){
                if(i.first == j.first && i.second == j.second){
                    count++;
                }
            }
        }

        cout<<count<<endl;
        
    }

    return 0;
}