#include<iostream>
#include<limits.h>
using namespace std;

long long int solve1(int n, long long int x[], long long int y[], int b, int k){

    long long int mini1 = LLONG_MAX/2;
        

    for(int i=1; i<=k; i++){
        mini1 = min<long long int>(mini1, llabs(x[i]-x[b])+llabs(y[i]-y[b]));
        
    }

    // cout<<mini<<endl;
    return mini1;

}

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k,a,b;
        cin>>n>>k>>a>>b;

        long long int x[n+1];
        long long int y[n+1];
        for(int i=1; i<=n; i++){
            cin>>x[i]>>y[i];
        }

        // // if(a<=k && b<=k){
        // //     cout<<0<<endl;
        // // }
        // // else if(a<=k && b>k){
        // //     cout<<solve1(n,x,y,b,k)<<endl;
        // // }
        // // else if(b<=k && a>k){
        // //     cout<<solve1(n,x,y,a,k)<<endl;;
        // // }
        // // else{
        //     long long int ans1 = llabs(x[a]-x[b])+llabs(y[a]-y[b]);


        //     //  long long int mini1 = INT_MAX;
        //      long long int mini1 = LLONG_MAX/2;
        //      long long int mini2 = LLONG_MAX/2;

        //     for(int i=1; i<=k; i++){
        //         mini1 = min<long long int>(mini1, llabs(x[i]-x[b])+llabs(y[i]-y[b]));
        //         mini2 = min<long long int>(mini2, llabs(x[i]-x[a])+llabs(y[i]-y[a]));
        //     }
        //     long long int ans2 = mini1+mini2;

        //     cout<<min<long long int>(ans1,ans2)<<endl;

        // // }

        if(a<=k && b<=k){
            cout<<0<<endl;
        }
        else if(a<=k && b>k){
            cout<<solve1(n,x,y,b,k)<<endl;
        }
        else if(b<=k && a>k){
            cout<<solve1(n,x,y,a,k)<<endl;;
        }
        else{
            long long int ans1 = llabs(x[a]-x[b])+llabs(y[a]-y[b]);

            long long int ans2 = solve1(n,x,y,a,k) + solve1(n,x,y,b,k);

            cout<<min<long long int>(ans1,ans2)<<endl;

        }
    }


    return 0;
}