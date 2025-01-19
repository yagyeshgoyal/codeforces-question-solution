#include<iostream>
#include<set>
// #include<bits/stdc++.h>
#include<algorithm>

using namespace std;

int main()
{

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        long long int  arr[n];
        bool even = false;
        bool odd = false;
        for(int i=0; i<n; i++){
            cin>>arr[i];

            if(arr[i]%2 == 0){
                even = true;
            }
            else{
                odd = true;
            }
        }

        if( even && odd){
            cout<<2<<endl;
        }
        else{
            int count = 0;
            // long long int ans = 2;
            
            while(count <= 57){
                int temp = arr[0]&1;
                arr[0] = arr[0]/2;

                bool flage = false;

                for(int i=1; i<n; i++){
                    if(temp != (arr[i]&1)){
                        flage = true;
                        // cout<<count<<endl;
                        // cout<<temp<<" "<<arr[i]<<" "<<(arr[i]&1)<<endl;
                        break;
                    }
                    arr[i] = arr[i]/2;
                }
                // cout<<"c"<<endl;
                count++;

                if(flage){
                    break;
                }

                
            }

            // cout<<count<<endl;

            cout<<(1ll<<count)<<endl;
            // cout<<(1ll<<57)<<endl;
        }



        
    }

    return 0;
}