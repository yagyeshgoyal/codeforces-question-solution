#include<iostream>
#include<conio.h>
#include<cmath>
using namespace std;

int main()
{

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        long long int arr[n];
        long long int sum = 0;
        for(int i=0; i<n; i++){
            cin>>arr[i];
            sum= sum + arr[i];
        }

        long long int ans = sqrt(sum);

        if(ans*ans == sum){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}