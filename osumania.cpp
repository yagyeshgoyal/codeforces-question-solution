#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    while(n--){
        int a;
        cin>>a;

        vector<int>result;

        for(int j=0; j<a; j++){

            for(int k=0; k<4; k++){
                char s ;
                cin>>s;

                if(s == '#'){
                    result.push_back(k+1);
                }
            }
        }

        reverse(result.begin(), result.end());

        for(int i=0; i<result.size(); i++){
            cout<<result[i]<<" ";
        }
        cout<<endl;
    }


    return 0;
}