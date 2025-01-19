#include<iostream>
#include<vector>
using namespace std;

bool solve(int a, int b){
    if(a==b){
        return true;
    }

    if(a<b){
        return false;
    }
    if(a%3 != 0){
        return false;
    }

    bool ans1 = solve(2*a/3,b);

    bool ans2 = solve(a/3,b);

    return ans1 or ans2;

}
int solve1(int a, int b, vector<vector<int>>&v){
    // cout<<"s"<<" ";
    // cout<<a<<" ";
    if(a==b){
        return 1;
    }

    if(a<b){
        return 0;
    }
    if(a%3 != 0){
        return 0;
    }
    
    if(v[a][b] != -1){
        return v[a][b];
    }
    // cout<<"t"<<" ";
    int ans1 = solve1(2*a/3,b,v);

    int ans2 = solve1(a/3,b,v);

    // v[a][b] =  ans1 or ans2;
    if(ans1 == 1 || ans2 == 1){
        v[a][b] = 1;
    }
    else{
        v[a][b] = 0;
    }
    // cout<<"k"<<" ";
    return v[a][b];

}

int main()
{
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;

        vector<vector<int>>v(2*a,vector<int>(500,-1));
        // bool ans = solve(a,b);
        int ans = solve1(a,b,v);

        if(ans==1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }


    return 0;
}