#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool isdivisival(int i, string &s, long long int sum,unordered_map<string, bool>&mp){
    if(i==s.length()){
        if(sum%9 == 0){
            return true;
        }

        return false;
    }

    string temp = to_string(i) +"&"+ to_string(sum);

    if(sum%9 == 0){
        return mp[temp] = true;
    }   


    if(mp.count(temp)){
        return mp[temp];
    }


    if(s[i] == '2'){
        bool ans = isdivisival(i+1,s, sum+2,mp);

        if(ans){
            return  mp[temp] = ans;
        }

        ans = isdivisival(i+1,s,sum,mp);

        return mp[temp] = ans;
    }
    else if(s[i] == '3'){
        bool ans = isdivisival(i+1,s, sum+6,mp);

        if(ans){
            return mp[temp] = ans;
        }

        ans = isdivisival(i+1,s,sum,mp);
        return mp[temp] = ans;
    }
    else{
        bool ans = isdivisival(i+1,s , sum,mp);

        return mp[temp] = ans;
    }
}

int main()
{
    int t;
    cin>>t;

    while(t--){
        string s;

        cin>>s;

        long long int sum = 0;
        int count2  = 0;
        int count3 = 0;

        for(int i=0; i<s.length(); i++){
            sum += (s[i]-'0');

            if(s[i] == '2'){count2++;}

            if(s[i] == '3'){
                count3++;
            }
        }

        if(sum%9== 0){
            cout<<"YES"<<endl;
        }
        // else{
        //     unordered_map<string , bool>mp;
        //     bool ans = isdivisival(0,s,sum,mp);

        //     if(ans){
        //         cout<<"YES"<<endl;
        //     }
        //     else{
        //         cout<<"NO"<<endl;
        //     }
        // }
        else{
            map<int , vector<pair<int,int>>>mp;
            mp[1].push_back({1,1});
            mp[1].push_back({4,0});
            mp[2].push_back({8,0});
            mp[2].push_back({2,2});
            mp[2].push_back({5,1});
            mp[3].push_back({0,1});
            mp[3].push_back({3,0});
            mp[4].push_back({7,0});
            mp[4].push_back({1,2});
            mp[4].push_back({4,1});
            mp[5].push_back({2,0});
            mp[6].push_back({0,2});
            mp[6].push_back({3,1});
            mp[6].push_back({6,0});
            mp[7].push_back({1,0});
            mp[8].push_back({5,0});
            mp[8].push_back({2,1});

            int rem = sum%9;

            bool flage = false;

            for(auto i : mp[rem]){
                if(i.first<=count2 && i.second <= count3){
                    flage = true;
                    break;
                }
            }

            if(flage){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }


    return 0;
}