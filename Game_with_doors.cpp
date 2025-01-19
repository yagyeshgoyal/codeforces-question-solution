#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;

        int ans = 0;

        if(b<=c){
            ans  = 1;
            // if(a!=1){
            //     ans++;
            // }
            if(b==c){
                ans++;
            }
        }
        else if(d<=a){
            ans = 1;
            // if(c!=1){
            //     ans++;
            // }

            if(d==a){
                ans++;
            }
        }
        else if(a>=c && b<=d ){
            ans = b-a;

            if(a != c){
                ans++;
            }

            if(b!=d){
                ans++;
            }
        }
        else if(c>=a && d<=b){
            ans = d-c;

            if(c != a){
                ans++;
            }

            if(d != b){
                ans++;
            }
        }
        else if(a>=c && a<=d){
            ans = d-a;
            if(a != c){
                ans++;
            }
            
            if(d != b){
                ans++;
            }
        }
        else if(c>=a && c<=b){
            ans = b-c;
            if(c != a){
                ans++;
            }
            
            if(b != d){
                ans++;
            }
        }
        else if(b>=c && b<=d){
            ans = b-c;

            if(c != a){
                ans++;
            }

            if(b != d){
                ans++;
            }
        }
        else if(d>=a && d<=b){
            ans = d-a;

            if(a != c){
                ans++;
            }

            if(d != b){
                ans++;
            }
        }

        cout<<ans<<endl;
    }


    return 0;
}