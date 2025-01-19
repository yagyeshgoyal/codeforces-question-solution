#include<iostream>
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

            sum += arr[i];
        }

        if(sum%n != 0){
            cout<<"NO"<<endl;
        }
        else{
            long long int reqValue = sum/n;
            for(int i=0; i<n-2; i++){
                long long int k = reqValue - arr[i];

                if(k == 0){
                    continue;
                }
                else if(k>0){
                    arr[i] = reqValue;
                    arr[i+2] -= k;
                }
                else{
                    arr[i] = reqValue;
                    arr[i+2] += abs(k);
                }
            }

            bool flage = true;

            for(int i=1; i<n; i++){
                if(arr[i] != arr[i-1]){
                    flage = false;
                    break;
                }
            }

            if(flage){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }


    return 0;
}