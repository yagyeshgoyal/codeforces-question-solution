#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;

        cin.ignore();

        string s;
        getline(cin,s);

        int countA=0,countB=0;

        for(int i=0;i<n;i++){
            if(s[i]=='A')
            countA++;
            else
            countB++;
        }

        if(countB==k){
            cout<<0<<endl;
        }
        else if(countB>k){
            int p=k;
            int i;
            if(k==0){
                for( i=n-1;i>=0;i--){
                
                    if(s[i]=='B')
                    break;
                
                }
            }
            else{
                for( i=n-1;i>=0;i--){
                if(p==0)
                break;
                if(s[i]=='B')
                p--;
            }
            }
            cout<<1<<endl;
            cout<<i+1<<" A"<<endl;
        }
        else {
            int p=k-countB;
            
            int i;
            for( i=0;i<n;i++){
                if(p==0)
                break;
                if(s[i]=='A'){
                    p--;
                }
                
            }
            cout<<1<<endl;
            cout<<i<<" B"<<endl;
            
        }



    }


    return 0;
}