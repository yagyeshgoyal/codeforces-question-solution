#include<iostream>
#include<set>
using namespace std;

int main()
{

    int t;
    cin>>t;

    while(t--){
        long long int n,c;
        cin>>n>>c;

        long long int arr[n] ;
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }

        long long int  combination = ((c+1)*(c+1)*1ll) - (c*(c+1)*1ll)/2;

        // cout<<combination<<endl;

        set<pair<long long int,long long int>>s;

        long long int  count = 0;

        // cout<<c<<endl;
        long long int even = 0;
        long long int odd = 0;

        for(int i=0; i<n; i++){
            // cout<<"loop"<<endl;
            // for(long long int j=0; j<=arr[i]/2 ; j++){
            //     cout<<"anotherloop"<<endl;
            //     s.insert({j,arr[i]-j});
            //     // count++;
            //     // s.insert({arr[i]-j,j});
            // }

            // for(long long int j=arr[i] + 1; j<=c ; j++){
            //     // cout<<"noloop"<<endl;
            //     // cout<<j<<endl;
            //     // s.insert({j,j-arr[i]});
            //     s.insert({j-arr[i],j});
            //     // count++;
            // }
            if(arr[i]%2 == 0){
                even++;
            }
            else{
                odd++;
            }
            count = count + (arr[i]/2)+1 + (c-arr[i])+1 ;
            // cout<<count<<" ";
        }
        // cout<<"p"<<endl;
        // cout<<s.size()<<endl;
        // cout<<count<<endl;
        // cout<<combination - s.size()<<endl;

        count  = count - (even*(even+1)*1ll)/2 - (odd*(odd+1)*1ll)/2;
        cout<<combination - count<<endl;

    }

    return 0;
}