#include<iostream>
using namespace std;

int find(long int  arr[], unsigned long long &k,  long long int &n, unsigned long long mid){

    unsigned long long sum = 0;
    for(int i=0; i<n; i++){

        sum = sum + (arr[i] + 2*mid);
        if(sum>k){
            return -1;
        }

        sum = sum - (arr[i]+2*mid);

        sum =sum +  (arr[i] + 2*mid)*(arr[i] + 2*mid)*1ll;
            if(sum > k){
                return -1;
            }
    }

    if(sum == k){
        return 1;
    }
    else{
        return 0;
    }
}

void findWidth(long int arr[],unsigned long long &k, long long int &n){

    unsigned long long s = 0;
    unsigned long long e = k;

    unsigned long long mid = s + (e-s)/2;

    while(s<=e){
        int ans = find(arr,k,n,mid);

        if(ans == 1){
            cout<<mid<<endl;
            return ;
        }
        else if(ans == -1 ){
            e = mid-1;
        }
        else if(ans == 0){
            s = mid+1;
        }

        mid = s + (e-s)/2;
    }

    // for(int i=0; i<=k/2 ; i++){
    //     long long int num = n*2*i*2*i*1ll + 2*2*i*sum*1ll;

    //     if(num == k){
    //         return i;
    //     }
    // }
    cout<<s<<endl;
    return ;
    
}

int main()
{
    int t;
    cin>>t;
    
    while(t--){
        long long int n;
        unsigned long long k;
        cin>>n>>k;
       

        long int  arr[n];

        for(long int i=0; i<n; i++){
            cin>>arr[i];
        }


        findWidth(arr,k,n);

       
    }


    return 0;
}