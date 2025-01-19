#include<iostream>
#include<vector>
#include<map>
#include<string.h>
#include<limits.h>
using namespace std;

int findans(int n, int m, int ind, vector<string>&arr, vector<string>&arr2, int ch , map<string, int>mp){
    
    if(ind>=n){
        return 0;
    }

    int ans = 0;

    for(int i=ind; i<n; i++){
        int temp = 0;
        int name = 0;

        size_t k = 0;
        while(k != string::npos){
            k = arr[i].find((string)arr2[ch%5],k);

            if(k != string::npos){
                temp++;
                if(arr2[ch%5] == "k"){
                    name++;
                }
                ch++;
                int ans2 = findans(n,m,i+1,arr,arr2,ch,mp);

                ans = max<int>(ans, name*5 + ans2 - mp[arr[i]]+temp);
                k++;
            }
            // else{
            //     k = m;
            // }
        }
    }

    return ans;
}

int main()
{
    int t;
    cin>>t;

    while(t--){
        int n, m;
        cin>>n>>m;

        vector<string>arr;
        vector<string>arr2;
        arr2.push_back("n");
        arr2.push_back("a");
        arr2.push_back("r");
        arr2.push_back("e");
        arr2.push_back("k");
        

        for(int i=0; i<n; i++){
            string sk;
            cin>>sk;

            arr.push_back(sk);
        }

        map<string,int>mp;

        for(int i=0; i<n; i++){
            int count = 0;
            for(int j=0; j<arr[i].length(); j++){
                if(arr[i][j] == 'n' || arr[i][j] == 'a' || arr[i][j] == 'r' || arr[i][j] == 'e' || arr[i][j] == 'k' ){
                    count++;
                }
            }

            mp[arr[i]] = count;
        }

        int ans = 0;
        int ch = 0;
        for(int i=0; i<n; i++){
            int temp = 0;
            int name = 0;
            size_t k = 0;
            while(k != string::npos){
                k = arr[i].find((string)arr2[ch%5],k);
                // cout<<k<<endl;
                if(k != string::npos){
                    temp++;
                    if(arr2[ch%5] == "k"){
                        name++;
                    }
                    ch++;
                    int ans2 = findans(n,m,i+1,arr,arr2,ch,mp);

                    ans = max<int>(ans, name*5 + ans2 - mp[arr[i]]+temp);
                    k++;
                }
                // else{
                //     k = m;
                // }
            }
            // cout<<ch<<endl;
            // cout<<name<<endl;
            cout<<ans<<endl;
        }

        cout<<ans<<endl;


    }


    return 0;
}