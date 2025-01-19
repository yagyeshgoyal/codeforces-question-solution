#include<iostream>
using namespace std;

void mergeSortString(string &s){

    if(s.length() <= 1){
        return ;
    }

    int start = 0;
    int end = s.length() -1 ;
    int mid = (s.length())/2;

    string first = "";
    string second = "";

    for(int i=start; i<mid ; i++){
        first.push_back(s[i]);
    }

    for(int i=mid; i<=end ; i++){
        second.push_back(s[i]);
    }

    mergeSortString(first);
    mergeSortString(second);

    int i=0;
    int j=0;
    int k = 0;

    while(i<first.length() && j<second.length()){

        int temp = (second[j]-'0') - j - first.length()  + k;
        // cout<<i<<" "<<j<<" "<<temp<<" "<<first<<" "<<second<<endl; 
        if((first[i]-'0') < temp ){
            s[k] = (temp + '0');
            j++;
            k++;
        }
        else{
            s[k] = first[i];
            i++;
            k++;
        }
    }

    // cout<<i<<" "<<j<<" "<<first<<" "<<second<<" "<<s<<endl;

    while(i<first.length()){
        s[k] = first[i];
        i++;
        k++;
        // cout<<i<<" "<<j<<" "<<first<<" "<<second<<" "<<s<<endl;
    }

    while(j<second.length()){
        s[k] = second[j];
        j++;
        k++;
    }

    return ;


}

int main()
{
    int t;
    cin>>t;

    while(t--){
        string s;
        cin>>s;

        mergeSortString(s);

        cout<<s<<endl;
    }


    return 0;
}