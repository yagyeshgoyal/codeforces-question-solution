#include<iostream>
using namespace std;

int main()
{

    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int m=15;
        int arr[n];
        int sum2=0,sum3=0,sum5=0,sum4=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]%k==0){
                m=0;
            }
            else {
                m=min<int>(m,(k-(arr[i]%k)));
            }
            if(arr[i]%4==0){
                sum4++;
                sum2++;
            }
            else if(arr[i]%3==0 && arr[i]%2==0){
                sum3++;
                sum2++;
            }
            else if(arr[i]%3==0){
                sum3++;
            }
            else if(arr[i]%2==0 && arr[i]%5==0){
                sum2++;
                sum5++;
            }
            else if(arr[i]%2==0){
                sum2++;
            }
            else if(arr[i]%5==0)
            sum5++;
        }
        
        
        if(k==4){
            
            if(sum2>1 || sum4>=1){
                cout<<min<int>(0,m)<<endl;
            }
            else if(sum2==1){
                cout<<min<int>(1,m)<<endl;
            }
            else if(n>1){
                cout<<min<int>(2,m)<<endl;
            }
            else 
            cout<<m<<endl;
        }
        else 
        cout<<m<<endl;
    }

    return 0;
}