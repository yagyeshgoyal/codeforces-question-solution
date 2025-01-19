#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--){
        int n,m,k;
        cin>>n>>m>>k;

        string s;
        cin>>s;

        int count0 = 0;
        int count1 = 0;

        for(int i=0; i<m; i++){
            if(s[i]-'0'== 0){
                count0++;
            }
            else{
                count1++;
            }
        }

        int ans =  0;

        if(count0 == m){
            ans++;
            for(int i=m-1; i<min(m+k-1,n); i++){
                s[i] = '1';
            }
            count0--;
            count1++;
        }

        for(int i=m; i<n;i++){
            if(s[i-m] == '0'){
                count0--;
            }
            else{
                count1--;
            }

            if(s[i] == '0'){
                count0++;
            }
            else{
                count1++;
            }

            if(count0 == m){
                ans++;
                for(int j=i; j<min(i+k,n); j++){
                    s[j] = '1';
                }
                count0--;
                count1++;
            }
        }

        cout<<ans<<endl;
    }


    return 0;
}