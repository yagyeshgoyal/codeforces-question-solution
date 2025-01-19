#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        string s1,s2;
        cin>>s1>>s2;
        // cout<<s1<<endl;

        int ans = 0;
        // for(int i=0; i<n; i++){
        //     if(s1[i] == '.'){
               
        //         if(i==0){
        //             if(i+1<n && i+2<n && s2[i]=='.' && s1[i+1]=='.'&& s2[i+1] == 'x' && s1[i+2] == 'x' && s2[i+2] == '.'){
        //                 ans++;
        //                 cout<<i<<"p"<<endl;
        //             }
        //         }
        //         else{
        //             if(i+1<n && i+2<n && s2[i]=='.' && s1[i+1]=='.'&& s2[i+1] == 'x' && s1[i+2] == 'x' && s2[i+2] == '.' && s2[i-1] != 'x'){
        //                 ans++;
        //                 cout<<i<<1<<endl;
        //             }
        //             // else if(i+1<n && i+2<n && s2[i]=='.' && s1[i+1]=='.'&& s2[i+1] == 'X' && s1[i+2] == 'X' && s2[i+2] == '.' && s1[i-1] != 'X'){
        //             //     ans++;
        //             // }
                    
        //         }
        //     }

        //     if(s2[i] == '.'){
        //         if(i==0){
        //             if(i+1<n && i+2<n && s1[i]=='.' && s2[i+1]=='.'&& s1[i+1] == 'x' && s2[i+2] == 'x' && s1[i+2] == '.'){
        //                 ans++;
        //                 cout<<i<<2<<endl;
        //             }
        //         }
        //         else{
        //             if(i+1<n && i+2<n && s1[i]=='.' && s2[i+1]=='.'&& s1[i+1] == 'x' && s2[i+2] == 'x' && s1[i+2] == '.' && s1[i-1] != 'x'){
        //                 ans++;
        //                 cout<<i<<2<<endl;
        //             }
        //             // else if(i+1<n && i+2<n && s2[i]=='.' && s1[i+1]=='.'&& s2[i+1] == 'X' && s1[i+2] == 'X' && s2[i+2] == '.' && s1[i-1] != 'X'){
        //             //     ans++;
        //             // }
                    
        //         }
        //     }
        // }

        for(int i=0; i+2<n; i++){
            if(s1[i] == 'x' && s1[i+2]=='x' && s2[i+1]=='.' && s2[i] == '.' && s2[i+2]=='.' && s1[i+1] == '.'){
                ans++;
            }

            if(s2[i] == 'x' && s2[i+2]=='x' && s1[i+1]=='.' && s1[i] == '.' && s1[i+2]=='.' && s2[i+1] == '.'){
                ans++;
            }
        }

        cout<<ans<<endl;
    }


    return 0;
}