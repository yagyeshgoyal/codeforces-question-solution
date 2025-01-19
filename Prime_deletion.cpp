#include<iostream>
#include<vector>
using namespace std;

void isprime(long long int num){
    
    // int arr[num+1]={true} ;
    vector<bool>arr(num+1,true);
    long long int count=0;
    arr[0]=arr[1]=false;
    for(long long int i=2;i<num;i++){
        
        if(arr[i]){
            
            count++;
        }
        for(long long int j=2*i;j<num;j=j+i){
            
            arr[j]=false;
        }
    }
    
        
    cout<<count<<endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int num;
        cin>>num;
        isprime(num);
    }


    return 0;
}