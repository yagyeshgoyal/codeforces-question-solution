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

        string s;
        cin>>s;

        
        // int even[26]  = {0};
        // int odd[26]  = {0};
        vector<int>even(26,0);
        vector<int>odd(26,0);
        for(int i=0; i<n; i++){
            if(i%2 == 1){
                odd[s[i]-'a']++;
            }
            else{
                even[s[i]-'a']++;
            }
        }

 
        if(n%2 == 0){
            int ans ;
            ans = (n/2) - *max_element(even.begin(), even.end());
            // cout<<ans<<endl;
            ans = ans+ (n/2) - *max_element(odd.begin(), odd.end());

            cout<<ans<<endl;
        }
        else{
            vector<int>evenToOdd(26,0);
            vector<int>oddToEven(26,0);

            int ans = INT_MAX;

            for(int i=n-1; i>=0; i--){
                int temp = 0;
                if((i)%2 == 1){
                    odd[s[i]-'a']--;


                    int p =0;
                    for(int i=0; i<26; i++){
                        p = max(p,even[i] + oddToEven[i]);
                    }
                    temp = max(temp,(n/2) - p);
                    temp = max(0,temp);
                    
                    p = 0;
                    for(int i=0; i<26; i++){
                        p = max(p,odd[i] + evenToOdd[i]);
                    }
                    temp = temp + (n/2 - p);
                    temp = max(0,temp);
                    ans = min(ans,temp+1);
                    oddToEven[s[i]-'a']++;
                    // cout<<temp+1<<endl;
                    
                }
                else{
                    even[s[i]-'a']--;
 
                    int p = 0;
                    for(int i=0; i<26; i++){
                        p = max(p,even[i] + oddToEven[i]);
                    }
                    temp = n/2 - p;

                    temp = max(temp,0);

                    p = 0;
                    for(int i=0; i<26; i++){
                        p = max(p,odd[i] + evenToOdd[i]);
                    }
                    temp = temp + (n/2 - p);
                    // cout<<temp+1<<endl;
                    temp = max(0,temp);
                    ans = min(ans,temp+1);
                    evenToOdd[s[i]-'a']++;
                }
            }

            cout<<ans<<endl;
        }
    }


    return 0;
}