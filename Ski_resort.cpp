#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        long long int n,k,q;
        cin>>n>>k>>q;

        vector<long long int>length;
        long long int arr[n];
        long long int count =0;
        for(int i=0; i<n; i++){
            cin>>arr[i];

            if(arr[i]<=q){
                count++;
            }
            else{
                if(count>=k){
                    length.push_back(count);
                    count=0;
                }
                else{
                    count = 0;
                }
            }
        }
        if(count>=k){
            length.push_back(count);
            count=0;
        }
        else{
            count = 0;
        }

        long long int sum = 0;

        for(int i=0; i<length.size(); i++){
            long long int p = length[i]-k +1;
            sum = sum + ((p*(p+1)*1ll)/2);
        }

        cout<<sum<<endl;
    }


    return 0;
}