#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        cin.ignore();
        string s;
        cin>>s;
        int arr[26]={0};
        for(int i=0;i<n;i++){
            arr[s[i]-'a']++;
        }
        int sum1=0;
        int sum_odd=0;
        int sum_even=0;
        for(int i=0;i<26;i++){
            if(arr[i]==1){
                sum1++;
            }
            else if(arr[i]%2==1){
                sum_odd++;
            }
            else 
            sum_even++;
        }

        while(k>0){
            if(sum1>1){
                int p=k-(sum1-1);
                if(p<=0)
                sum1=sum1-k;
                else 
                sum1 = 1;
                k=p;
            }
            else if(sum_odd>1){
                int p=k-(sum_odd-1);
                if(p<=0){
                    sum_odd=sum_odd-k;
                    sum_even+=k;
                }
                else{
                    sum_odd=1;
                    sum_even+=(k-p);
                }
                k=p;
            }
            else if(sum1==1 && sum_odd==1){
                k--;
                sum1--;
            }
            else if(sum1==1){
                k--;
                sum1--;
            }
            else if(sum_odd==1){
                k--;
                sum_odd--;
                sum_even++;
            }
            else 
            break;
        }
        if(k<=0){
            if((sum1==1 && sum_odd>=1) || (sum1>=1 && sum_odd==1) || (sum1>1 && sum_odd==0) || (sum1==0 && sum_odd>1) || (sum1>=1 && sum_odd>=1)){
                cout<<"NO"<<endl;
            }
            else 
            cout<<"YES"<<endl;
        }
        else {
            // if(k%2==0){
            //     cout<<"YES"<<endl;
            // }
            // else {
            //     cout<<"NO"<<endl;
            // }
            cout<<"YES"<<endl;
        }
    }


    return 0;
}