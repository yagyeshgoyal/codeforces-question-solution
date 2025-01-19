#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--){
        int n,k;
        cin>>n>>k;

        vector<int>ans;
        ans.push_back(n);
        n--;
        while(n--){
            ans.push_back(n+1);
            ans.push_back(n+1);
        }

        int i;
        for( i=0; i<ans.size(); i++){
            if(k<=0){
                break;
            }
            else{
                // cout<<i<<" "<<k<<" "<<ans[i]<<endl;
                k = k- ans[i];
            }
            // cout<<k<<endl;
        }

        cout<<i<<endl;
    }


    return 0;
}