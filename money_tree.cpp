// #include<iostream>
// using namespace std;

// int main(){

// 	int t;
// 	cin>>t;

// 	while(t--){
// 		int n,k;
// 		cin>>n>>k;
		
// 		int fruit[n],height[n];
// 		for(int i=0; i<n; i++){cin>>fruit[i];}
// 		for(int i=0; i<n; i++){cin>>height[i];}
		
// 		int ans = 0;
		
// 		int i=0,j=1,p=0;
// 		int count = fruit[0];
//         if(count>k){
//             count = 0;
//             i++;
//         }

// 		while(j<n){
// 			if(height[p]%height[j] == 0){
// 				if(count+ fruit[j] <= k){
//                     count = count+fruit[j];
//                     p++;
//                     j++;
//                 }
// 				else{
//                     ans = max(ans,j-i); 
//                     count = count-fruit[i]; 
//                     i++; 
//                 }
// 			}
// 			else{
// 				if(count<=k)
//                 ans = max(ans,j-i);
//                 count = fruit[j];
//                 i=j;
// 				p = j;
//                 j++;
//             }
//             // cout<<ans<<endl;
// 		}
// 		// cout<<j<<" "<<i<<endl;
// 		if(count<=k)
//         ans = max(ans,j-i);

		
// 		cout<<ans<<endl;

// 	}

// return 0;
// }



#include <bits/stdc++.h>
using namespace std;
 
 
bool get(int dist,int length[],int n, int k, int pref[])
{
    bool found = false;
    for(int i = 0; i < n-dist+1; i++)
    {
        if(length[i] < dist){continue;}
        int sum = pref[i+dist]-pref[i];
        if(sum <= k)
        {
            found = true;
            break;
        }
    }
    return found;
}
 
void solve()
{	
	int n,k;
    cin >> n >> k;
	int pref[n+1];
    pref[0] = 0;

	int a[n];
	int h[n];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        pref[i+1] = pref[i]+a[i];
    }
    for(int i = 0; i < n; i++)
    {
        cin >> h[i];
    }
	int length[n];
    length[n-1] = 1;
    for(int i = n-2; i >= 0; i--)
    {
        if(h[i]%h[i+1] == 0)
        {
            length[i] = length[i+1]+1;
        }
        else
        {
            length[i] = 1;
        }
    }
    int l = 1, r = n;
    while(l <= r)
    {
        int mid = (l+r)/2;
        if(get(mid, length, n, k, pref))
        {
            l = mid+1;
        }
        else
        {
            r = mid-1;
        }
    }
    cout << r << endl;
}
 
int main() {
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}