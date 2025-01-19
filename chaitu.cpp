#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        ll n,k;
        cin>>n>>k;
        
        vector<ll>v(n);
        for(int i=0;i<n;i++)
        cin>>v[i];
        
        ll sum = accumulate(v.begin(), v.end(), 0);
        if(k>=sum)
        {
            cout<<v.size()<<endl;
            continue;
        }
        else{
            
            ll mini=min(*v.begin(),v.back());
            // cout<<*v.begin()<<"     "<<v.back()<<endl;
            ll cnt=0;
            
            while(k>=2*mini && k>0)
            {
                k-=2*mini;
                *v.begin()-=mini;
                *(v.end()-1)-=mini;
 
                if(!*v.begin())
                {
                    v.erase(v.begin());
                    cnt++;
                }
                if(!*(v.end()-1))
                {
                    v.erase(v.end()-1);
                    cnt++;
                }
    
                mini=min(v.begin(),(v.end()-1));
            }
            
            if(k>0)
            {
                if(k&1)
                {
                    *v.begin()-=k/2+1;
                    *(v.end()-1)-=k/2;
                }
                else
                {
                    *v.begin()-=k/2;
                    *(v.end()-1)-=k/2;
                }
 
                if(!*v.begin())
                {
                    v.erase(v.begin());
                    cnt++;
                }
                if(!*(v.end()-1))
                {
                    v.erase(v.end()-1);
                    cnt++;
                }
            }
            cout<<cnt<<endl;
        }
    }
}