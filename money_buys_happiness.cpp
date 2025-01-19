#include<iostream>
#include<limits.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--){
        int m,sal;
        cin>>m>>sal;

        int monthcost[m];
        int monthHappiness[m];

        int maxhappiness = 0;

        for(int i=0; i<m ; i++){
            cin>>monthcost[i]>>monthHappiness[i];

            maxhappiness += monthHappiness[i];
        }

        long long int arr[m][maxhappiness+1];


        int currhappiness = monthHappiness[0];
        for(int i=0; i<m; i++){
            if(i==1){
                currhappiness = monthHappiness[1];
                if(monthcost[0] == 0){
                    currhappiness += monthHappiness[0];
                }
            }
            else if(i!=0){
                currhappiness +=monthHappiness[i];
            }

            long long int moneyhave = 1ll*i*sal;
            for(int w=0; w<= currhappiness; w++){
                if(i==0 || w==0){
                    if(monthcost[i] == 0 && currhappiness>=w){
                        if(i==0)
                        arr[i][w] = monthcost[0];
                        else{
                            arr[i][w] = min<long long int>(arr[i][w],monthcost[i]);
                        }
                    }
                    else if(w==0){
                        arr[i][w] = 0;
                    }
                    else{
                        arr[i][w] = INT_MAX;
                    }
                }
                else if(monthHappiness[i] > w && moneyhave >= monthcost[i]){
                    arr[i][w] = min<long long int>(arr[i-1][w], monthcost[i]);
                }
                else if(monthHappiness[i] <= w && arr[i-1][w-monthHappiness[i]] + monthcost[i]<=moneyhave){
                    arr[i][w] = min(arr[i-1][w], arr[i-1][w-monthHappiness[i]] + monthcost[i]);
                }
                else{
                    arr[i][w] = arr[i-1][w];
                }

            }

            for(int w = currhappiness+1; w<=maxhappiness; w++){
                arr[i][w] = INT_MAX;
            }

            

        }

        int count = 0;

        long long int maxsalary = 1ll*m*sal;
        for(int i=0; i<=maxhappiness; i++){
            if(arr[m-1][i] <= maxsalary){
                count++;
            }
            else{
                break;
            }
        }

        cout<<count-1<<endl;
        
    }


    return 0;
}