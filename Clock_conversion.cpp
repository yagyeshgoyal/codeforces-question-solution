#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;


    cin.ignore();

    while(t--){

        string time;
        // cin>>time;
        getline(cin, time);

        if(time[0] == '0'){
            if(time[1] == '0'){
                time[0] = '1';
                time[1] = '2';
                time = time + " " + "A" + "M";
            }
            else if(time[1] != 0){
                time = time + " " + "A" + "M";
            }
        }
        else if(time[0] == '1'){
            if(time[1] == '0' || time[1] == '1'){
                time = time + " " + "A" + "M";
            }
            else if(time[1] == '2'){
                time = time + " " + "P" + "M";
            }
            else {
                time[0] = '0';
                // time[1] = char(int(time[1]-'0' )- 2);
                if(time[1] == '3'){
                    time[1] = '1';
                }
                else if(time[1] == '4'){
                    time[1] = '2';
                }
                else if(time[1] == '5'){
                    time[1] = '3';
                }
                else if(time[1] == '6'){
                    time[1] = '4';
                }
                else if(time[1] == '7'){
                    time[1] = '5';
                }
                else if(time[1] == '8'){
                    time[1] = '6';
                }
                else if(time[1] == '9'){
                    time[1] = '7';
                }
                
                time = time + " " + "P" + "M";
            }
        }
        else if(time[0] == '2'){
            if(time[1] == '0' ){
                time[0] = '0';
                // time[1] = char((time[1]-'0') + 8);
                time[1] = '8';
                time = time + " " + "P" + "M";
            }
            else if( time[1] == '1'){
                time[0] = '0';
                // time[1] = char((time[1]-'0') + 8);
                time[1] = '9';
                time = time + " " + "P" + "M";
            }
            else{
                time[0] = '1';
                // time[1] = char((time[1]-'0') -2);
                if(time[1] == '2'){
                    time[1] = '0';
                }
                else if(time[1] == '3'){
                    time[1] = '1';
                }
                
                time = time + " " + "P" + "M";
            }
        }

        cout<<time<<endl;
    }


    return 0;
}