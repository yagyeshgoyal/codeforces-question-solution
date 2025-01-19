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

        int start=0;
        int end=n-1;
        while(n>0 && start<end){
            if(s[start]=='1' && s[end]=='0' ){
                n-=2;
                start++;
                end--;
                
            }
            else if(s[start]=='0' && s[end]=='1'){
                n-=2;
                start++;
                end--;
            }
           
            else
            break;
        }

        cout<<n<<endl;
    }


    return 0;
}