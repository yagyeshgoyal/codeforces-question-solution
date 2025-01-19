#include<iostream>
#include<bits/stdc++.h>
#include<cmath>
#include<set>
using namespace std;

int find(int temp , int a){

    // if(temp == a || temp == 1){
    //     return 1;
    // }

    long long int i;
    int count = 0;
    for( i=1; i<=temp; i = i*a*1ll){
        if(temp%i != 0){
            // return (temp/(i/a));
            // return ((i/a));
            return count ;
        }
        else{
            count++;
        }
    }

    // return (temp/(i/a));
    // return ((i/a));
    return count;
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        int a,b,l;
        cin>>a>>b>>l;

        int count = 0;
        // for(int i=1; i<=l; i++){
        //     int temp1 = l;
        //     int temp2 = l;
        //     if(temp1%i == 0){
        //         temp1 = temp1/i;
        //         temp1 = find(temp1,a);
        //         temp1 = find(temp1,b);  

        //         temp2 = temp2/i;
        //         temp2 = find(temp2,b);
        //         temp2 = find(temp2,a); 
        //     }
            

        //     if(temp1 == 1 || temp2 == 1){
        //         cout<<i<<endl;
        //         count++;
        //     }

        // }
        // int temp = l;
        int count_a = find(l,a);
        // cout<<count_a<<endl;

        // temp = l;
        int count_b = find(l,b);
        // cout<<count_b<<endl;
        // cout<<"break"<<endl;

        set<long long int>ans;

        long long int sa = 1,sb =1;
        for(int i=0; i<count_a; i++){
            if(i==0){
                    sa = 1;
                }
                else{
                    sa = sa*a*1ll;
                }
            for(int j=0; j<count_b; j++){
                if(j==0){
                    sb = 1;
                }
                else{
                    sb = sb*b*1ll;
                }
                
                long long int s = sa*sb*1ll;
                // cout<<s<<endl;
                if(l%s == 0){
                    // cout<<l/s<<endl;
                    ans.insert(l/s);
                    count++;
                }
            }
        }


        // cout<<count<<endl;
        cout<<ans.size()<<endl;
    }


    return 0;
}