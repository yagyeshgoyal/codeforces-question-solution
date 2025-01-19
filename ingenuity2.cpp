#include<iostream>
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){

        int n;
        cin>>n;

        string s;
        cin>>s;
        
        int countN = 0, countS=0,countE=0,countW=0;
        
        for(int i=0; i<n; i++){
            if(s[i] == 'N') countN++;
            else if(s[i] == 'S') countS++;
            else if(s[i] == 'E') countE++;
            else if(s[i] == 'W') countW++;
        }

        
        bool flage = true;
        if(abs(countN-countS)%2 == 1 || abs(countE-countW)%2 == 1){
            flage = false;
        }

        int countRover = 0;
        int countHelicopter = 0;

        if(flage == true){
            bool flageN = true;
            bool flageS = true;
            bool flageE = false;
            bool flageW = false;

            string ans = "";
            for(int i=0; i<n; i++){
                if(s[i] == 'N'){ 
                    if(flageN == true){
                        ans.push_back('R'); 
                        countRover++; 
                        flageN = false;
                    } 
                    else{
                        ans.push_back('H'); 
                        countHelicopter++; 
                        flageN = true;
                    }
                }
                else if(s[i] == 'S'){ 
                    if(flageS == true){
                        ans.push_back('R'); 
                        countRover++; 
                        flageS = false;
                    } 
                    else{
                        ans.push_back('H'); 
                        countHelicopter++; 
                        flageS = true;
                    }
                }
                else if(s[i] == 'E'){ 
                    if(flageE == true){
                        ans.push_back('R'); 
                        countRover++; 
                        flageE = false;
                    } 
                    else{
                        ans.push_back('H'); 
                        countHelicopter++; 
                        flageE = true;
                    }
                }
                else if(s[i] == 'W'){ 
                    if(flageW == true){
                        ans.push_back('R'); 
                        countRover++; 
                        flageW = false;
                    } 
                    else{
                        ans.push_back('H'); 
                        countHelicopter++; 
                        flageW = true;
                    }
                }
            }

            if(countRover>0 && countHelicopter>0) {
                cout<<ans<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        
        }
        else {
            cout<<"NO"<<endl;
        }

    }


    return 0;
}