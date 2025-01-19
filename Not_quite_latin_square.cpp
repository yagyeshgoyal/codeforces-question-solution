#include<iostream>
using namespace std;

int main()
{

    int t;
    cin>>t;
    while(t--){

        int n = 3;

        char arr[n][n];
        char ans ;
        for(int i=0; i<n; i++){
            bool a = false;
            bool b = false;
            bool c = false;
            for(int j=0;j<n; j++){
                cin>>arr[i][j];
                if(arr[i][j] == 'A'){
                    a = true;
                }
                else if(arr[i][j] == 'B'){
                    b = true;
                }
                else if(arr[i][j] == 'C'){
                    c = true;
                }
            }

            if(a == false){
                ans = 'A';
            }
            else if(b == false){
                ans = 'B';
            }
            else if(c == false){
               ans = 'C';
            }
        }

        // if(ans == "a"){
        //     cout<<"A"<<endl;
        // }
        // else if(ans == "b"){
        //     cout<<"B"<<endl;
        // }
        // else if(ans == "c"){
        //     cout<<"C"<<endl;
        // }
        cout<<ans<<endl;
    
    }

    return 0;
}