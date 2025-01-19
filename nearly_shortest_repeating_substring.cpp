#include<iostream>
#include<set>
#include<bits/stdc++.h>
using namespace std;




bool check(string &ans, string &give, int n){

    int count = 0;

    for(int i=0; i<n; i++){
        if(ans[i%ans.length()] != give[i]){
            if(count == 1){
                return false;
            }
            else{
                count++;
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
        int n;
        cin>>n;

        cin.ignore();

        string give;
        getline(cin,give);

        

        bool flageans = false;
        int result = n;

               
     

        for(int i=1; i<=(n/2 +1); i++){
            if(n%i == 0){

                string s1 = give.substr(0,i);

                // string ans = "";

                // for(int j=0; j<n/i; j++){
                //     ans = ans + s1;
                // }

                flageans = check(s1,give,n);

                if(flageans){
                    result = i;
                    break;
                }

                // ans = "";

                string s2 = give.substr(n-i, i);

                // for(int j=0; j<n/i; j++){
                //     ans = ans + s2;
                // }

                flageans = check(s2,give,n);

                if(flageans){
                    result = i;
                    break;
                }
                

            }
            if(flageans){
                break;
            }
        }


        
        cout<<result<<endl;
        
    }


    return 0;
}