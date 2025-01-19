#include<iostream>

using namespace std;
string input ;
int pos = 0;

bool match(char ch){
    if(pos<input.size() &&input[pos] == ch){
        pos++;
        return true;
    }

    return false;
}

bool A(){
    int temp = pos;
    if(match('a') && match('b')){
        return true;
    }

    pos = temp;

    if(match('a')){
        return true;
    }

    pos = temp;

    return false;
}

bool S(){
    int temp = pos;
    if(match('c') && A() && match('d')){
        return true;
    }

    pos = temp;

    return false;
}


int main(){
    cout<<"Enter a string ";
    
    cin>>input;

    if(S() && pos == input.size()){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

    return 0;
}