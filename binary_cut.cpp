#include<iostream>
using namespace std;

int main()
{

    int t;
    cin>>t;

    while(t--){
        string s;
        cin>>s;

        int count01 = 0;
        int count10 = 0;
        bool ztoo = false;
        bool otoz = false;

        for(int i=1; i<s.length(); i++){
            if(s[i] == '0' && s[i-1] == '1'){
                count10++;
                otoz = true;
            }
            else if(s[i] == '1' && s[i-1] == '0'){
                count01++;
                ztoo = true;
            }
        }
        
        if(s[s.length()-1] == '0'){
            count01++;
        }
        else{
            count10++;
        }

        if(otoz == true && ztoo == true){
            cout<<count01 + count10 - 1 <<endl;
        }
        else if(otoz == true && ztoo == false){
            cout<<count01+count10<<endl;
        }
        else if(otoz == false && ztoo == true){
            cout<<count01 + count10 - 1 <<endl;
        }
        else{
            cout<<1<<endl;
        }





    }

    return 0;
}