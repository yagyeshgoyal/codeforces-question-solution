#include<iostream>
#include<set>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int arr1[4];
        int arr2[4];
        for(int i=0; i<4; i++){
            cin>>arr1[i]>>arr2[i];
        }
        int a,b;
        a = arr1[0];
        for(int i=1; i<4; i++){
            if(arr1[i] != a){
                b = arr1[i];
                break;
            }
        }

        int val = abs(a-b);

        cout<<val*val<<endl;

    }


    return 0;
}