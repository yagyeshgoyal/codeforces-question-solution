#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        int num=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]==1)
            num++;
        }
        if(num<=1){
            cout<<n<<endl;
        }
        else if(num%2==0){
            cout<<(n-num)+num/2<<endl;
        }
        else {
            cout<<(n-num)+num/2+1<<endl;
        }
    }


    return 0;
}