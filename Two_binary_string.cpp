#include<iostream>
#include<limits.h>
using namespace std;

// void check(string s1,string s2,int n,int m){
   
//     for(int i=1;i<n-1;i++){
        
//         if(s1[i]=='1' && s2[i]=='1' && s2[i-1]=='0'){
//             cout<<"YES"<<endl;
//             return;
//         }
//         // else if(s1[i]=='1' && s2[i]!='1' && s1[i+1]=='0'){

//         // }
//         else if(s1[i]=='1'&& s2[i]!='1'){
//         //     int j;
//         //     for( j=i+1;j<n-1;j++){
//         //         if(s1[j]=='0')
//         //         break;
//         //     }
//         //     if(j>=n-1)
//         //    { cout<<"NO"<<endl;
//         //     return ;}
//             if(s1[i+1]=='0'){
//                 s1[i]='0';
//             }
//             else{
//                 cout<<"NO"<<endl;
//                 return ;
//             }
//         }
//         else if(s1[i]=='1' && s2[i]=='1' && s2[i-1]=='1'){
//             cout<<"NO"<<endl;
//             return ;
//         }
//     }
    
//     // for(int i=1;i<m-1;i++){
//     //     if(s2[i]=='1'){
           
//     //         cout<<"NO"<<endl;
//     //         return;
//     //     }
        
//     // }
//     // cout<<"YES"<<endl;
//     // return;
//     if(s2[m-2]=='0'){
//         cout<<"YES"<<endl;
//         return;
//     }
//     else 
//     {
//         cout<<"NO"<<endl;
//         return ;
//     }
// }

int main()
{

    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        string s1;
        string s2;
        cin>>s1>>s2;
        int n=s1.length();
        int m=s2.length();


        // check(s1,s2,n,m);

        // bool flage = true;

        // int i;
        // int k=0;
        // for(i=1; i<n; i++){
        //     if(s1[i] != s2[i]){
        //         // k = i-1;
        //         flage = false;
        //     }
        //     else if(flage == false){
        //         if(s1[i] == s2[i] && s1[i] == s1[k]){
        //             flage = true;
        //             k = i;
        //         } 
                
        //     }
        //     else{
        //         k = i;
        //     }
        //     // cout<<i<<" "<<k<<endl;
        // }

        // if(k==n-1){
        //     cout<<"YES"<<endl;
        // }
        // else{
        //     cout<<"NO"<<endl;
        // }

        // int zero = 0;
        // int one = n-1;

        // for(int i=1; i<n-1; i++){
        //     if(s1[i] == '0' && s2[i] == '0' && one == n-1){
        //         zero = max(zero , i);
        //     }
        //     else if(s1[i] == '1' && s2[i] == '1'){
        //         one = min(one , i);
        //     }
        // }

        // if(zero + 1 == one){
        //     cout<<"YES"<<endl;
        // }
        // else{
        //     cout<<"NO"<<endl;
        // }
        bool falge = false;
        for(int i=1; i<n; i++){
            if(s1[i] == '1' && s2[i] == '1' && s1[i-1] == '0' && s2[i-1] == '0'){
                falge = true;
                break;
            }
        }

        if(falge){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

        
    }

    return 0;
}