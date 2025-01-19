#include<iostream>
using namespace std;

int main()
{
    ios :: sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin>>t;

    while(t--){
        int n;
        cin >>n;
        
        int arr[n];
        for(int i=0 ; i<n; i++){
            cin>>arr[i];
        }

        bool ans = true;

        int prev = arr[n-1];

        for(int i= n-2; i>=0; i--){
            if(arr[i] <= prev){
                prev = arr[i];
            }
            else{
                int a = arr[i]/10;
                int b = arr[i]%10;

                if(b>prev){
                    ans = false;
                    break;
                }
                else if(a>b){
                    ans = false;
                    break;
                }
                else{
                    prev = a;
                }

            }
        }


        if(ans){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

        

        

    }


    return 0;
}