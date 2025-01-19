#include<iostream>
#include<set>
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

        set<long long int>s;

        long long int sum = 0;
        int count = 0;
        for(int i=0; i<n;i++){
            sum = sum + arr[i];
            s.insert(arr[i]);

            if(sum%2 == 0){
                if(s.find(sum/2) != s.end()){
                    count++;
                    // cout<<i<<" "<<sum<<endl;;
                }
            }
        }

        cout<<count<<endl;
    }


    return 0;
}