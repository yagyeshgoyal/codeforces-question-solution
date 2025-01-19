#include<iostream>
using namespace std;

int main()
{

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        char arr[n][n];
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cin>>arr[i][j];
            }
        }

        int count = 0;
        int count2 = 0;
        int one = 0;
        for(int i=0; i<n;i++){
            if(one == 0){
                for(int j=0; j<n; j++){
                    if(arr[i][j] == '1'){
                        count++;
                        one = 1;
                    }
                }
            }
            else{
                for(int j=0; j<n; j++){
                    if(arr[i][j] == '1'){
                        count2++;
                    }
                }
                break;;
            }
        }

        if(count == count2){
            cout<<"SQUARE"<<endl;
        }
        else{
            cout<<"TRIANGLE"<<endl;
        }
    }

    return 0;
}