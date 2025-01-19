#include<iostream>
#include<map>
using namespace std;

int binarySearch(int point[], int q,int k){

    int s= 0;
    int e = k-1;
    int mid = s + (e-s)/2;

    while(s<e){

        if(point[mid] == q){
            return mid;
        }

        if(point[mid] < q){
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }

        mid = s + (e-s)/2;
    }

    if( point[s] >= q){
        return s;
    }
    else {
        return s+1;
    }
}

void solve(int n, int k, int point[], int time[]){
    int q;
    cin>>q;

    if(point[0]>=q){
        cout<<(1ll*q*time[0])/point[0]<<" ";
        return ;
    }

    int i;
    // for(i=1; i<k; i++){
    //     if(point[i] >= q){
    //         break;
    //     }
    // }
    i = binarySearch(point,q,k);

    // int i = mp[q];
    cout<<time[i-1] + ((1ll*(q-point[i-1])*(time[i]-time[i-1]))/(point[i]-point[i-1]))<<" ";
    return ;
}

int main()
{

    int t;
    cin>>t;

    while(t--){
        int n,k,q;
        cin>>n>>k>>q;

        // map<int,int>mp;

        

        int point[k];
        for(int i=0; i<k; i++){
            cin>>point[i];
        }

        int time[k];
        for(int i=0; i<k; i++){
            cin>>time[i];
        }

        // int p=0;
        // int t = 0;
        // while(p<n){
        //     if(p<point[t]){
        //         mp[p] = t;
        //         p++;
        //     }
        //     else if(p == point[t]){
        //         mp[p] = t;
        //         p++;
        //         t++;
        //     }
        // }

        while(q--){
            solve(n,k,point,time);
        }
        cout<<endl;
    }

    return 0;
}