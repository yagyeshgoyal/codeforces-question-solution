#include<iostream>
using namespace std;

#define modi 998244353


int findtiles(int n){
    if(n == 1){
        return 2;
    }
    if(n<1){
        return 1;
    }

    if(n%2 == 0){
        return (findtiles(n/2)%modi * 1ll * findtiles(n/2)% modi)%modi;
    }
    else{
        return (findtiles(n/2)%modi * 1ll * findtiles(n/2)% modi * 2)%modi;
    }
}

int main()
{

    int a,b;

    cin>>a>>b;

    int sum  = a+b;

    int ans = findtiles(sum);

    cout<<ans<<endl;

    return 0;
}