#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,a;
        cin>>n>>a;
        int A[n],B[n];
        int sum=0;
        for(int i=0;i<n;i++)
        cin>>A[i];
        for(int i=0;i<n;i++)
        {cin>>B[i];
        sum=sum+B[i];}

        // int count=0;
        // int temp=a;
        // while(temp>=0 ){
        //     count=count+1;
        //     temp=temp-B[count-1]-1;

        // }
        // if(a<B[0])
        // cout<<-1<<endl;
        // else if(a>=sum+n-1)
        // cout<<n<<endl;
        // else
        // cout<<count<<endl;

        int index = -1;
        
        for(int i=0; i<n; i++){
            if(A[i] <= a){
                if(index == -1){
                    index = i;
                }
                else{
                    if(B[index]<B[i]){
                        index = i;
                    }
                }
            }

            a--;
        }

        if(index != -1){
            cout<<index+1<<endl;
        }
        else{
            cout<<index<<endl;
        }
    }


    return 0;
}