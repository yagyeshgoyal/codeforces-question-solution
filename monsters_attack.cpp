#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

bool check(int n,int k, vector<pair<int,int>>&monster){

    int carry = 0;
    int attack = k;
    int step = 1;

    for(int i=0; i<n; i++){
        
        if(monster[i].second <= carry){
            carry = carry - monster[i].second;
            carry = carry + attack;
            // step++;
        }
        else{
            monster[i].second = monster[i].second - carry;
            carry = 0;

            if(step > monster[i].first){
                return false;
            }

            if(monster[i].second <= attack){
                carry = attack - monster[i].second;
                step++;
            }
            else{
                if(step == monster[i].first){
                    return false;
                }
                else{
                    monster[i].second = monster[i].second - attack;
                    i = i--;
                    step++;
                }
            }
        }
    }

    return true;
}

int main()
{

    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;

        long long int health[n];
        for(int i=0; i<n; i++){
            cin>>health[i];
        }

        long long int position[n];
        for(int i=0; i<n; i++){
            cin>>position[i];

            position[i] = abs(position[i]);
        }

        // vector<pair<int,int>>monster;
        // for(int i=0; i<n; i++){
        //     monster.push_back(make_pair(position[i],health[i]));

        // }
        // sort(monster.begin(), monster.end());


        // bool ans = check(n,k,monster);

        // if(ans){
        //     cout<<"YES"<<endl;
        // }
        // else{
        //     cout<<"NO"<<endl;
        // }


        long long int pso_hel[n] = {0};

        for(int i=0; i<n; i++){
            pso_hel[position[i]-1]+= health[i];
        }

        long long int carry = 0;
        long long int attack = k;
        bool flage = true;
        int j=0;
        int i;
        for( i=0; i<n; i++){
            long long int acc_attack = attack + carry;
            if(pso_hel[i] <= acc_attack){
                carry = acc_attack - pso_hel[i];
            }
            else{
                flage = false;
                break;
            }

            // if(j<i){
            //     flage = false;
            //     break;
            // }

            // for( ; j<n; j++){
            //     if(pso_hel[i] <= acc_attack){
            //         acc_attack = acc_attack - pso_hel[i];
            //     }
            //     else{
            //         // carry = acc_attack;
            //         pso_hel[j] = pso_hel[j] - acc_attack;
            //         break;
            //     }
            // }

            // if(j == n){
            //     break;
            // }


        }

        // if(i == n){
        //     cout<<"NO"<<endl;
        // }
        // else{
            if(flage){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        // }


    }

    return 0;
}