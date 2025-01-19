#include<iostream>
#include<queue>
using namespace std;

class cmp{
    public:
    bool operator()(pair<long long int,int>&a, pair<long long int,int>&b){
        if(a.first>b.first){
            return true;
        }

        return false;
    }
};

int main()
{
    int t;
    cin>>t;

    while(t--){
        int h,n;
        cin>>h>>n;

        int att[n];
        for(int i=0; i<n; i++){
            cin>>att[i];
        }

        int cooldown[n];
        for(int i=0; i<n; i++){
            cin>>cooldown[i];
        }

        priority_queue<pair<long long int,int>, vector<pair<long long int,int>>,cmp>minheap;

        for(int i=0; i<n; i++){
            minheap.push({1,i});
        }

        long long int ans = 0;
        while(h>0){
            ans = minheap.top().first;
            
            long long int count = 0;

            while(ans == minheap.top().first){
                auto front = minheap.top();
                minheap.pop();
                count = count + att[front.second];
                minheap.push({front.first+cooldown[front.second] , front.second});
                
                if(count>h){
                    break;
                }
            }

            h = h-count;

        }

        cout<<ans<<endl;

    }


    return 0;
}