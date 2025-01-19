#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        int X[n], Y[n];

        bool down = false;
        bool left = false;
        bool right = false;
        bool up = false;

        for(int i=0; i<n; i++){
            cin>>X[i]>>Y[i];
            
            if(X[i]>0){
               right = true; 
            }
            else if(X[i]<0){
                left = true;
            }

            if(Y[i]>0){
               up = true; 
            }
            else if(Y[i]<0){
                down = true;
            }
        }

        if( right && left && up && down ){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }


    return 0;
}