#include<iostream>
using namespace std;

int main()
{

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        cin.ignore();

        string s;
        getline(cin,s);

        int ones = 0;
        int zeros = 0;

        for(int i=0; i<s.length(); i++){
            if(s[i] == '1'){
                ones++;
            }
            else{
                zeros++;
            }
        }



    //    int mini = abs((n/2) - 0);
    //    int ans = 0;
       int mini = INT16_MAX;
       int ans = INT16_MAX;

       int new_one = 0;
       int new_zero = 0;

       for(int i=1; i<=n; i++){
            if(s[i-1] == '0'){
                new_zero++;
            }
            else{
                new_one++;
            }

            int k = i/2;
            if(i%2 == 1){
                k++;
            }
            bool flage = true;

            if(k > new_zero){
                flage = false;
            }

            k = (n-i)/2;

            if((n-i)%2 == 1){
                k++;
            }
            if(k > (ones-new_one)){
                flage = false;
            }

            if(flage){
                if(mini>abs((n/2) - i)){
                    mini = abs((n/2) - i);
                    ans = i;
                }
                else if(mini == abs((n/2) - i)){
                    
                    ans = min(ans,i);
                }
                
            }
       }

       if(ans == INT16_MAX){
        ans = 0;
       }

       cout<<ans<<endl;


    }

    return 0;
}