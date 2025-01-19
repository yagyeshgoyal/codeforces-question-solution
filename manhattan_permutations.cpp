#include<iostream>
#include<vector>
using namespace std;

bool findans(vector<int>&arr, int i, int j, long long int k){
    if(k==0){
        return true;
    }

    if(i>=j){
        return false;
    }

    if(arr[j]-arr[i]<=k){
       

        bool flage = findans(arr,i+1,j-1,k-(arr[j]-arr[i]));

        if(flage){
            swap(arr[i],arr[j]);
            return true;
        }

        // swap(arr[i],arr[j]);
    }
    else{
        bool flage = findans(arr,i,j-1,k);

        if(flage){
            return true;
        }

    }

    return false;
}

int main()
{
    int t;
    cin>>t;

    while(t--){
        long long int n,k;
        cin>>n>>k;

        if(k%2 == 1){
            cout<<"NO"<<endl;
            
        }
        else{
            k = k/2;
        
            vector<int>arr;
            for(int i=0; i<n; i++){
                arr.push_back(i+1);
            }

            bool flage = findans(arr,0,n-1,k);

            if(flage){
                cout<<"YES"<<endl;

                for(int i=0; i<n; i++){
                    cout<<arr[i]<<" ";
                }
                cout<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }

    
    }


    return 0;
}