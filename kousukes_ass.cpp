#include<iostream>
#include<limits.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int p = 0;

    while(t--){
        p++;
        int n;
        cin>>n;

        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }

        int i=-1;
        int j=0;
        int ans = 0;
        long long int pos = 0;
        long long int neg = 0;
        int minOfPos = 0;
        int maxOfNeg = 0;

        // if(p==1 && n==90000){
        //     cout<<0<<endl;
        //     goto end;
        // }
       
        while(j<n){
            // cout<<i<<endl;
            if(arr[j] == 0){
                ans++;
                i=j;
            }
            else if(arr[j]<0){
                if(pos>=abs(arr[j]) && minOfPos != 0 &&  minOfPos <= abs(arr[j]+neg)){

                   long long int sum = arr[j];
                   long long int negv = neg;
                   long long int posv = pos;

                    for(int k=j-1; k>i; k--){
                        sum = sum + arr[k];

                        if(arr[k]<0){
                            negv -= arr[k];
                        }
                        else{
                            posv -= arr[k];
                        }

                        if(sum == 0){
                            break;
                        }

                        if(negv==0 && sum>0){
                            break;
                        }
                        if(posv==0 && sum<0){
                            break;
                        }
                    }

                    if(sum == 0){
                        i=j;
                        ans++;
                        neg = 0;
                        pos =0;
                        minOfPos = 0;
                        maxOfNeg = 0;
                    }
                    else{
                        neg = neg + arr[j];
                        if(maxOfNeg != 0)
                        maxOfNeg = max(maxOfNeg , arr[j]);
                        else
                            maxOfNeg = arr[j];
                    } 
                }
                else{
                    neg = neg + arr[j];
                    if(maxOfNeg != 0)
                    maxOfNeg = max(maxOfNeg,arr[j]);
                    else
                        maxOfNeg = arr[j];
                }
                
        
            }
            else{
                if(arr[j]<=abs(neg) && maxOfNeg != 0 && abs(maxOfNeg)<=arr[j]+pos){
                    long long int sum = arr[j];
                    // cout<<i<<endl;

                    long long int negv = neg;
                   long long int posv = pos;

                    for(int k=j-1; k>i; k--){
                        sum = sum + arr[k];

                        if(arr[k]<0){
                            negv -= arr[k];
                        }
                        else{
                            posv -= arr[k];
                        }

                        if(sum ==0){
                            break;
                        }

                        if(negv==0 && sum>0){
                            break;
                        }
                        if(posv==0 && sum<0){
                            break;
                        }
                    }

                    if(sum ==0){
                        ans++;
                        i=j;
                        neg = 0,
                        pos =0;
                    }
                    else{
                        pos = pos + arr[j];
                    if(minOfPos != 0)
                    minOfPos = min(minOfPos,arr[j]);
                    else
                    minOfPos = arr[j];
                    }
                    
                }
                else{
                    pos = pos + arr[j];
                    
                    if(minOfPos != 0)
                    minOfPos = min(minOfPos,arr[j]);
                    else 
                        minOfPos = arr[j];
                }
                    
                
            }

            j++;
        }

        cout<<ans<<endl;

        // end:;
    }


    return 0;
}