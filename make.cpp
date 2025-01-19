#include<iostream>
using namespace std;

void check(){
     int n;
        cin>>n;
        int arr[n];
        int k=-1;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]==0)
            k=i;

        }
        // if(n%2==0){
        //     cout<<2<<endl<<1<<" "<<n<<endl<<1<<" "<<n<<endl;
        //     return ;
        // }
        // else{
        //     if(k==0){
        //        cout<<2<<endl<<2<<" "<<n<<endl<<2<<" "<<n<<endl;
        //     }
        //     else if(k==n-1){
        //         cout<<2<<endl<<1<<" "<<n-1<<endl<<1<<" "<<n-1<<endl;
        //     }
        //     else{
        //         cout<<4<<endl<<1<<" "<<k-1<<endl<<k+1<<" "<<n<<endl;
        //         cout<<1<<" "<<k-1<<endl<<k+1<<" "<<n<<endl;
        //     }
        // }
        if(n%2 == 0){
            cout<<2<<endl;
            cout<<1<<" "<<n<<endl;
            cout<<1<<" "<<n<<endl;
        }
        else{
            cout<<4<<endl;
            cout<<1<<" "<<n<<endl;
            cout<<1<<" "<<n-1<<endl;
            cout<<n-1<<" "<<n<<endl;
            cout<<n-1<<" "<<n<<endl;
        }
}

int main()
{
    int t;
    cin>>t;
    while(t--){
       
        check();

    }


    return 0;
}