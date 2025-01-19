#include<iostream>
#include<bits/stdc++.h>
#include<cmath>
using namespace std;

int main()
{

    int t;
    cin>>t;

    while(t--){
        int a,b,c;
        cin>>a>>b>>c;

        int h;
        if(a>1)
         h = log2(a);
         else {
            h = 0;
         }
        
        // cout<<h<<endl;

        int max = pow(2,h+1) - 1;
        int min = pow(2,h) - 1;

        int ans ;
        
        int space = max - a;
        if(space>0){
            if(b<=space){
                space = space -b;
                if(space>0){
                    int pos = space + b + 2*(a-min);
                    if(pos == c){
                        ans = h+1;
                    }
                    else {
                        ans =-1;
                    }
                }
                else if(space == 0){
                    int pos = b + 2*(a-min);
                    if(pos == c){
                        ans = h+1;
                    }
                    else{
                        ans = -1;
                    }
                }
            }
            else{
                // cout<<"k"<<endl;
                b =  b - space;
                int pos = space + 2*(a-min);
                if(pos == c){
                    if(b%pos == 0){
                        ans = h + (b/pos);
                    }
                    else{
                        ans = h+(b/pos) + 1;
                    }

                    // for leaf node;
                    ans++;
                }
                else{
                    ans = -1;
                }
            }
        }
        else if(space == 0){
            int rest = a - min;
            int pos = 2*rest;

            if(pos == c){
                if(b%pos == 0){
                    ans = h + (b/pos);
                }
                else{
                    ans = h+(b/pos) + 1;
                }

                // for leaf node;
                ans++;
            }
            else{
                ans = -1;
            }
        }


        if(a==0 && b==0){
            ans--;
        }

        if(ans<-1){
            ans = -1;
        }

        cout<<ans<<endl;
    }

    return 0;
}