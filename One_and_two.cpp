#include<iostream>
using namespace std;

void multi(int arr[],int a, int n){
    int k=1;
    for(int i=0;i<n;i++){
        k=k*arr[i];
        a=a/arr[i];
        if(k==a){
            cout<<i+1<<endl;
            return ;
        }
    }
    cout<<-1<<endl;
    return ;

}

void check(int arr[], int n, int count){
    if(count%2==1){
        cout<<-1<<endl;
        return ;
    }

    if(count==0){
        cout<<1<<endl;
        return;
    }
    int k=0;
    for(int i=0;i<n;i++){
        if(arr[i]==2){
            k++;
            if(k==count/2){
                cout<<i+1<<endl;
                return;
            }
        }
    }
}

int main()
{

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        int a=1;
        int count=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            // a*=arr[i];
            if(arr[i]==2)
            count++;
        }
        // multi(arr,a,n);
        check(arr,n,count);
    }

    return 0;
}