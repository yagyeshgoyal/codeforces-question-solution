#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;

        int i;
        for( i=0; i<=n/2; i++){
            int a = i;
            int b = n-i;

            int sum = ((a*(a-1))/2) + ((b*(b-1))/2);
            if(sum == k){
                break;
            }
        }

        if(i != (n/2)+1){
            cout<<"YES"<<endl;

            for(int j=0; j<i; j++){
                cout<<1<<" ";
            }

            for(int j=i; j<n; j++){
                cout<<-1<<" ";
            }
        }
        else{
            cout<<"NO";
        }
        

        cout<<endl;
    }


    return 0;
}