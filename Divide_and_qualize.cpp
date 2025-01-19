#include<iostream>
#include<map>
using namespace std;

void finddivisor(int num, map<int,int>&div){
    if(num == 1){
        return ;
    }
    int i = 2;

    while(i*i <= num){
        while(num%i ==0){
            div[i]++;
            num = num/i;
        }
        i++;
    }

    if(num>1) {
        div[num]++;
    }
 
}

int main(){

    int t;
    cin>>t;

    while(t--){


        int n;
        cin>>n;

        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }

        map<int,int>div;

        for(int i=0; i<n; i++){
            finddivisor(arr[i],div);
        }

        bool flage = true;
        for(auto i : div){
            if(i.second%n != 0){
                flage = false;
                break;
            }
        }

        if(flage) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
return 0;
}