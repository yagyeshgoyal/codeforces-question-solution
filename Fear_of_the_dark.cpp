#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--){
        float p1,p2,a1,a2,b1,b2;
        cin>>p1>>p2>>a1>>a2>>b1>>b2;

        float PA = hypot((p1-a1),(p2-a2));

        float PB = hypot((p1-b1),(p2-b2));

        float AB = hypot((a1-b1),(a2-b2));
        AB = AB/2;

        float OA = hypot((0-a1),(0-a2));

        float OB = hypot((0-b1),(0-b2));


        float CA = max(PA,OA);

        float CB = max(PB,OB);

        float CAB = max(OA, max(PB,AB));

        float CBA = max(OB, max(PA,AB));

        float result = min(min(CA,CB), min(CAB,CBA));

        cout<<fixed<<setprecision(10)<<result<<endl;
        

        
        
    }


    return 0;
}