#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){

        int n;
        cin>>n;
        
        cin.ignore();

        string s;
        cin>>s;

        int arr[26]= {0};
        for(int i=0; i<s.length(); i++){
            int k = s[i] - 'A';
            arr[k]++;
        }

        int count=0;
        for(int i=0; i<26; i++){
            if(arr[i] >= i+1){
                count ++;
            }
        }

        cout<<count<<endl;
    }


    return 0;
}