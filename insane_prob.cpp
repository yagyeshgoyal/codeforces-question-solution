#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--){
        int k,l1,r1,l2,r2;
        cin>>k>>l1>>r1>>l2>>r2;

        long long int maxvalue  = r2/l1;

        int minrangevalue = 0;
        if(r2-l2 <= r1-l1){
            minrangevalue = 2;
        }
        else{
            minrangevalue = 1;
        }


        long long int powerofk =1;
        long long int ans = 0;
        while(1ll*powerofk <= r2){
            long long int pvalue = powerofk;

                int left = (l2+pvalue-1)/pvalue;
                int right = r2/pvalue;
            // if(minrangevalue == 1){
                int maxi = max<int>(left, l1);
                int mini = min<int>(right, r1);
                
                if(mini>= maxi)
                ans = ans + mini-maxi+1;

                if((mini+1)<=r1 && 1ll*(mini+1)*pvalue>=l2 && 1ll*(mini+1)*pvalue<=r2){
                    
                }

                if((maxi-1)>=l1 && 1ll*(maxi-1)*pvalue>=l2 && 1ll*(maxi-1)*pvalue<=r2){
                    
                }

            // }
            // else{

            // }
            if(pvalue> r2/k){
                break;
            }

            if(k == 1){
                break;
            }


            powerofk = powerofk*k;
        }

        cout<<ans<<endl;
    }


    return 0;
}