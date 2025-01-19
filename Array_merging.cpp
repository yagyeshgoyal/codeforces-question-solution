#include<iostream>
#include<map>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        long int n;
        cin>>n;

        long int arr[n];
        map<long long int,long long int>mp1;

        map<long long int, long long int>::iterator it;

        int length = 0;
        for(int i=0; i<n; i++){
            cin>>arr[i];
            if(i==0){
                length++;
            }
            else if(arr[i] == arr[i-1]){
                length++;
            }
            else{
                it = mp1.lower_bound(arr[i-1]);

                if(it == mp1.end()){
                    mp1[arr[i-1]] = length;
                    length = 1;
                }
                else{
                    mp1[arr[i-1]] = max<long long int>(length,mp1[arr[i-1]]);
                    length = 1;
                }
                
            }
        }

        if(length>0){
            it = mp1.lower_bound(arr[n-1]);

                if(it == mp1.end()){
                    mp1[arr[n-1]] = length;
                    length = 1;
                }
                else{
                    mp1[arr[n-1]] = max<long long int>(length,mp1[arr[n-1]]);
                    length = 1;
                }
        }

        

        map<long long int,long long int>mp2;
        long int arr1[n];
        length = 0;
        for(int i=0; i<n; i++){
            cin>>arr1[i];
            if(i==0){
                length++;
            }
            else if(arr1[i] == arr1[i-1]){
                length++;
            }
            else{
                it = mp2.lower_bound(arr1[i-1]);

                if(it == mp2.end()){
                    mp2[arr1[i-1]] = length;
                    length = 1;
                }
                else{
                    mp2[arr1[i-1]] = max<long long int>(length,mp2[arr1[i-1]]);
                    length = 1;
                }
            }
        }

        if(length>0){
             it = mp2.lower_bound(arr1[n-1]);

                if(it == mp2.end()){
                    mp2[arr1[n-1]] = length;
                    length = 1;
                }
                else{
                    mp2[arr1[n-1]] = max<long long int>(length,mp2[arr1[n-1]]);
                    length = 1;
                }
        }

        it = mp1.begin();
        while(it!=mp1.end()){
            cout<<it->first<<" "<<it->second<<endl;
            ++it;
        }
        it = mp2.begin();
        while(it!=mp2.end()){
            cout<<it->first<<" "<<it->second<<endl;
            ++it;
        }

        long long int ans1 = -1;
        for(auto i:mp1){
            ans1 = max(ans1,i.second);
        }
        cout<<ans1<<endl;
        long long int ans2 = -1;
        for(auto i:mp2){
            ans2 = max(ans2,i.second);
        }
        cout<<ans2<<endl;

        long long int ans3 = -1;
        for(auto i:mp1){
            it = mp2.lower_bound(i.first);

            if(it == mp2.end()){
                ans3 = max<long long int>(ans3,i.second);
                
            }
            else{
                ans3 = max<long long int>(ans3,i.second+it->second);
            }
            

        }

        cout<<max(ans1,max(ans2,ans3))<<endl;

        
    }


    return 0;
}