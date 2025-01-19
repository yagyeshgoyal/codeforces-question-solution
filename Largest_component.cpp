#include<iostream>
#include<vector>
#include<map>
using namespace std;

void check(vector<vector<char>>&arr, int i, int j, char k,map<char,int>&mp ){
    if(i<0 || j<0 || i>=arr.size() || j>=arr[0].size() || arr[i][j] != '#'){
        return ;
    }

    arr[i][j] = k;
    mp[k]++;

    check(arr,i+1,j,k,mp);
    check(arr,i-1,j,k,mp);
    check(arr,i,j+1,k,mp);
    check(arr,i,j-1,k,mp);
}

int main()
{   
    
    int t;
    cin>>t;

    while(t--){
        int n,m;
        cin>>n>>m;

        vector<vector<char>>arr;

        for(int i=0; i<n;i++){
            vector<char>v;
            for(int j=0; j<m; j++){
                char a;
                cin>>a;
                v.push_back(a);
            }
            arr.push_back(v);
        }


        map<char,int>mp;

        char k = '0';

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                
                if(arr[i][j] == '#'){
                    mp[k] = 0;
                    check(arr,i,j,k,mp);
                    k++;
                }
            }
        }

        map<char,bool>visited;
        for(int i=0; i<k-'0'; i++){
            visited[i+'0'] = true;
        }
        int ans= 0;
        
        for(int i=0; i<n; i++){
            int curr = 0;
            for(int j=0; j<m; j++){
                if(arr[i][j] == '.'){
                    curr++;
                    
                    if(i-1>=0 && arr[i-1][j] != '.' && visited[arr[i-1][j]]){
                        visited[arr[i-1][j]] = false;
                        curr = curr + mp[arr[i-1][j]];
                    }

                    if(i+1<n && arr[i+1][j] != '.' && visited[arr[i+1][j]]){
                        visited[arr[i+1][j]] = false;
                        curr = curr + mp[arr[i+1][j]];
                    }
                }
                else{

                    if(arr[i][j] != '.' && visited[arr[i][j]]){
                        visited[arr[i][j]] = false;
                        curr = curr + mp[arr[i][j]];
                    }

                    if(i-1>=0 && arr[i-1][j] != '.' && visited[arr[i-1][j]]){
                        visited[arr[i-1][j]] = false;
                        curr = curr + mp[arr[i-1][j]];
                    }

                    if(i+1<n && arr[i+1][j] != '.' && visited[arr[i+1][j]]){
                        visited[arr[i+1][j]] = false;
                        curr = curr + mp[arr[i+1][j]];
                    }
                }
            }
            for(int i=0; i<k-'0'; i++){
                visited[i+'0'] = true;
            }

            ans = max(ans,curr);
        }

        for(int j=0; j<m; j++){
            int curr = 0;
            for(int i=0; i<n; i++){
                if(arr[i][j] == '.'){
                    curr++;
                    
                    if(j-1>=0 && arr[i][j-1] != '.' && visited[arr[i][j-1]]){
                        visited[arr[i][j-1]] = false;
                        curr = curr + mp[arr[i][j-1]];
                    }

                    if(j+1<m && arr[i][j+1] != '.' && visited[arr[i][j+1]]){
                        visited[arr[i][j+1]] = false;
                        curr = curr + mp[arr[i][j+1]];
                    }
                }
                else{

                    if(arr[i][j] != '.' && visited[arr[i][j]]){
                        visited[arr[i][j]] = false;
                        curr = curr + mp[arr[i][j]];
                    }

                    if(j-1>=0 && arr[i][j-1] != '.' && visited[arr[i][j-1]]){
                        visited[arr[i][j-1]] = false;
                        curr = curr + mp[arr[i][j-1]];
                    }

                    if(j+1<m && arr[i][j+1] != '.' && visited[arr[i][j+1]]){
                        visited[arr[i][j+1]] = false;
                        curr = curr + mp[arr[i][j+1]];
                    }
                }
            }

            for(int i=0; i<k-'0'; i++){
                visited[i+'0'] = true;
            }

            ans = max(ans,curr);
        }


        cout<<ans<<endl;
    }


    return 0;
}