#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--){
        int a,b,c;

        cin>>a>>b>>c;
        
        long long int ans = a;

        ans = ans + (b/3);

        b = b - ((b/3)*3);

        if(b == 1 && c>=2){
            ans = ans + 1;
            c = c-2;
            ans = ans + (c/3);

            if(c%3 != 0){
                ans++;
            }
            cout<<ans<<endl;
        }
        else if(b == 2 && c>=1){
            ans = ans + 1;
            c = c-1;
            ans = ans + (c/3);

            if(c%3 != 0){
                ans++;
            }
            cout<<ans<<endl;
        }
        else if(b == 0 ){
           
            ans = ans + (c/3);

            if(c%3 != 0){
                ans++;
            }
            cout<<ans<<endl;
        }
        else{
            cout<<-1<<endl;
        }

        

    }


    return 0;
}