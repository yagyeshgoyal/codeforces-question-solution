#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        if(n==1){
            cout<<-1<<endl;
        }
        else if(n==2) cout<<66<<endl;
        else if(n==3) cout<<-1<<endl;
        else{
            string ans = "";
            for(int i=0; i<n; i++){
                ans.push_back('3');
            }

            if(n%2 ==0){
                ans[n-1] = ans[n-2] = '6';
            }
            else{
                ans[n-1] = ans[n-2] = ans[n-4] = '6';
            }

            cout<<ans<<endl;
        }

    }


    return 0;
}