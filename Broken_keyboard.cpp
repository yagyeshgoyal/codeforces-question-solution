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
        cin>>s;

        int count = 1;
        int i=0;
        bool flage = true;

        while(i<n){
            if(count%2==1){
                i++;
                count++;
            }
            else{
                if(i+1<n && s[i]==s[i+1]){
                    i = i+2;
                    count++;
                }
                else{
                    flage = false;
                }
            }

            if(flage == false){
                break;
            }
        }

        if(flage){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }


    }

    return 0;
}