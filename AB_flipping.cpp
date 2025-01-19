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

        bool flage = false;
        int a = 0;
        int b = 0;
        int sum = 0;
        for(int i=n-1; i>=0; i--){
            if(s[i]=='A' && s[i-1] == 'B' && i-1>=0 && flage == true){
                sum = sum + b + a + 1;
                a = 0;
                b = 0;
                flage = false;
            }
            else if(s[i]=='A' && s[i-1] == 'B' && i-1>=0 && flage == false){
                a = 0;
                b = 0;
                flage = false;
            }
            else if(s[i] == 'A' ){
                a++;
            }
            else if(s[i] == 'B'){
                b++;
                flage = true;
            }
        }

        if(b>0 && flage == true && a>0){
            sum = sum + b + a;
        }
        if(sum>0)
        sum = sum - 1;

        cout<<sum<<endl;
    }


    return 0;
}