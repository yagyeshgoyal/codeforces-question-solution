#include<iostream>
#include<queue>
// #include<pair>
using namespace std;

int main()
{

    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        string ys ;
        getline(cin, ys);

        deque<pair<int,char>>yupper_letter;
        deque<pair<int,char>>ylower_letter;

        int k = 0;
        for(int i=0; i<ys.size(); i++){
            if(ys[i] == 'B'){
                if(!yupper_letter.empty()){
                    yupper_letter.pop_back();
                }
            }
            else if(ys[i] == 'b'){
                if(!ylower_letter.empty()){
                    ylower_letter.pop_back();
                }
            }
            else if(ys[i]-'a' >=0 && ys[i]-'a'<26){
                pair<int,char>yp = make_pair(k,ys[i]);
                ylower_letter.push_back(yp);
                k++;
            }
            else{
                pair<int,char>yp = make_pair(k,ys[i]);
                yupper_letter.push_back(yp);
                k++;
            }
        }

        while(!yupper_letter.empty() && !ylower_letter.empty()){
            pair<int,char>front1 = yupper_letter.front();
            pair<int,char>front2 = ylower_letter.front();

            if(front1.first < front2.first){
                cout<<front1.second;
                yupper_letter.pop_front();
            }
            else{
                cout<<front2.second;
                ylower_letter.pop_front();
            }
        }

        while(!yupper_letter.empty()){
            pair<int,char>front = yupper_letter.front();
            cout<<front.second;
            yupper_letter.pop_front();
        }
        while(!ylower_letter.empty()){
            pair<int,char>front = ylower_letter.front();
            cout<<front.second;
            ylower_letter.pop_front();
        }

        cout<<endl;

        


    }

    return 0;
}