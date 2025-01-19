#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,n;
        cin>>x>>y>>n;
        int A[n];
        A[0]=x;
        A[n-1]=y;
        for(int i=n-2;i>0;i--)
        {
            A[i]=A[i+1]-(n-i-1);
        }
        // if(A[n-1]!=A[n-2] && A[0]!=A[1] && A[0]<A[1] && A[1]-A[0]>A[n-1]-A[n-2])
        // {
        //     
        // }
        // else
        //  cout<<-1;
        int k=1;
        for(int i=1;i<n;i++)
        {
           if( A[i]<=A[i-1])
           {k=0;
           break;}
        }
        int p=1;
        for(int i=0;i<n-2;i++)
        {
            if((A[i+1]-A[i])<=(A[i+2])-A[i+1])
            {
                p=0;
                break;
            }
        }
        if(k==1 && p==1)
        {
            for(int i=0;i<n;i++)
            {
                cout<<A[i]<<" ";
            }
        }
        else
        cout<<-1<<endl;

        cout<<endl;
    }


    return 0;
}