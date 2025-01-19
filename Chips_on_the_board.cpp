#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long int a[n];
        long int b[n];
        long long int mina=INT64_MAX;
        long long int minb=INT64_MAX;
        long long int totala=0;
        long long int totalb=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            mina=min<long long int>(mina,a[i]);
            totala +=a[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
            minb=min<long long int>(minb,b[i]);
            totalb += b[i];
        }

        // if(mina<minb){
        //     cout<<(mina*n)+totalb<<endl;
        // }
        // else if(mina>minb){
        //     cout<<(minb*n)+totala<<endl;
        // }
        // else if(totala>totalb) {
        //     cout<<(mina*n)+totalb<<endl;
        // }
        // else {
        //     cout<<(minb*n)+totala<<endl;

        // }

        cout<<min<long long int >(1ll*mina*n + totalb , 1ll*minb*n + totala)<<endl;

    }


    return 0;
}