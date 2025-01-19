#include<iostream>
#include<set>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        string s;
        cin>>s;

        if(n==2){
            cout<<((s[0]-'0')*10) + (s[1]-'0')<<endl;
            goto end;
        }
        else if(n==3){
            int l = ((s[0]-'0')*10) + (s[1]-'0');
            int r = ((s[1]-'0')*10) + (s[2]-'0');

            cout<<min(min(l+(s[2]-'0'), r+(s[0]-'0')),min(l*(s[2]-'0'), r*(s[0]-'0')))<<endl;
        }
        else {
            for(int i=0; i<n; i++){
                if(s[i] == '0'){

                    cout<<0<<endl;
                    goto end;
                }
            }

            set<int>st;

            char l = s[0];
            for(int i=1; i<n; i++){
                st.insert(((l-'0')*10) + (s[i]-'0'));
                l = s[i];
            }

            auto it = st.begin();

            l = (*it/10)+'0';
            char r = (*it%10) + '0';

            int ans = 0;
            for(int i=0; i<n; i++){
                if(s[i] == '1'){
                    ans = ans*(s[i]-'0');
                }
                else{
                    ans = ans + (s[i]-'0');
                }
            }

            int result = ans;
            if(l != '1') result = result - (l-'0');
            if(r != '1') result = result - (r-'0');

            result = result + ((l-'0')*10) + (r-'0');

            it++;
            // if(it != st.end()){
            //     l = (*it/10)+'0';
            //     r = (*it%10) + '0';

            //     ans = 0;
            //     for(int i=0; i<n; i++){
            //         if(s[i] == '1'){
            //             ans = ans*(s[i]-'0');
            //         }
            //         else{
            //             ans = ans + (s[i]-'0');
            //         }
            //     }

            //     int result2 = ans;
            //     if(l != '1') result2 = result2 - (l-'0');
            //     if(r != '1') result2 = result2 - (r-'0');

            //     result2 = result2 + ((l-'0')*10) + (r-'0');

            //     cout<<min(result,result2)<<endl;
            // }
            // else{
            //     cout<<result<<endl;
            // }

            while(it != st.end()){
                l = (*it/10)+'0';
                r = (*it%10) + '0';

                ans = 0;
                for(int i=0; i<n; i++){
                    if(s[i] == '1'){
                        ans = ans*(s[i]-'0');
                    }
                    else{
                        ans = ans + (s[i]-'0');
                    }
                }

                int result2 = ans;
                if(l != '1') result2 = result2 - (l-'0');
                if(r != '1') result2 = result2 - (r-'0');

                result2 = result2 + ((l-'0')*10) + (r-'0');

                result = min(result,result2);
                it++;
            }

            cout<<result<<endl;


        }


        end:;
    }


    return 0;
}