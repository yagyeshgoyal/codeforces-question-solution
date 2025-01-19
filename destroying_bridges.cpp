#include<iostream>
using namespace std;

int main()
{

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int k;
        cin>>k;

        // int t = n-1;

        // int count = 0;

        // while(k>0 && t>0){
        //     if(k>=t){
        //         k = k-t;
        //         t--;
        //         count++;
        //     }
        //     else{
        //         break;
        //     }
        // }

        // cout<<n-count<<endl;

       

        if((n-1) <= k){
            cout<<1<<endl;
        }
        else{
            cout<<n<<endl;
        }
    }

    return 0;
}