#include<iostream>
using namespace std;

int main()
{

    int t;
    cin>>t;
    while(t--){
        long long int x,y;
        cin>>x>>y;
        int k=x;
        long long int sum=0;
        while(k!=0){
            sum=sum+(k%10);
            k=k/10;
        }

        
        k=x;
        while((sum%y)!=0){
            // cout<<sum<<endl;
            x++;
            k=x;
            sum=0;
            while(k!=0){
            sum=sum+(k%10);
            k=k/10;
        }
        }
        cout<<x<<endl;
    }

    return 0;
}