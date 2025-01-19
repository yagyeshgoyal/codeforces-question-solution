#include<iostream>
using namespace std;

int solve(string s, int count1, int count0){

    if(s.length() == 1){
        return 1;
    }

    if(count0 == count1){
        return 0;
    }

    int k = 0;
    int cost = 0;
    for(int i=0; i<s.length() ; i++){
        if(s[i] == '0' && count1>0 && s[k] != '1'){
            count1--;
            k++;
        }
        else if(s[i] == '1' && count0 > 0  && s[k] != '0'){
            count0--;
            k++;
        }
        // else if(s[i] == '0' && count1>0 ){
        //     cost++;
        // }
        // else if(s[i] == '1' && count0>0 ){
        //     cost++;
        // }
        else{
            cost++;
        }
    }
    return cost;
}

int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--){

        string s;
        cin>>s;
        int count1=0;
        int count0=0;
        
        for(int i=0; i<s.length(); i++){
            if(s[i]== '1'){
                count1++;
            }
            else{
                count0++;
            }
        }
        
        int ans = solve(s,count1,count0);

        cout<<ans<<endl;
    }


    return 0;
}