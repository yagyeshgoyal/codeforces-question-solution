#include<iostream>
#include<map>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        map<int,int>yogi;

        int ans = 0;

        for(int i=0 ; i<n; i++){
            int k;
            cin>>k;
            yogi[k]++;

            if(yogi[k] == 2){
                ans++;
            }
        }

        cout<<ans<<endl;
    }


    return 0;
}