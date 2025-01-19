#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--){
        int n,k,y;
        cin>>n>>k>>y;

        int arr[k];
        for(int i=0; i<k; i++){
            cin>>arr[i];
        }

        sort(arr,arr+k);

        int ans = k-2;
        for(int i=1; i<k; i++){
            if((arr[i]-2)%n == arr[i-1]){
                
                ans++;
            }
            else if(arr[i]-2 > 0){
                int p = arr[i] - arr[i-1] -1;

                if ((p/2)<y){
                    ans = ans + p;
                    y = y - (p/2);
                }
                else if((p/2) == y){
                    if(p%2 == 0){
                        ans = ans + p;
                    }
                    else{
                        ans = ans + p;
                    }

                    y = 0;
                }
                else{
                    ans = ans + (y)*2;
                    y = 0;
                }
            }
        }

        if((arr[k-1]+2)%n == arr[0]){
            ans++;
        }
        else if(arr[k-1]+2 > 0){
            int p = n-arr[k-1] + arr[0]-1;

            if ((p/2 )< y){
                ans = ans + p;
                y = y - (p/2);
            }
            else if((p/2) == y){
                if(p%2 == 0){
                    ans = ans + p;
                }
                else{
                    ans = ans + p;
                }

                y = 0;
            }
            else{
                ans = ans + (y)*2;
            }
        }

        cout<<ans<<endl;
    }


    return 0;
}