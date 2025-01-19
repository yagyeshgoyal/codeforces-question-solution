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

        long long int A[n];
        for(int i=0; i<n; i++){
            cin>>A[i];
        }

        set<pair<long long int,long long int>> s;
        long long int B[n];
        for(int i=0; i<n; i++){
            cin>>B[i];
            pair<long long int,long long int> p = make_pair(A[i]+B[i]-1, i);
            s.insert(p);
        }
        int temp =0;
        long long int sum = 0;
        while(!s.empty()){
            pair<long long int,long long int> front = *s.rbegin();
            s.erase(front);
            if(temp == 0){
                sum = sum + A[front.second]-1;
            }
            else{
                sum = sum - B[front.second] + 1;
            }

            temp = (temp+1)%2;

        }
        cout<<sum<<endl;

    }


    return 0;
}