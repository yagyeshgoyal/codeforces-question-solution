#include<iostream>
#include<vector>
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
        int index = -1;
        int maxi = INT_MAX;
        for(int i=0; i<n; i++){
            cin>>arr[i];

            if(arr[i]<maxi){
                index  = i;
                maxi = arr[i];
            }
        }
        vector<int>b;
        vector<int>c;
        if(index != -1){
            b.push_back(arr[index]);
        }
        else{
            b.push_back(arr[0]);
            index = 0;
        }

        

        for(int i=0; i<n; i++){
            if(index != i){
                bool flage = false;
                for(int j=0; j<b.size(); j++){
                    if(b[j]%arr[i] == 0 ){
                        flage = true;
                        break;
                    }
                }

                if(flage){
                    b.push_back(arr[i]);
                }
                else{
                    c.push_back(arr[i]);
                }
            }
        }

        if(c.size() == 0){
            cout<<-1<<endl;
        }
        else{
            cout<<b.size()<<" "<<c.size()<<endl;
            for(int i=0; i<b.size(); i++){
                cout<<b[i]<<" ";
            }
            cout<<endl;
            for(int i=0; i<c.size(); i++){
                cout<<c[i]<<" ";
            }
            cout<<endl;
        }
    }


    return 0;
}