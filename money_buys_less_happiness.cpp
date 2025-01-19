#include<iostream>
#include<vector>
#include<map>
using namespace std;

// void calMaxHappiness(int cost[], int happiness[], int index, long long int money,
//     long long int currhappiness, long long int &maxhappiness, int &salary, int &month){

//         if(index == month){
//             maxhappiness = max(maxhappiness, currhappiness);
//             return ;
//         }

//         // not take
//         calMaxHappiness(cost,happiness,index+1, money+salary,currhappiness,maxhappiness,salary,month);

//         // take;
//         if(money >= cost[index]){
//             money = money - cost[index];
//             currhappiness = currhappiness + happiness[index];

//             calMaxHappiness(cost,happiness,index+1, money+salary,currhappiness,maxhappiness,salary,month);

//         }
//     }
int calMaxHappiness(int cost[], int happiness[], int index, long long int money,
    int &salary, int &month, map<int,map<long int,int>>&dp){

        if(index == month){
            return 0;
        }

        // if(dp[index][money] != -1){
        //     return dp[index][money];
        // }
        if(dp.count(index) && dp[index].count(money)){
            return dp[index][money];
        }

        // take;
        int ans1 = 0;
        if(money >= cost[index]){
            money = money - cost[index];
            // currhappiness = currhappiness + happiness[index];

            ans1 = happiness[index] + calMaxHappiness(cost,happiness,index+1, money+salary,salary,month,dp);
            money = money + cost[index];

        }

        // not take
        int ans2 = calMaxHappiness(cost,happiness,index+1, money+salary,salary,month,dp);

        dp[index][money] = max(ans1,ans2);

        return dp[index][money];
    }

int main(){

    int t;
    cin>>t;

    while(t--){
        int m,c;
        cin>>m>>c;

        

        int cost[m];
        int happyiness[m];

        for(int i=0; i<m; i++){
            cin>>cost[i]>>happyiness[i];
        }
        
        long long int money = 0;
        // long long int currhappiness = 0;
        // long long int maxhappiness = 0;

        // if(cost[0] == 0){
        //     currhappiness = happyiness[0];
        //     maxhappiness = happyiness[0];
        // }
        money = money + c;

        // calMaxHappiness(cost,happyiness,1,money,currhappiness,maxhappiness,c,m);

        // cout<<maxhappiness<<endl;

        map<int,map<long int,int>>dp;
        

        int ans = calMaxHappiness(cost,happyiness,1,money,c,m,dp);

        if(cost[0] == 0){
            cout<<ans + happyiness[0]<<endl;
        }
        else{
            cout<<ans<<endl;
        }
    }



return 0;
}