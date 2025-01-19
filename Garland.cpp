#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        string s;
        cin>>s;
        int a=0;
        int arr[10]={0};
        for(int i=0;i<s.length();i++){
            arr[s[i]-'0']=arr[s[i]-'0']+1;
            a=max<int>(a,arr[s[i]-'0']);
        }

        if(a==1)
        cout<<4<<endl;
        else if(a==4)
        cout<<-1<<endl;
        else if(a==3)
        cout<<6<<endl;
        else
        cout<<4<<endl;

        
    }


    return 0;
}