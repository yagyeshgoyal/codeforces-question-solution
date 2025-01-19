#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        char arr[n];

        int count =0;
        int sum=0;
        cin>>arr[0];
        for(int i=1;i<n;i++){
            cin>>arr[i];
        }

        bool flage = false;

        for(int i=0;i<n;i++){
            if(arr[i]=='#'){
                if(flage){
                    sum = sum+0;
                    count = 0;
                }
                else if(count>=3){
                    sum=sum+2;
                    count=0;
                    flage = true;
                }
                else if(count == 2){
                    sum = sum + 2;
                    count = 0;
                }
                else if(count==1){
                    sum=sum+1;
                    count=0;
                }
                else{
                    sum=sum+0;
                    count=0;
                }
            }
            else{
                count++;
            }
            // cout<<sum<<" ";
        }

        if(flage){
            sum = sum + 0;
            count = 0;
        }
        else if(count>=3){
            sum=sum+2;
            count=0;
            flage = true;
        }
        else if(count == 2){
            sum = sum + 2;
            count = 0;
        }
        else if(count<2 && count>0){
            sum=sum+1;
            count=0;
        }
        
        if(flage){
            cout<<2<<endl;
        }
        else{
        cout<<sum<<endl;}

        
    }


    return 0;
}