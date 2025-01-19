#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int p = n/5;
        int r = n%5;

        int s = min(5,n)-r;

        string ans = "";
        // cout<<"p"<<endl;
        char arr[5] = {'a', 'e', 'i', 'o', 'u'};

        

        int i=0;
        // cout<<s<<" "<<p<<" "<<r<<endl;
        while(s>0){
            // cout<<"M"<<endl;
            for(int k=0; k<p; k++){
                ans.push_back(arr[i]);
            }
            i++;
            s--;
        }

        while(r>0){
            // cout<<"m"<<endl;
            for(int k=0; k<=p; k++){
                ans.push_back(arr[i]);
                // cout<<k<<endl;
            }
            i++;
            r--;
        }

        cout<<ans<<endl;
    }


    return 0;
}