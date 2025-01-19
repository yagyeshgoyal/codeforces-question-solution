#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--){
        // cin.ignore();
        int n,m,k;
        cin>>n>>m>>k;

        // cin.ignore();
        int arr[n][m];
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin>>arr[i][j];
            }
        }
        cin.ignore();
        // string arr1[n];
        vector<string>arr1;
        for(int i=0; i<n; i++){
            // cin.ignore();
            string a;
            cin>>a;
            // arr1[i] = a;
            arr1.push_back(a);
        }

        long long int sum = 0;
        
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(arr1[i][j] == '1'){
                    sum = sum + arr[i][j];
                }
                else{
                    sum = sum - arr[i][j];
                }
            }
        }

        long long int prefex[n][m+1] = {0};
        long long int s = -1;

        if(sum == 0){
            cout<<"YES"<<endl;
            goto end;
        }
        sum = abs(sum);

        

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(arr1[i][j] == '1'){
                    prefex[i][j+1] = prefex[i][j] + 1;
                }
                else{
                    prefex[i][j+1] = prefex[i][j] - 1; 
                }
            }
        }

        // for(int i=0; i<n; i++){
        //     for(int j=0; j<m+1; j++){
        //         cout<<prefex[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }


        

        for(int i=0; i+k-1<n; i++){

            for(int j=0; j+k<m+1; j++){
                long long int count = 0;
                for(int z = i; z<i+k; z++){
                    count = count+prefex[z][j+k]-prefex[z][j];
                }

                // cout<<count<<endl;
                if(s == -1 && count != 0){
                    s = abs(count);
                    // cout<<count<<endl;
                }
                if(count != 0)
                s = __gcd<long long int>(abs(count),s);

                // cout<<s<<endl;

            }
        }

        // cout<<s<<endl;
        if(sum % s == 0 && s != -1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

        

        end:;
    }


    return 0;
}