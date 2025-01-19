#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        cin.ignore();
        string s;
        getline(cin,s);

        int count=0;

        int i;
        for(i=0;i<n;i++)
        {
           
            if(s[i]=='B'){
                
                count++;
                i=i+k-1;
            }
        //     else if(i==n-k-1 && s[i]=='w' && (s[i+1]=='B' || s[i+2]=='B'))
        //    { count++;
        //    }
        }
        cout<<count<<endl;


    }


    return 0;
}