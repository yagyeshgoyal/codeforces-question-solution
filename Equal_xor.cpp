#include<iostream>
#include<vector>
using namespace std;

int main()
{
    ios :: sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin>>t;

    while(t--){
        int n,k;
        cin>>n>>k;

        vector<int>arr;

        for(int i=0; i<2*n; i++){
            int a;
            cin>>a;

            arr.push_back(a);
        }

        vector<int>count(n+1,0);

        for(int i=0; i<n; i++){
            count[arr[i]]++;
        }

        vector<int>ans1;
        vector<int>ans2;

        for(int i=1; i<=n; i++){
            if(count[i] == 1){
                ans1.push_back(i);
                ans2.push_back(i);
            }
        }
        if(ans1.size()%2 == 1){
            ans1.pop_back();
            ans2.pop_back();
        }
        for(int i=1; i<=n; i++){
            if(count[i] == 2){
                ans1.push_back(i);
                ans1.push_back(i);
            }
            else if(count[i] == 0){
                ans2.push_back(i);
                ans2.push_back(i);
            }
        }

        for(int i=0; i<2*k; i++){
            cout<<ans1[i]<<" ";
        }
        cout<<endl;

        for(int i=0; i<2*k; i++){
            cout<<ans2[i]<<" ";
        }
        cout<<endl;
    }


    return 0;
}