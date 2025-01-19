#include<iostream>
using namespace std;

long double findans2(int per[], int arr[], int a, int k, int pos){

    if(k==0){
        return 0;
    }

    if(per[a-1] == pos){
        return 1ll*arr[a-1]*k;
    }

    //stayit
    long double ans1 = 1ll*arr[a-1]*k;

    //not stay it 
    long double ans2 = arr[a-1] + findans2(per,arr,per[a-1],k-1,pos);


    return max(ans1,ans2);
}

long double  findans(int per[], int arr[], int a ,int k){

    if(k==0){
        return 0;
    }
    

    //stayit
    long double ans1 = 1ll*arr[a-1]*k;

    //not stay it 
    long double ans2 = arr[a-1] + findans2(per,arr,per[a-1],k-1,a);

    return max(ans1,ans2);
}

int main()
{
    int t;
    cin>>t;

    while(t--){
        int n,k,a,b;
        cin>>n>>k>>a>>b;

        int per[n];
        for(int i=0; i<n; i++){
            cin>>per[i];
        }

        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }

        long double ans1 = 0;

        ans1 = findans(per,arr,a,k);


        long double ans2 = 0;

        ans2 = findans(per,arr,b,k);

        if(ans1>ans2){
            cout<<"Bodya"<<endl;
        }
        else if(ans1<ans2){
            cout<<"Sasha"<<endl;
        }
        else{
            cout<<"Draw"<<endl;
        }
    }


    return 0;
}