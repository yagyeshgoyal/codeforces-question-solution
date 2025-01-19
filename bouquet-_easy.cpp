#include<iostream>
#include<map>
#include<set>
#include<vector>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--){
        long long int n,m;
        cin>>n>>m;

        map<int,int>mpyogi;
        set<int>styogi;

        for(int i=0; i<n; i++){
            int a;
            cin>>a;

            mpyogi[a]++;
            styogi.insert(a);
        }

        set<int>s;
        auto it = styogi.begin();
        long long int ans = 0;

        while(it != styogi.end()){

            if(s.size() == 0){
                s.insert(*(it));
                it++;
                // cout<<0<<endl;
            }
            else if(s.size() == 2){
                s.erase(*(s.begin()));

                if(*(s.begin())+1 == *(it)){
                    s.insert(*(it));
                    it++;
                }
                // cout<<2<<enadl;
            }
            else{
                // cout<<1<<endl;
                if(*(s.begin())+1 == *(it) ){
                    s.insert(*(it));
                    it++;
                }
                else{
                    s.erase(*(s.begin()));
                    s.insert(*(it));
                    it++;
                }
            }

            auto p = s.begin();
            long long int sum = 0;
            while(p!=s.end()){
                // sum = sum + 1ll*(*(p))*mpyogi[*(p)];
                int kk = 0;
                while(kk<mpyogi[*(p)] && (*(p))<=m){
                    if(sum  + (*(p))<=m){
                        sum = sum + (*(p));
                        kk++;
                    }
                    else{
                        if(mpyogi[*(s.begin())]>0){
                            sum = sum - (*(s.begin()));
                            mpyogi[*(s.begin())]--;
                        }
                        else{
                            sum = sum - (*(p));
                        }
                        
                    }
                    ans = max(ans,sum);

                    // kk++;
                }
                p++;
            }

            // ans = max(ans,sum);


        }

        if(ans>=m){
            cout<<m<<endl;
        }
        else{
            cout<<ans<<endl;
        }
    }


    return 0;
}