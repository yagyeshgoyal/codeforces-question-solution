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
        getline(cin, s);

        int ans1 = 0;
        int ans2 = 0;
        int count1 = 0;
        int count2 = 0;
        for(int i=0; i<n; i++){

            if(s[i] == '<'){
                count1 ++;
                count2 = 0;
            }
            if(s[i] == '>'){
                count2 ++;
                count1 = 0;
            }

            ans1 = max(ans1, count1);
            ans2 = max(ans2, count2);
        }

        cout<<max(ans1, ans2) +1 <<endl;
    }

    return 0;
}