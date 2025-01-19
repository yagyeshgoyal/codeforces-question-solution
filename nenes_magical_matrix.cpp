#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        // int opyogi;
        // opyogi = n + (n/2);

        // if(n>3){
        //     opyogi++;
        // }

        // long long int sum = (n*(n+1))/2;

        // long long int count = 0;
        // for(int i=1; i<=n/2; i++){
        //     count = count + (sum - n*i);
        // }

        // long long int ans = n*sum + count;
        // if(n>3)
        // ans++;

        // cout<<ans<<" "<<opyogi<<endl;

        // for(int i=0; i<n; i++){
        //     cout<<1<<" "<<i+1<<" ";
        //     for(int j=1; j<=n; j++){
        //         cout<<j<<" ";
        //     }
        //     cout<<endl;
        // }

        // for(int i=0; i<n/2; i++){
        //     cout<<2<<" "<<i+1<<" ";
        //     for(int j=1; j<=n; j++){
        //         cout<<j<<" ";
        //     }
        //     cout<<endl;
        // }

        // if(n>3){
        //         cout<<1<<" "<<1<<" ";
        //     for(int i=0; i<n; i++){
        //         cout<<i+1<<" ";
        //     }
        //     cout<<endl;
        // }

        long long int ans = 0;
        int p = 1;
        for(int i=1; i<=n; i++){
            ans = ans +  i*p;
            p= p+ 2;
        }

        cout<<ans<<" "<<2*n-1<<endl;
        

        int i = 1; 
        int j = 2;
        p = 1;

        for(int r = 1; r <= 2*n - 1; r++){
            if(p == 1){
                cout<<p<<" "<<i<<" ";
                for(int k = n; k>0; k--){
                    cout<<k<<" ";
                }
                cout<<endl;
                p = 2;
                i++;
            }
            else{
                cout<<p<<" "<<j<<" ";
                for(int k = n; k>0; k--){
                    cout<<k<<" ";
                }
                cout<<endl;
                p = 1;
                j++;
            }
        }
    }


    return 0;
}