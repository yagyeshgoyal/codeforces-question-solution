#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<unordered_map>
#include<queue>
#include<cmath>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;

        int arr[n] = {0};
        for(int i = 0; i<m; i++){
            int a;
            cin>>a;
            arr[a-1]++;
        }

        set<pair<int, int>> s;
        for(int i = 0; i<n; i++){
            s.insert({arr[i], i});
        }

        if(sizeof(arr) == 1){
            cout<<arr[0]<<endl;
        }
        else{
            while(true){

                if(s.rbegin()->first-1 >= s.begin()->first + 2){
                    auto it1 = s.rbegin();
                    auto it2 = s.begin();

                    int a = it1->first;
                    int b = it2->first;
                    int c = it1->second;
                    int d = it2->second;
                    s.erase(*it2);
                    s.erase(*it1);

                    a--;
                    b++;
                    b++;

                    s.insert({a, c});
                    s.insert({b, d});
                    


                }
                else{
                    break;
                }
                

                

               

            }

            cout<<s.rbegin()->first<<endl;
            
        }


    }

    return 0;
}