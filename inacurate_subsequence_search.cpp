#include<iostream>
#include<map>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--){
        int n,m,k;
        cin>>n>>m>>k;

        int arra[n];
        for(int i=0; i<n; i++){
            cin>>arra[i];
        }

        map<int,int>yogiji;
        map<int,int>yogi;

        int arrb[m];
        for(int i=0; i<m; i++){
            cin>>arrb[m];
            yogi[arrb[m]]++;
            yogiji[arrb[m]]++;
        }

        int p = n-m;
        int ans = 0;

        // for(int l=0; l<=p; l++){
        //     int count = 0;
        //     for(int s = l ; s<=l+m-1; s++){
        //         if(yogi[arra[s]] > 0){
        //             yogi[arra[s]]--;
        //             count++;
        //         }
                
        //         if(count==k){
        //             break;
        //         }
        //     }

        //     yogi = yogiji;

        //     if(count == k){
        //         ans++;
        //     }
        // }
        int count = 0;
        for(int s = 0 ; s<m; s++){
            if(yogi[arra[s]] > 0){
                yogi[arra[s]]--;
                count++;
            }     
        }

        int l = 0;
        int r = m-1;

        if(count>=k){
            ans++;
        }

        cout<<count<<" "<<ans<<endl;

        while(p>0){
            if(yogiji.count(arra[l])){
                count--;
                yogi[arra[l]]++;
            }
            // cout<<count<<endl;
            cout<<arra[l]<<" "<<arra[r+1]<<endl;
            // cout<<yogi[arra[l]]<<endl;
            cout<<yogi[arra[r+1]]<<endl;
            r++;
            if(yogi[arra[r]] > 0){
                yogi[arra[r]]--;
                count++;
            }

            l++;

            if(count>=k){
                ans++;
            }

            p--;

            cout<<count<<" "<<ans<<endl;
        }



        cout<<ans<<endl;
    }


    return 0;
}