#include<iostream>
using namespace std;

int solve(int n, string s, int index){
    if(index == n-1){
        return 1;
    }
    
    if(index == n){
        return 0;
    }

    if(s[index] == s[index+1]){
        return solve(n,s,index+1);
    }

    int maxi = INT32_MIN;
    if(s[index] != s[index+1]){
        int ans1 = solve(n,s,index+2);

        int ans2 = 1+solve(n,s, index+1);

        maxi = max(maxi,max(ans1,ans2));
    }

    if(maxi>0){
        return maxi-1;
    }
    else{
        return 0;
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        
        int n;
        cin>>n;
        cin.ignore();

        string s;
        cin>>s;

        int ans  = solve(n, s, 0);

        if(ans<1){
            cout<<ans<<endl;
        }
        else{
            cout<<ans-1<<endl;
        }
    }


    return 0;
}