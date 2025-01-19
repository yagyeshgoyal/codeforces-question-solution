#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        int arr[n];
        char temp[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
            temp[i] = 'a';
        }

        // int count = 0;

        string ans = "";
        for(int i=0; i<n; i++){
            ans.push_back('a');
        }
        
        int target = 0;

        // while(count<n){
        //         char ch = 'a';
        //     for(int i=0; i<n; i++){
        //         if(arr[i] == target){
        //             ans[i] = ch;
        //             ch++;
        //             count++;
        //         }
        //     }
        //     target++;
        // }

        for(int i=0; i<n; i++){
            ans[i] = temp[arr[i]];
            temp[arr[i]]++;
        }

        cout<<ans<<endl;



    }


    return 0;
}