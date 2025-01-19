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
        int sum=0,multi=1;
        int plus = 0, minus=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            // sum=sum+arr[i];
            // multi=multi*arr[i];
            if(arr[i]>=0)
            plus++;
            else
            minus++;
        }

        // if(sum>=0 && multi==1)
        // cout<<0<<endl;

        // else if(sum>=0 && multi ==-1)
        // cout<<1<<endl;

        // else if(sum<0 && multi==1){
        //     if(n==2){
        //         cout<<2<<endl;
        //     }
        //     else if(abs(sum)%2 == 0)
        //     cout<<(abs(sum)/2) +1<<endl;
        //     else 
        //     cout<< (abs(sum)/2) <<endl;
        // }
        
        // else if(sum<0 && multi == -1){
        //     if(plus==0)
        //     cout<<n<<endl;
        //     else if(abs(sum)%2 == 0)
        //     cout<<(abs(sum) /2)<<endl;
        //     else 
        //     cout<< (abs(sum) /2) + 1<<endl; 
        // }

        int ans = 0;

        if(minus%2 == 1){
            minus--;
            plus++;
            ans++;
        }

        if(minus>plus){
            int diff = minus - plus;

            if(diff%2 == 1){
                int k = (diff+1)/2;
                if(k%2 == 1){
                    k++;
                }
                ans = ans + k;
            }
            else if(diff%2 == 0){
                if((diff/2)%2 ==1){
                    int k = diff/2;
                    if(k%2 == 1){
                        k++;
                    }

                    ans = ans + k;
                }
                else{
                    ans = ans + ((diff/2));
                }
            }

            cout<<ans<<endl;
        }
        else{
            cout<<ans<<endl;
        }
    }


    return 0;
}