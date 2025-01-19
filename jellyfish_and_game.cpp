#include<iostream>
#include<limits.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--){
        int n,m,k;
        cin>>n>>m>>k;

        int arr1[n];
        int maxa = INT_MIN;
        int mina = INT_MAX;
        long long int suma = 0;
        for(int i=0; i<n; i++){
            cin>>arr1[i];
            maxa = max(maxa,arr1[i]);
            mina = min(mina,arr1[i]);
            suma += arr1[i];
        }

        int arr2[m];
        int maxb = INT_MIN;
        int minb = INT_MAX;
        long long int sumb = 0;
        for(int i=0; i<m; i++){
            cin>>arr2[i];

            maxb = max(maxb,arr2[i]);
            minb = min(minb,arr2[i]);
            sumb += arr2[i];
        }

        k = k%2;

        if(k==0){
            if(mina<maxb){
                suma = suma-mina+maxb;
                maxa = max(maxa,maxb);
                minb = min(minb,mina);
            }
            
            if(minb<maxa){
                cout<<suma-maxa+minb<<endl;
            }
            else{
                cout<<suma<<endl;
            }
        }
        else{
            if(mina<maxb){
                cout<<suma-mina+maxb<<endl;
            }
            else{
                cout<<suma<<endl;
            }
        }


    }


    return 0;
}