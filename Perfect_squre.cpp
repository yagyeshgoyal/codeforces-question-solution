#include<iostream>
#include<stack>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        char arr[n][n];
        
        
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cin>>arr[i][j];
            }
        }

        long long int count = 0;
        int i=0;
        int j= n-1;
        while(i<j){
            char ch = max(arr[i][i],max(arr[j][j],max(arr[i][j],arr[j][i])));
            
            count = count + abs((arr[i][i]-'a')-(ch-'a'));
            count = count + abs((arr[i][j]-'a')-(ch-'a'));
            count = count + abs((arr[j][i]-'a')-(ch-'a'));
            count = count + abs((arr[j][j]-'a')-(ch-'a'));

            int  k = i+1;
            int p = j-1;
            while(k<j && p>0){
                char cha = max(arr[i][k],max(arr[k][j],max(arr[p][i],arr[j][p])));
            
                count = count + abs((arr[i][k]-'a')-(cha-'a'));
                count = count + abs((arr[p][i]-'a')-(cha-'a'));
                count = count + abs((arr[j][p]-'a')-(cha-'a'));
                count = count + abs((arr[k][j]-'a')-(cha-'a'));

                k++;
                p--;
            }
            i++;
            j--;
        }

        cout<<count<<endl;

    }


    return 0;
}