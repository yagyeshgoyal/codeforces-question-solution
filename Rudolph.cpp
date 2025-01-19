#include<iostream>
using namespace std;

void check(char arr[][3]){
    
    
    for(int i=0;i<3;i++)
    {
       
        if(arr[i][0]== 'X' && arr[i][1]=='X' && arr[i][2]=='X')
        {cout<<"X"<<endl;
         return ;
        }
        else if(arr[i][0]== '+' && arr[i][1]=='+' && arr[i][2]=='+')
        {cout<<"+"<<endl;
         return ;
        }
        else if(arr[i][0]=='O' && arr[i][1]=='O' && arr[i][2]=='O')
        {cout<<"O"<<endl;
         return ;
        }
        else if(arr[0][i]=='X' && arr[1][i]=='X' && arr[2][i]=='X')
       {cout<<"X"<<endl;
         return ;
        }
        else if(arr[0][i]== '+' && arr[1][i]=='+' && arr[2][i]=='+')
       {cout<<"+"<<endl;
         return ;
        }
        else if(arr[0][i]=='O' && arr[1][i]=='O' && arr[2][i]=='O')
       {cout<<"O"<<endl;
         return ;
        }
    }
    if(arr[0][0]=='X' && arr[1][1]== 'X' && arr[2][2]=='X')
    {cout<<"X"<<endl;
         return ;
        }
    else if(arr[0][0]=='+' && arr[1][1]=='+' && arr[2][2]=='+')
    {cout<<"+"<<endl;
         return ;
        }
    else if(arr[0][0]=='O' && arr[1][1]=='O' && arr[2][2]=='O')
   {cout<<"O"<<endl;
         return ;
        }
    else if(arr[0][2]=='X' && arr[1][1]=='X' && arr[2][0]=='X')
   {cout<<"X"<<endl;
         return ;
        }
    else if(arr[0][2]=='+' && arr[1][1]=='+' && arr[2][0]=='+')
   {cout<<"+"<<endl;
         return ;
        }
    else if(arr[0][2]=='O' && arr[1][1]=='O' && arr[2][0]=='O')
    {cout<<"O"<<endl;
         return ;
        }
    else
   {cout<<"DRAW"<<endl;
         return ;
        }
    
}

int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        char arr[3][3];
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++)
            cin>>arr[i][j];
        }
       
        check(arr);
      
    }

    return 0;
}