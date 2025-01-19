#include<iostream>
using namespace std;

int main()
{

    int t;
    cin>>t;
    while(t--){
        char arr[10][10];
        int count=0;
        for(int i=0;i<10;i++){
            for(int j=0;j<10;j++){
                cin>>arr[i][j];
                if(arr[i][j]=='X')
                {
                    if(i==0 || j==0 || j==9 || i==9)
                    count =count+1;
                    else if((i==1 && j>0 && j<9) || (i==8 && j>0 && j<9)  || (j==1 && i>0 && i<9) ||(j==8 && i>0 && i<9))
                    count=count+2;
                    else if((i==2 && j>1 && j<8) || (i==7 && j>1 && j<8)  || (j==2 && i>1 && i<8) ||(j==7 && i>1 && i<8))
                    count=count+3;
                    else if((i==3 && j>2 && j<7) || (i==6 && j>2 && j<7)  || (j==3 && i>2 && i<7) ||(j==6 && i>2 && i<7))
                    count=count+4;
                    else if((i==4 && j>3 && j<6) || (i==5 && j>3 && j<6)  || (j==4 && i>3 && i<6) ||(j==5 && i>3 && i<6))
                    count=count+5;
                }
            }
        }

        cout<<count<<endl;

        
    }

    return 0;
}