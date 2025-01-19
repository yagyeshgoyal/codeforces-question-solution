#include<iostream>
#include<vector>
using namespace std;

int main()
{

    string s;
    cin>>s;

    int vcount = 0;
    int ocount = 0;
    int n = s.length();
    vector<int>v(n,0);
    vector<int>z(n,0);

    // z.push_back(0);

    // for(int i=0; i<s.length(); i++){
    //     if(s[i] == 'v' && i+1<s.length() && s[i+1] == 'v'){
    //         vcount++;
    //     }
    //     else if(s[i] == 'v' && i+1<s.length() && s[i+1] == 'o'){
    //         vcount++;

    //         if(vcount>1){
    //             v.push_back(vcount-1);
    //         }

    //         vcount = 0;
    //     }
    //     else if( s[i] == 'v' && i == s.length()-1){
    //         vcount++;

    //         if(vcount>1){
    //             v.push_back(vcount-1);
    //         }

    //         vcount = 0;
    //     }

    //     if(i<s.length()-2 && s[i] == 'o' && (s[i+1] != 'v' || s[i+2] != 'v')){
    //         ocount++;
    //     }
    //     else if(i<s.length()-2 && s[i] == 'o' && s[i+1] == 'v' && s[i+2] == 'v'){
    //         ocount++;
    //         z.push_back(ocount);
    //         ocount = 0;
    //     }
    // }

    // // int n = s.length()-2;
    // // if(n < 0){
    // //     n = 0;
    // // }
    
    // // for(int i=0; i<n; i++){
    // //     // cout<<"k"<<endl;
    // //     // cout<<s.length()<<endl;
    // //     if(s[i] == 'o' && (s[i+1] != 'v' || s[i+2] != 'v')){
    // //         ocount++;
    // //     }
    // //     else if(s[i] == 'o' && s[i+1] == 'v' && s[i+2] == 'v'){
    // //         ocount++;
    // //         z.push_back(ocount);
    // //         ocount = 0;
    // //     }
    // // }
    
    // for(int i=1; i<z.size(); i++){
    //     z[i] = z[i] + z[i-1];
    // }
    // long long int ans = 0;
    // for(int i=1; i<v.size(); i++){
    //     for(int j=0; j<i; j++){
    //         ans = ans + (v[j]*(z[i]-z[j])*v[i]);
    //     }
    // }

    // std :: cout<<ans<<endl;

    for(int i=1; i<n; i++){
        if(s[i] == 'v' && s[i-1] == 'v'){
            v[i] = v[i-1] + 1;
        }
        else{
            v[i] = v[i-1];
        }
    }

    for(int i=n-2; i>=0; i--){
        if(s[i] == 'v' && s[i+1] == 'v'){
            z[i] = z[i+1] + 1;
        }
        else{
            z[i] = z[i+1];
        }
    }

    long long int ans = 0;

    for(int i=0; i<n ;i++){
        if(s[i] == 'o'){
            ans = ans + 1ll*z[i]*v[i];
        }
    }


    cout<<ans<<endl;


    return 0;
}