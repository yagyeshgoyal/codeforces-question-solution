#include<iostream>
using namespace std;

void check(){

    int n,a,q;
    cin>>n>>a>>q;
    char arr[q];
    int plus=0,minus=0;
    int m=a;
    int temp=a;
    // for(int i=0;i<q;i++)
    // {
    //     cin>>arr[i];
    //     if(arr[i]=='+')
    //     plus++;
    //     else
    //     minus++;
    // }
    // if(a==n)
    // {
    //     cout<<"YES"<<endl;
    //     return ;
    // }
    // else if(n-a == plus-minus)
    // {
    //     cout<<"YES"<<endl;
    //     return ;
    // }
    // else if(plus == minus)
    // {
    //     cout<<"MAYBE"<<endl;
    //     return ;
    // }
    // else {
    //     cout<<"NO"<<endl;
    //     return ;
    // }
    for(int i=0;i<q;i++)
    {
        cin>>arr[i];
        if(arr[i]=='+')
        {
            temp++;
            m=max<int>(m,temp);
            plus++;
        }
        else 
        {
            if(temp>0)
            {temp--;}
            m=max<int>(m,temp);
            minus++;
        }
    }
    if(m>=n)
    {
        cout<<"YES"<<endl;
        return ;
    }
    else if(m<n && n-a>plus)
    {
        cout<<"NO"<<endl;
        return ; 
    }
    else if(m<n && n-a<=plus)
    {
        cout<<"MAYBE"<<endl;
        return ; 
    }
    
}

int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        check();
    }

    return 0;
}