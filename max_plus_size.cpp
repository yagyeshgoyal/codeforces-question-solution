#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int maxOfOddPos = 0;
        int maxOfEvenPos = 0;
        int countOddPosNum = 0;
        int countevenPosNum = 0;

        for(int i=0; i<n; i++){
            int a;
            cin>>a;
            if(i%2 == 0){
                maxOfEvenPos = max(maxOfEvenPos, a);
                countevenPosNum++;
            }
            else{
                maxOfOddPos = max(maxOfOddPos, a);
                countOddPosNum++;
            }
        }

        cout<<max(maxOfEvenPos + countevenPosNum , maxOfOddPos + countOddPosNum)<<endl;
    }


    return 0;
}