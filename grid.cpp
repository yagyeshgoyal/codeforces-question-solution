#include<iostream>
using namespace std;

int main()
{
    int t = 21;
    int ans = 0;
    int maxi = 0;
    while(t--){
        string num;
        getline(cin,num);

        int count =0;
        for(int i=0; i<21; i++){
            if(num[i] == '1'){
                count++;
            }
        }

        if(count >= 11){
            ans++;
        }
    }

    cout<<max(ans,21-ans)<<endl;


    return 0;
}