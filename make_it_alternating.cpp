#include<iostream>
#include<vector>
#include<map>
#define mod 998244353
using namespace std;

long long int factorial(long long int num, map<long long int , long long int>&fact){

 if(num == 0 ||  num == 1) return 1;
 
 if(fact.count(num)){return fact[num];}

 fact[num] = (1ll*num*factorial(num-1,fact))%mod;

 return fact[num];

}


int main(){

    int t;
    cin>>t;

    while(t--){

        string s;
        cin>>s;

        int n = s.length();

        vector<int>v;
        // int i=0;
        int count = 0;
        for( int i=1; i<n; i++){
            if(s[i-1] == '0' && s[i] == '0'){count++;}
            else if(s[i-1] == '0' && s[i] == '1'){ v.push_back(count); count=0;}
            else if(s[i-1] == '1' && s[i] == '1'){count++;}
            else if(s[i-1] == '1' && s[i] == '0'){ v.push_back(count); count = 0;}
        }

        v.push_back(count);

        long long int sum = 0;
        long long int seq = 1;

        map<long long int , long long int>fact;

        count = 0;

        for(auto i : v){
            sum = (sum+i);
                count = count + 1;

            if(i != 0){
                seq = (1ll*seq*(i+1))%mod;
            }

        }

        if(count != 0 ){
            seq = (1ll*seq*factorial(n-count, fact))%mod;
        }

        cout<<sum<<" "<<seq<<endl;

    }
return 0;
}