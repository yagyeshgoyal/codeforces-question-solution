#include<iostream>
#include<limits.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int arr1[n];
        for(int i=0; i<n; i++){
            cin>>arr1[i];
        }

        int arr2[n+1];
        for(int i=0; i<n+1; i++){
            cin>>arr2[i];
        }

        

        int flage = false;
        long long int count = 0;
        for(int i=0; i<n; i++){
            if(arr2[i]<=arr1[i] && arr2[n]<=arr1[i] && arr2[n]>=arr2[i]){
                flage = true;
                count = count + abs(arr1[i]-arr2[i]);
            }
            else if(arr2[i]>=arr1[i] && arr2[n]>=arr1[i] && arr2[n]<=arr2[i]){
                flage = true;
                count = count + abs(arr1[i]-arr2[i]);
            }
            else{
                count = count + abs(arr1[i]-arr2[i]);
            }
        }

        if(flage){
            count = count + 1;
            cout<<count<<endl;
        }
        else{
            long long int mini = INT_MAX;
            int index = -1;

            for(int i=0; i<n; i++){
                if((arr1[i]>arr2[n] && arr2[i]>arr2[n]) || (arr1[i]<arr2[n] && arr2[i]<arr2[n])){
                    long long int d = min(abs(arr1[i]-arr2[n]), abs(arr2[i]-arr2[n]));
                    if(d<mini){
                        mini = d;
                    }
                }
            }
            count = count + mini +1;
            cout<<count<<endl;
        }


    }


    return 0;
}