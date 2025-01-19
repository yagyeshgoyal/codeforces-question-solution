#include<iostream>
#include<set>
#include<bits/stdc++.h>
#include<vector>
#include<map>
#include<limits.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--){
        int n,k;
        cin>>n>>k;

        // set<int>s;
        vector<int>arr;
        map<int,vector<int>>mp;
        for(int i=0; i<n; i++){
            int a;
            cin>>a;

            // s.insert(a);
            // mp[a]++;

            // if(mp[a] == 2){
            //     s.erase(a);
            //     mp[a] = 0;
            // }
            // mp[a%k].push_back(a);
            arr.push_back(a);
        }

        sort(arr.begin(), arr.end());

        for(auto i : arr){
            mp[i%k].push_back(i);
        }

        // vector<int>arr;
        
        // for(auto i : s){
        //     arr.push_back(i);
        //     mp[i] = 1;
        // }
        // long long int ans = 0;
        // int count = 0;
        // for(int i=0; i<arr.size(); i++){
        //     if(mp[arr[i]] == 1){
        //         mp[arr[i]] = 0;
        //         bool flage = false;
        //         count++;

        //         for(int j=i+1; j<arr.size(); j++){
        //             if(mp[arr[j]] == 1 && (arr[j]-arr[i])%k ==0){
        //                 mp[arr[j]] = 0;
        //                 flage = true;
        //                 ans = ans + (arr[j]-arr[i])/k;
        //                 count++;
        //                 break;
        //             }
        //         }

        //         if(flage == false && arr.size()-count != 0){
        //             cout<<-1<<endl;
        //             goto end;
        //         }
        //     }
        // }
        // cout<<ans<<endl;
        
        int count = 0;
        int ans = 0;
        for(auto i : mp){
            if(i.second.size()%2 == 1){
                count++;
            }
            if(count == 2){
                cout<<-1<<endl;
                goto end;
            }

            int sum = 0;
            if(i.second.size()%2 == 1){
                // int k = i.second.size()/2;
                // int p = 0;
                // int q = i.second.size()-1;
                // while(k--){
                //     if(mp[i.first][p+1]-mp[i.first][p] <= mp[i.first][q] - mp[i.first][q-1]){
                //         sum = sum + mp[i.first][p+1]-mp[i.first][p] ;
                //         p = p+2;
                //     }
                //     else{
                //         sum = sum + mp[i.first][q]-mp[i.first][q-1] ;
                //         q = q-2;
                //     }
                // }
                long long int temp = INT_MAX;
                int leftodd = 0;
                int lefteven = 0;
                int rightodd = 0;
                int righteven = 0;

                for(int k = 0; k<i.second.size(); k++){
                    if(k%2 == 0){
                        righteven += mp[i.first][k];
                    }
                    else{
                        rightodd += mp[i.first][k];
                    }
                }

                for(int k=0; k<i.second.size(); k++){
                    if(k%2 ==0){
                        righteven -= mp[i.first][k];
                        temp = min<long long int>(temp , leftodd - lefteven + righteven - rightodd);
                        lefteven +=mp[i.first][k];
                    }
                    else{
                        rightodd -= mp[i.first][k];
                        leftodd += mp[i.first][k];
                    }
                }
                sum = temp;
            }
            else{
                for(int j = 0; j+1<mp[i.first].size(); j = j+2){
                    sum = sum + mp[i.first][j+1]-mp[i.first][j];
                }
            }
            

            ans = ans + (sum/k);


        }

        cout<<ans<<endl;
        end:;
    }


    return 0;
}