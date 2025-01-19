#include<iostream>
#include<vector>
#include<map>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        // vector<pair<int,bool>>visited;
        map<int,bool>mp;
        for(int i=0; i<n; i++){
            // visited.push_back(make_pair(i+1,false));
            mp[i+1] = false;
        }

        // int arr[n] = {0};
        // int i = 0;
        // if(n%2 == 0){
        //     for(int k=1; k<=(n/2)-1; k++){
        //         arr[i++] = k;
        //         mp[k] = true;
        //     }
        //     int p = n;
        //     int k = (n/2);
        //     while(i<n){
        //         if(arr[i-1]*2<=n && mp[arr[i-1]*2] == false){
        //             mp[arr[i-1]*2] = true;
        //             arr[i] = arr[i-1]*2;
        //             i++;

        //         }
        //         else{
        //             mp[p] = true;
        //             arr[i++] = p;
        //             p--;
        //         }

        //         if(k<=n && mp[k] == false){
        //             mp[k] = true;
        //             arr[i++] = k;
        //             k++;
        //         }
                
        //         if(mp[p] == true){
        //             p--;
        //         }

        //     }

        // }
        // else{

        // }

        // for(int i=0; i<n; i++){
        //     cout<<arr[i]<<" ";
        // }
        // cout<<endl;


        int arr[n] = {0};
        int i=1;
        arr[0] = 1; 
        int p = 2;

        while(i<n){
            if(arr[i-1]*2 <=n){
                arr[i] = arr[i-1]*2;
                mp[arr[i-1]*2] = true;
                i++;
            }
            else{
                arr[i] = p;
                mp[p] = true;
                i++;
            }

            while(mp[p] == true  && p<=n){
                p++;
            }
        }

        for(int i=0; i<n; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }


    return 0;
}