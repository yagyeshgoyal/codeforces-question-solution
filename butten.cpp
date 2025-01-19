#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        
        // if(a==b)
        // {
        //     if(c%2==0)
        //     cout<<"Second"<<endl;
        //     else
        //     cout<<"First"<<endl;
        // }
        // else if(a>b)
        // {
        //     if((a-b)>c)
        //     cout<<"First"<<endl;
        //     else
        //     if((a-b)<=c)
        //     {
        //         if((c-a+b)%2==0)
        //         cout<<"Second"<<endl;
        //         else
        //         cout<<"First"<<endl;
        //     }
        // }
        // else if(b>a)
        // {
        //     if((b-a)>c)
        //     cout<<"second"<<endl;
        //     else
        //     if((b-a)<=c)
        //     {
        //         if((c-b+a)%2==0)
        //         cout<<"Second"<<endl;
        //         else
        //         cout<<"first"<<endl;
        //     }
        // }
        if(c%2 == 1){
            a = a + (c/2) + 1;
            b = b + (c/2);
        }
        else{
            a = a + (c/2) ;
            b = b + (c/2);
        }

        if(a>b){
            cout<<"First"<<endl;
        }
        else{
            cout<<"Second"<<endl;
        }

    }
    return 0;
}