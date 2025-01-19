#include<iostream>
#include<bits/stdc++.h>
#include<vector>

using namespace std;

struct cmp {   
    bool operator()(const pair<int, int>& p1,
                    const pair<int, int>& p2) 
    {
        
        if(p1.first == p2.first){
            return p1.second > p2.second;
        }

        return p1.first <p2.first;
    }
};

int main()
{
    int tt;
    cin>>tt;
    while(tt--){
        int fn,yp;
        cin>>fn>>yp;

        int a[fn];
        int b[fn];

        for(int i=0; i<fn; i++){
            cin>>a[i];
        }

        for(int i=0; i<fn; i++){
            cin>>b[i];
        }

        vector<pair<int, int>>s;

        for(int i=0; i<fn; i++){
            s.push_back(make_pair(b[i],a[i]));
        }

        sort(s.begin(), s.end(),cmp());

        // for(auto i : s){
        //     cout<<i.second<<" "<<i.first<<endl;
        // }

        long long int cost = 0;
        long long int count = 0;
        // bool flage = false;
        // for(auto i : s){
        //     // if(flage == true){
        //     //     flage = false;
        //     // }
        //      if(count == 0){
        //         cost+= yp;
        //         count = count+ 1;
        //         if(i.first<= yp){
        //             cost = cost + (i.first * min<int>((fn-count),i.second));
        //             count = count+ i.second;
        //             flage = true;
        //         }
        //         else{
        //                 // cost = cost + yp;
        //                 // count++;
        //                 // flage = false;
        //                 break;
        //             }
                
        //     }
        //     else if(count<fn){
        //         // if(flage == true){
                    
        //             if(i.first<= yp){
        //                 cost = cost + (i.first * min<int>((fn-count),i.second));
        //                 count = count+ i.second;
        //                 flage = true;
        //             }
        //             else{
        //                 // cost = cost + yp;
        //                 // count++;
        //                 // flage = false;
        //                 break;
        //             }
        //         // }
        //         // else{
        //             // cost = cost + yp;
        //             // count = count + 1;

        //             if(i.first<= yp){
        //                 cost = cost + (i.first * min<int>((fn-count),i.second));
        //                 count = count+ i.second;
        //                 flage = true;
        //             }
        //             else{
        //                 // cost = cost + yp;
        //                 // count++;
        //                 // flage = false;
        //                 break;
        //             }
        //         // }
        //     }
        //     else{
        //         break;
        //     }

        // }

        for(auto i : s){
            if(count == 0){
                cost = cost + yp;
                count++;

                if(count < fn){

                    cost = cost + min<long long>(i.second,fn-count)*(min<int>(i.first,yp));
                    count = count + i.second;
                }
            }
            else if(count < fn){
                cost = cost + min<long long>(i.second,fn-count)*(min<int>(i.first,yp));
                count = count + i.second;
            }
            else{
                break;
            }
        }

        // if(count < fn){
        //     cost = cost 
        // }
        
        cout<<cost<<endl;
    }


    return 0;
}