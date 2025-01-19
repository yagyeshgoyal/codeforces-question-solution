#include<iostream>
// #include<unordered_map>
#include<vector>
// #include<set>
using namespace std;



int main()
{

    int t;
    cin>>t;
    while(t--){
        int n,v,No_Of_days;
        cin>>n>>v>>No_Of_days;

        // int arr[n];
        vector<int>arr;
        for(int i=0; i<n; i++){
            int a;
            cin>>a;
            arr.push_back(a);
        }

        vector<int> sequence;
        for(int i=0; i<v; i++){
            int a;
            cin>>a;
            sequence.push_back(a);
        }

    


        // unordered_map<vector<int>,int> map(vector<int>(n+1, -1), 0);
        long long int ans = 0;

        // vector<int> days;
        for(int i=0; i<min(3*n,No_Of_days); i++){
            int a = sequence[i%v];
            // days.push_back(a);
            // cout<<days[i]<<" ";
            long long int count = 0;
            for(int j=0; j<n; j++){
                if(arr[j]==j+1){
                    count++;
                }
                if(j<a){
                    arr[j]++;
                }
            }
            count = count + (No_Of_days - i-1)/2;
            ans = max(ans, count);
        }
        // cout<<endl;
        // int index = 0;
        // int ans = solve1( arr,  days, index);

        cout<<ans<<endl;
        
    }

    return 0;
}