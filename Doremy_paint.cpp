#include<iostream>
using namespace std;

void check(int arr[], int n){
    if(n==2)
    {
        cout<<"YES"<<endl;
        return ;
    }

    int a=1;
    int avalue=arr[0];
    int b=0;
    int bvalue;
    int i;
    for(i=1;i<n;i++){
        if(arr[i]==arr[i-1])
        a++;
        else{
            bvalue=arr[i];
            b++;
            break;
        }
    }
    int k=i;
    for(k=i+1 ; k<n ; k++){
        if(arr[k]==avalue)
        a++;
        else if(arr[k]==bvalue)
        b++;
        else
        break;
    }

    if(k<n)
    cout<<"NO"<<endl;
    else if((n==3 && a==2 && b==1) ||(n==3 && b==2 && a==1) )
    cout<<"YES"<<endl;
    else if((a!=0 && b==0) || (a==b && n%2==0) || (n%2==1 && a-b==1) || (n%2==1 && b-a==1))
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;

    return ;

}

int main()
{

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        check(arr,n);
    }

    return 0;
}