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
        int n;
        cin>>n;
        map<long long int,set<long long int>>mps;
        map<long long int,set<long long int>>mps2;
        long long int original[n];
        for(int i=0; i<n; i++){
            cin>>original[i];
        }

        long long int found[n];
        for(int i=0; i<n; i++){
            cin>>found[i];
            if(found[i] != original[i])
            mps[found[i]].insert(i);
            else{
                mps2[found[i]].insert(i);
            }
        }
        vector<bool>visitoriginal(n,false);

        int m;
        cin>>m;

        long long int queries[m];
        for(int i=0; i<m; i++){
            cin>>queries[i];
        }

        vector<bool>visitquery(m,false);

        for(int i=m-1; i>=0; i--){
            bool flage = true;
            int p = -1;
            if(mps.count(queries[i]) && mps[queries[i]].size()>0){
                for(auto j : mps[queries[i]]){
                    if(visitoriginal[j]==false){
                        visitoriginal[j] = true;
                        visitquery[i] = true;
                        p=j;
                        flage = false;
                        break;
                    }
                }
                
            }

            if(flage == false && p != -1){
                mps[queries[i]].erase(p);
            }
            
            if(flage && mps2.count(queries[i])){
                for(auto j : mps2[queries[i]]){
                    if(visitoriginal[j] == false){
                        visitoriginal[j] = true;
                        visitquery[i] = true;
                        p=j;
                        flage = false;
                        break;
                    }
                }

                if(flage == false && p != -1){
                    mps2[queries[i]].erase(p);
                }
            }

            
        }


        if(visitquery[m-1] == false){
            
            cout<<"NO"<<endl;
            goto leave;
        }


        for(int i=0; i<n; i++){
            if(visitoriginal[i] == false && original[i] != found[i]){
                
                cout<<"NO"<<endl;
                goto leave ;
                
            }
        }

        cout<<"YES"<<endl;
        
        leave:;
    }


    return 0;
}