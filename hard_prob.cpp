#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--){
        int m,a,b,c;
        cin>>m>>a>>b>>c;


        int ans1 = 0;
        int temp = m;

        ans1 = min(temp,a);

        if(ans1 == a){
            temp = temp-a;

            if(temp >= c){
                ans1 = ans1 + c;
                c = 0;
            }
            else{
                ans1 = ans1 + temp;
                c = c-temp;
            }
        }

        int ans2 = 0;
        temp = m;

        ans2 = min(temp,b);

        if(ans2 == b){
            temp = temp-b;

            if(temp >= c){
                ans2 = ans2 + c;
                c = 0;
            }
            else{
                ans2 = ans2 + temp;
                c = c-temp;
            }
        }

        cout<<ans1+ans2<<endl;

    }


    return 0;
}