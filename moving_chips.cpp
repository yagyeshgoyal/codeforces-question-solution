#include<iostream>
using namespace std;

int main()
{

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }

        int one = 0;
        int ans = 0;
        int temp = 0;
        for(int i=0; i<n; i++){
            if(one == 0){
                if(arr[i] == 1){
                    one = 1;
                }
            }
            else {
                if(arr[i] == 1){
                    ans = ans+temp;
                    temp = 0;
                }
                else{
                    temp++;
                }
            }
        }

        cout<<ans<<endl;
    }

    return 0;
}