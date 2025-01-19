#include<iostream>
using namespace std;

bool findtarget(int arr1[], int arr2[], int arr3[], int n, int i, int j, int z , int target, int curr){

    if(curr == target){
        return true;
    }


    bool ans= false ;
    //check first
    if(i<n)
    ans = findtarget(arr1,arr2,arr3,n,i+1,j,z,target, curr|arr1[i]);

    if(ans){
        return true;
    }


    //check second
    if(j<n)
    ans = findtarget(arr1,arr2,arr3,n,i,j+1,z,target, curr|arr2[i]);

    if(ans){
        return true;
    }

    //check third
    if(z<n)
    ans = findtarget(arr1,arr2,arr3,n,i,j,z+1,target, curr|arr3[i]);

    if(ans){
        return true;
    }
    else{
        return false;
    }

}

int main()
{
    ios :: sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin>>t;

    while(t--){
        int n,x;
        cin>>n>>x;

        int arr1[n];
        int arr2[n];
        int arr3[n];

        for(int i=0; i<n; i++){
            cin>>arr1[i];
        }
        for(int i=0; i<n; i++){
            cin>>arr2[i];
        }
        for(int i=0; i<n; i++){
            cin>>arr3[i];
        }


        // if(findtarget(arr1,arr2,arr3,n,0,0,0,x,0)){
        //     cout<<"YES"<<endl;
        // }
        // else{
        //     cout<<"NO"<<endl;
        // }
        int ans = 0;
        for(int i=0; i<n; i++){
            if(( x | arr1[i]) != x){
                break;
            }
            else{
                ans = ans|arr1[i];
            }
        }

        for(int i=0; i<n; i++){
            if( (x | arr2[i]) != x){
                break;
            }
            else{
                ans = ans|arr2[i];
            }
        }
        for(int i=0; i<n; i++){
            if( (x | arr3[i]) != x){
                break;
            }
            else{
                ans = ans | arr3[i];
            }
        }

        if(ans == x){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }


    return 0;
}