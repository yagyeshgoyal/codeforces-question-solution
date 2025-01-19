#include<iostream>
using namespace std;

void check(){
    double a,b;
    int c;
    cin>>a>>b>>c;
    double d=(a+b)/2;
    if(a==d && b==d)
    {
        cout<<0<<endl;
        return;
    }
    if(b>a){
        int k=(b-d);
        double p=(b-d);
        if(b<=c){
            cout<<1<<endl;
            return;
        }
        else if(k%c==0 && k==p)
            {  
                cout<<k/c<<endl;
                return;
            }
        else{
            cout<<(k/c)+1<<endl;
            return;
        }
    }
    else{
         int k=(a-d);
         double p=(a-d);
         if(a<=c){
            cout<<1<<endl;
            return;
         }
         else if(k%c==0 && k==p)
            {
                cout<<k/c<<endl;
                return;
            }
        else{
            cout<<(k/c)+1<<endl;
            return;
        }
    }

return;

}

int main()
{

    int t;
    cin>>t;
    while(t--){

        check();
    }

    return 0;
}