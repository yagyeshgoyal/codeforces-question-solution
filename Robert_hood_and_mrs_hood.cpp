#include<bits/stdc++.h>
using namespace std;
using ll = long long;
 

 
int main() {
    int T;
        cin >> T;
 
        while (T--) {
            int n, d, noOfJob;
                cin >> n >> d >> noOfJob;
            
            vector<int> l(noOfJob);
            vector<int> r(noOfJob);
                for (int i = 0; i < noOfJob; i++)     cin >> l[i] >> r[i];

            // if (d == n) {
            //     cout << "1 " << "1" << endl;
            //     continue;
            // }
            
            sort(l.begin(), l.end());   
            sort(r.begin(), r.end());

            vector<int>left(n+5,noOfJob);
            vector<int>right(n+5,0);


            int p = 0;
            for(int i=0; i<noOfJob; i++){
                for(int k = p; k<=l[i]; k++){
                    left[k] = noOfJob-i;
                }
                p = l[i] + 1;
            }

            for(int k = p; k<= n+4; k++){
                left[k] = 0;
            }

            

             p = 0;
            for(int i=0; i<noOfJob; i++){
                for(int k = p; k<r[i]; k++){
                    right[k] = i;
                }
                p = r[i];
            }

            for(int k = p; k<= n+4; k++){
                right[k] = noOfJob;
            }

           

            // cout<<"kl"<<endl;
 
            int mini = INT_MAX;
            int maxi = INT_MIN;
            int maxidx = 0;
            int minidx = 0;
 
                for (int i = 0; i < n-d+1; i++) {
                    int sum;
                    
                    // if (i == 0)     sum = k - firstStarting(a, i+d+1, k);
                    // else if (i+d == n)   sum = k - lastEnding(b, i, k);
                    // else    sum = k - (lastEnding(b, i, k) + firstStarting(a, i+d+1, k));

                    // sum = noOfJob - left[i];
                    // sum = sum - (noOfJob - right[i+d+1]);
                    sum =  noOfJob -  (left[i+d+1] + right[i]);
                    // cout<<sum<<" ";


                    if (sum > maxi) {
                        maxi = sum;
                        maxidx = i;
                    }
                    if (sum < mini) {
                        mini = sum;
                        minidx = i;
                    }
                }   
                // cout<<endl;
            cout << maxidx + 1 << " " << minidx +1 << endl;
        }
}