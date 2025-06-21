#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<unordered_map>
#include<queue>
#include<cmath>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    vector<long long int>arr;
    // arr.push_back(0);
    for(int i = 0; i<n; i++){
        int a;
        cin>>a;
        arr.push_back(a);
    }

    // long long int a = -1;
    // long long int b = -1;


    // vector<long long int>v1;
    // vector<long long int>v2;
    // vector<long long int>v3;
    // vector<long long int>v4;

    // v1.push_back(0);
    // v2.push_back(0);
    // v3.push_back(0);
    // v4.push_back(0);

    // for(int i = 1; i<=n; i++){
    //     if(arr[i]>0){
    //         v1.push_back(v1[i-1]+1);
    //         if(b != -1){
    //             v2.push_back(v2[b]);
    //         }
    //         else{
    //             v2.push_back(0);
    //         }
    //         v3.push_back(0);
    //         v4.push_back(v4[i-1] + v2[i]);
    //     }
    //     else{
    //         v1.push_back(0);
    //         if(arr[i-1]>0){
    //             v2.push_back(v1[i-1]+1);
    //         }
    //         else{
    //             v2.push_back(1);
    //         }
    //         if(b == -1){
    //             b = i;
    //             v3.push_back(0);
    //         }
    //         else if(a == -1){
    //             a = b;
    //             b = i;
    //             v3.push_back(0);
    //         }
    //         else{
    //             v3.push_back(v2[a] + v3[a]);
    //             a = b;
    //             b = i;
    //         }

    //         v4.push_back(v4[i-1] + v2[i] + v3[i]);
    //     }
    // }

    // long long int num = (1ll*n*(n+1))/2;

    // cout<<v4[n]<<" " << num-v4[n]<<endl;

    int cnt1 = 0, cnt2 = 0;
	int bal = 0;
	long long int  ansP = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] == 0) {
			cnt1 = 0, cnt2 = 0, bal = 0;
			continue;
		}
		if (bal % 2 == 0) {	
			cnt1++;
		} else {
			cnt2++;
		}
		if (arr[i] < 0) {
			bal++;
		}
		if (bal % 2 == 0) {
			ansP += cnt1;
		} else {
			ansP += cnt2;
		}
	}
	cout << n * 1ll * (n + 1) / 2  - ansP << ' ' << ansP << endl;

    return 0;
}