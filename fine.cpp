#include<iostream>
using namespace std;

int main()
{

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        string s;
        int m=200000;
        int p,k;
        p=m;
        k=m;
        int ans=-1;
        int ans1=-1;
        int ans2=-1;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            cin.ignore();
            getline(cin,s);
            // cout<<s[0]<<" "<<s[1]<<endl;
            if(s[0]=='1' && s[1]=='1')
            {
                m=min<int>(m,arr[i]);
                if(m==arr[i])
                ans=i;    
            }
            else if(s[0]=='1' && s[1]=='0'){
              
                p=min<int>(p,arr[i]);
                if(p==arr[i])
                ans1=i;
            }
            else if(s[0]=='0' && s[1]=='1'){
            

                k=min<int>(k,arr[i]);
                if(k==arr[i])
                ans2=i;
            }
        }
        long long int q=arr[ans1]+arr[ans2];
        if(n==1 && s[0]=='1'&&s[1]=='1')
        cout<<arr[0]<<endl;
        else if(ans!=-1 && arr[ans]<q){
            cout<<arr[ans]<<endl;
            // return;
        }
        else if(ans1!=-1 && ans2!=-1){
            cout<<arr[ans1]+arr[ans2]<<endl;
            // return;
        }
        // else if(ans1!=-1 && ans2==-1){
        //     cout<<arr[ans1]<<endl;
        // }
        // else if(ans2!=-1 && ans1==-1){
        //     cout<<"p"<<endl;
        //     cout<<arr[ans2]<<endl;
        // }
        else
        cout<<-1<<endl; 


    }

    return 0;
}