#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t; 
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long int arr[n];
        string arr2[n];
        
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }

        for(int i=0; i<n; i++){
            while(arr[i]>0){
                int k = arr[i]%2;

                if(k == 0)
                arr2[i].push_back('0');
                else{
                    arr2[i].push_back('1');
                }
                arr[i] = arr[i]/2;
            }

            reverse(arr2[i].begin(), arr2[i].end());
            // cout<<arr2[i]<<" ";
        }
        // cout<<endl;

        long long int ans = 0;
        string prev_num = arr2[0];
        int prev_zero = 0;
        int curr_zero = 0;
        int p = arr2[0].length();

        for(int i=1; i<n; i++){
            // cout<<"k"<<endl;
            int q = arr2[i].length();

            if(q<p + prev_zero){

                int a = p + prev_zero -q;

                int count = abs(p-q);
                string temp = arr2[i];
                while(count--){
                    temp.push_back('0');
                }

                ans = ans + a;
                curr_zero = a;

                if(temp<prev_num) 
                // arr2[i].push_back('0'),
                curr_zero++,
                ans++;

                prev_num= arr2[i];
                prev_zero = curr_zero;
                
            }
            else if(q == p + prev_zero && arr2[i]<prev_num){
                ans++;
                // arr2[i].push_back('0');
                // curr_max = arr2[i];
                prev_num = arr2[i];
                prev_zero = 1;

            }
            else{
                prev_num = arr2[i];
                prev_zero = 0;
            }

            p = arr2[i].length();

        }

        std::cout<<ans<<endl;
    }

    return 0;
}