#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

vector<int> findnode(int ll, int rr){
    vector<int>l,r;

    while(__lg(ll) > __lg(rr)){
        l.push_back(ll);
        ll = ll>>1;
    }

    while(__lg(rr)>__lg(ll)){
        r.push_back(rr);
        rr = rr>>1;
    }

    while(ll != rr){
        l.push_back(ll);
        ll >>= 1;
        r.push_back(rr);
        rr >>= 1;
    }

    l.push_back(ll);
    reverse(r.begin(), r.end());

    for(auto i : r){
        l.push_back(i);
    }

    return  l;
}

int main()
{
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        
        vector<int>pb;
        int arr[n];
        int l=-1,r=-1;
        for(int i=0; i<n; i++){
            cin>>arr[i];

            if(arr[i] != -1){
                if(l==-1){
                    l = i;
                }
                r = i;
                pb.push_back(i);
            }
        }

        if(l==-1){
            for(int i=0; i<n; i++){
                arr[i] = (i&1)?1:2;
                cout<<arr[i]<<" "; 
            }
            // return 0;
            cout<<endl;
            goto end;
        }

        for(int i=l-1; i>=0; i--){
            arr[i] = ((l-i)&1)?arr[l]*2:arr[l];
        }

        for(int i=r+1; i<n; i++){
            arr[i] = ((i-r)&1)?arr[r]*2:arr[r];
        }

        for(int i=0; i<pb.size()-1; i++){
            int ll = pb[i];
            int rr = pb[i+1];

            vector<int>p = findnode(arr[ll],arr[rr]);

            if(((p.size()&1) != ((rr-ll+1)&1)) || ((rr-ll+1)<p.size())){
                cout<<-1<<endl;
                // cout<<"k"<<endl;
                // return 0;
                goto end;
            }

            for(int i=0; i<p.size(); i++){
                arr[ll+i] = p[i];
                // cout<<arr[ll+i+1]<<" "<<ll+i+1<<endl;
            }
            for(int i=ll+p.size(),o = 1; i<=rr; ++i ,o ^= 1){
                arr[i] = (o ? arr[i-1] * 2 : arr[i-1] / 2);
                // cout<<arr[i]<<endl;
            }
        }

        for(int i=0; i<n; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        end:;
        // cout<<endl;
    }


    return 0;
}