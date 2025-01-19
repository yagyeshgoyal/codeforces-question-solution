#include<iostream>
#include<vector>
#include<set>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--){
        int n,m;
        cin>>n>>m;

        vector<set<int>>v;
        for(int i=0; i<n; i++){
            int b;
            cin>>b;
            set<int>st;
            for(int j=0; j<b;j++){
                int a;
                cin>>a;
                st.insert(a);
            }
            v.push_back(st);
        }

        int maxi = 0;
        for(int i=0; i<n; i++){
            int count = 0;
            int k = 0;
            // cout<<i<<endl;
            for(auto j : v[i]){
                if(k==j){
                    k++;
                }
                else{
                    count++;
                    if(count == 2){
                        maxi = max(maxi,k);
                        // cout<<k<<endl;
                        break;
                    }
                    if(j==k+1){
                        k= k + 2;
                    }
                    else{
                        count++;
                        k++;
                    }
                    if(count == 2){
                        maxi = max(maxi,k);
                        // cout<<k<<endl;
                        break;
                    }
                }
            }
            if(count == 0){
                maxi = max(maxi,k+1);
            }
            if(count == 1){
                maxi = max(maxi,k);
            }
            // cout<<maxi<<endl;
        }

        long long int ans = 0;
        if(m<=maxi){
            ans = 1ll*(m+1)*maxi;
        }
        else{
            ans = (1ll*m*(m+1))/2;
            ans = ans - (1ll*maxi*(maxi-1))/2;
            ans = ans + 1ll*maxi*maxi;
        }
        // cout<<maxi<<endl;
        cout<<ans<<endl;

    }


    return 0;
}