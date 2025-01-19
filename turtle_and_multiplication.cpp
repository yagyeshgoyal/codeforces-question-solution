#include<iostream>
#include<map>
#include<set>
using namespace std;

int findnum(int arr[], map<long long int , bool>&mp, int index,set<int>&s,long long int &maxi){
    
    for(auto it =s.rbegin(); it != s.rend(); it++){
        if(mp.count(1ll*arr[index]*(*it))){
            continue;
        }
        else{
            mp[1ll*arr[index]*(*it)] = true;
            return *it;
        }
    }

    while(true){
        maxi++;
        if(mp.count(1ll*arr[index]*maxi)){

        }
        else{
            mp[1ll*arr[index]*maxi] = true;
            s.insert(maxi);
            return maxi;
        }
    }

}

int main()
{
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        map<long long int , bool>mp;
        set<int>s;

        int arr[n];
        arr[0] = 1;
        arr[1] = 1;
        mp[1] = true;
        s.insert(1);
        long long int maxi = 1;

        long long int p  =2 ;
        int i=2;
        while(i<n){
            arr[i] = findnum(arr,mp,i-1,s,maxi);
            i++;
        }

        for(int i=0; i<n; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }


    return 0;
}