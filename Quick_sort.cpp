#include<iostream>
#include<limits.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int arr[n];
        int mini  = INT_MAX;
        int index = 0;
        for(int i=0; i<n; i++){
            cin>>arr[i];
            if(arr[i]<mini){
                mini = arr[i];
                index = i;
            }
        }

        int count = 1;
        bool flage = true;
        for(int i=index+1; i<n; i++){
            if(arr[i] < arr[i-1]){
                flage = false;
            }

            if(arr[i] == arr[index]){
                count++;
            }

        }

        if(flage == false){
            cout<<-1<<endl;
        }
        else{
            int i = index+1;
            while(count>1){
                if(arr[i] != arr[i-1]){
                    break;
                }
                else{
                    count--;
                }
            }

            bool flage2 = true;
            
            if(count != 1){
                flage2 = false;
            }

            if(flage == false){
                cout<<-1<<endl;
            }
            else{
                cout<<index<<endl;
            }
        }
    }


    return 0;
}