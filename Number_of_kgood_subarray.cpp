#include<iostream>
#include<bits/stdc++.h>
#include<set>
#include<vector>
#define mod 1000000007
using namespace std;

void decToBinary(long long int n,string &s)
{
    // Size of an integer is assumed to be 32 bits
    while (n!=0) {
        int p = n%2;

        if(p==0){
            s = '0'+s;
        }
        else{
            s = '1'+s;
        }

        n=n/2;
    }
}

int countOne(string &st, int s, int e){
    if(s>e){
        return 0;
    }
    if(s==e){
        if(st[s]=='1'){
            return 1;
        }
        else{
            return 0;
        }
    }

    int mid = s+ (e-s)/2;

    int left = countOne(st,s,mid);
    int right = countOne(st,mid+1,e);

    return left+right;
}

vector<vector<long long int>> findans(long long int s , long long int b, int k){
    if(s==b){
        // cout<<s<<endl;
        string ntob = "";
            
        decToBinary(s,ntob);

        int p = countOne(ntob,0,ntob.length()-1);

        if(p<=k){
            // cout<<"m"<<endl;
            return {{s,s}};
        }
        else{
            return {};
        }
    }

    if(s>b){
        // cout<<s<<endl;
        return {};
    }


    long long int mid = s + (b-s)/2;

        // cout<<s<<" "<<b<<" " << mid<<endl;

    vector<vector<long long int >>left = findans(s,mid,k);
    // cout<<"mid"<<" "<<mid<<endl;
    vector<vector<long long int >>right = findans(mid+1,b,k);
    // cout<<"s"<<endl;

    if(left.size() == 0){
        return right;
    }
    else if(right.size() == 0){
        return left;
    }
    else{
        // cout<<s<<" sjidjf "<<b<<endl;
        if(left[left.size()-1][1]+1 == right[0][0]){
            left[left.size()-1][1] = right[0][1];

            for(int i=1; i<right.size(); i++){
                left.push_back(right[i]);
            }
        }
        else{
            for(auto i : right){
                left.push_back(i);
            }
        }

        return left;
    }
}

int main()
{
    int t;
    cin>>t;

    while(t--){
        long long int n;
        cin>>n;

        int k;
        cin>>k;

        
        // long long int count = ;
        long long int ans = 0;
        // set<string>num;
        long long int  num = 0;
        for(int i=0; i<k; i++){
            num = num + powl(2,i);
        }
        // cout<<num<<endl;
        // cout<<"p"<<endl;

        // for(long long int i=1; i<n; i++){
            
        //     string ntob = "";
            
        //     decToBinary(i,ntob);
        //     num.insert(ntob);

        //     int p = countOne(ntob,0,ntob.length()-1);
        //     // cout<<ntob<<" "<<p<<endl;

        //     if(p<=k){
        //         // cout<<ntob<<endl;
        //         count = (count + 1)%mod;
        //     }
        //     else{
        //         ans = (ans + ((1ll*count*((count+1)%mod))%mod)/2)%mod;
        //         count = 0;
        //     }
        // }


        long long int p = min(num,n-1);
        // ans = (1ll*(p%mod)*((p+1)%mod))%mod;
        // ans = ans/2;

        vector<vector<long long int>>v  = findans(min(num+1,n),n-1,k);

        if(v.size()==0){
            v.push_back({0,p});
        }
        else if(v[0][0] == p+1){
            v[0][0] = 0;
        }
        else{
            ans = (1ll*(p%mod)*((p+1)%mod))%mod;
        ans = ans/2;
        }

        for(auto i : v){
            if(i[0] == i[1]){
                // long long int count = i[1]-i[0];
                // count = count % mod;
                // ans = (ans + ((1ll*count*((count+1)%mod))%mod)/2)%mod;
                ans = (ans + 1)%mod;
            }
            else{
                long long int count = i[1]-i[0] + 1;
                count = count % mod;
                ans = (ans + ((1ll*count*((count+1)%mod))%mod)/2)%mod;
            }
        }

        
        cout<<ans<<endl;

        // for(auto i : num){
        //     cout<<i<<" ";
        // }
        // cout<<endl;
        
    }


    return 0;
}