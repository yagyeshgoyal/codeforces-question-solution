#include<iostream>
#include<map>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--){
        string s;
        cin>>s;

        long long int a,b;
        a = stoll(s)/2;
        b = stoll(s)/2;

        if(stoll(s)%2==1){

            b = b+1;
        }
        map<int,pair<int,int>>mp;
        mp[0] = {5,5};
        mp[1] = {5,6};
        mp[2] = {5,7};
        mp[3] = {5,8};
        mp[4] = {5,9};
        mp[5] = {6,9};
        mp[6] = {7,9};
        mp[7] = {8,9};
        mp[8] = {9,9};

        string s1 = to_string(a);
        string s2 = to_string(b);

        int carry = 0;

        for(int i = s1.length()-1; i>=0; i--){
            if(s1[i]>= '5' && s1[i] <='9' && s2[i]>='5'&& s2[i]<='9'){
                if(carry == 1){
                    if(s1[i] == '5' && s2[i] == '5'){
                        cout<<"NO"<<endl;
                        goto end;
                    }
                    else if(s1[i] != '5'){
                        s1[i] = s1[i]-1;
                    }
                    else{
                        s2[i] = s2[i]-1;
                    }
                    carry = 0;
                }
            }
            else{
                int sum = (s1[i]-'0') + (s2[i]-'0');

                sum = sum- carry;

                if(mp.count(sum)){
                    auto top = mp[sum];
                    s1[i] = top.first;
                    s2[i] = top.second;
                    carry = 1;
                }
                else{
                    cout<<"NO"<<endl;
                    goto end;
                }
            }
        }

        if(carry == 1){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }

        end:;
    }


    return 0;
}