#include<iostream>
#include<map>
#include<set>
#include<vector>
using namespace std;

int main(){

	int t;
	cin>>t;

	while(t--){

		string s;
		cin>>s;
		
		map<int,long long int>mp;
        set<int>st;
        vector<int>p(s.length());
		int temp =0;
		
		for(int i=0; i<s.length(); i++){
			if(s[i] == '('){
                 temp++;
                p[i]= temp;
            }
			else{
                 temp--;
                 p[i] = temp;
            }

			// mp[temp]++;
		}

        // for(int i=0; i<s.length(); i++){
        //     cout<<p[i]<<" ";
        // }
        // cout<<endl;
		
		long long int ans = 0;

        for(int i=0; i<s.length(); i++){
            st.insert(p[i]);
            mp[p[i]]++;
            int k = p[i]/2;
            if(p[i]&1 == 1) k++;
            // cout<<"m"<<endl;
            vector<int>deleted;
            for(auto j : st){
                if(j>0 && j<k){
                    // cout<<j<<endl;
                    ans = ans + (1ll*(mp[j]*(mp[j]-1)))/2;
                    mp[j] = 0;
                    // st.erase(j);
                    deleted.push_back(j);
                }
                else if(j>=k){
                    // cout<<j<<endl;
                    break;
                }

            }
                // cout<<"K"<<endl;
            for(auto j : deleted){
                st.erase(j);
            }
            deleted.clear();
            
            
        }
        // cout<<"p"<<endl;
		for(auto i : mp){
			if(i.first>0){ ans += (1ll*(i.second)*(i.second-1))/2;}
		}

		cout<<ans<<endl;
	}



return 0;
}