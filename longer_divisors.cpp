#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        long long int count=0;
        if(n%2 == 0){
            // while(n>0 && n%3 == 0){
            //     count++;
            //     n = n/3;
            // }

            // if(count == 0){
            //     cout<<2<<endl;
            // }
            // else{
            //     cout<<3+count<<endl;
            // }
            int ans = 3;
            while(n%ans == 0){
                ans++;
            }

            cout<<ans-1<<endl;
        }
        else{
            cout<<1<<endl;
        }
    }


    return 0;
}