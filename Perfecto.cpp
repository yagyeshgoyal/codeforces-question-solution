#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<unordered_map>
#include<queue>
#include<cmath>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;


        long long int sum = (1ll*n*(n+1))/2;
        long long int r = sqrtl(sum);
        
        if(n==1 || 1ll*r*r == sum){
            cout<<-1<<endl;
        }
        else{
            vector<int>ans(n);
            int count1 = 2;
            int count2 = 1;
            long long int sum = 0;
            bool flage = false;

            for(int i=0; i <n; i++){
                if(i&1){
                    sum = sum + count2;
                    long long int p = sqrtl(sum);
                    if(1ll*p*p == sum){
                        
                        sum = sum - count2;
                        swap(count2,count1);
                        sum = sum +count2;
                            
                        
                    }
                    ans[i] = count2;
                    count2 += 2;
                }
                else{
                    sum = sum + count1;
                    long long int p = sqrtl(sum);
                    if(1ll*p*p == sum){
                        
                        sum = sum - count1;
                        swap(count1,count2);
                        sum = sum +count1;
                            
                        
                    }
                    ans[i] = count1;
                    count1 += 2;
                }
            }


            if(flage){
                cout<<-1<<endl;
            }
            else{
                for(int i=0; i<n-1; i++){
                    cout<<ans[i]<<" ";
                }
                if(ans[n-1]>n){
                    cout<<n<<endl;
                }
                else{
                    cout<<ans[n-1]<<endl;
                }

            }
        }

    }

    return 0;
}