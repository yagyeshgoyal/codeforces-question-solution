#include<iostream>
#include<set>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;

        int a[n+m+1],b[n+m+1];
        
        for(int i=0; i<n+m+1; i++){
            cin>>a[i];
        }

        for(int i=0; i<n+m+1; i++){
            cin>>b[i];
        }

        set<int>p,t;
        int pi=0,ti=0,lp=-1,lt=-1;
        long long int progsum = 0, testsum = 0;

        for(int i=0; i<n+m+1; i++){
            if((a[i]>b[i] && pi<=n) || ti>m){
                p.insert(i);

                if(pi == n){
                    p.erase(i);
                    lp= i;
                }
                pi++;
                progsum += a[i];
            }
            else{
                if(ti == m){
                    lt = i;
                }
                ti++;
                testsum += b[i];
            }
        }


        for(int i=0; i<n+m+1; i++){
            if(p.find(i) != p.end()){
                if(lt == -1){
                    cout<<progsum+testsum-a[i]<<" ";
                }
                else{
                    cout<<progsum+testsum - a[i] - b[lt] + a[lt]<<" ";
                }
            }
            else{
                if(lp == -1){
                    cout<<progsum+testsum-b[i]<<" ";
                }
                else{
                    cout<<progsum+testsum - b[i] - a[lp] + b[lp]<<" ";
                }
            }
        }
        cout<<endl;

    }


    return 0;
}