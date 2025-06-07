#include<iostream>
#include<vector>
#include<stack>
using namespace std;

void solve(int c){
    int n;
    cin>>n;

    int arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];

    }

    // if(c == 465){
    //     string temp = to_string(n);
    //     temp = temp + "&";
    //     for(int i=0; i<n; i++){
    //         temp += to_string(arr[i]) + "&";
    //     }
    //     cout<<temp<<endl;
    //     cout<<endl;
    // }
    stack<int>s1;
    stack<int>s2;
    s1.push(arr[0]);
    for(int i=1; i<n; i++){
        if(arr[i] <= s1.top() && s2.size()>0 && arr[i] <= s2.top()){
            // cout<<arr[i]<<" "<<s1.top()<<" "<<s2.top()<<endl;
            if(s1.top() <= s2.top()){
                // cout<<"k"<<endl;
                s1.push(arr[i]);
            }
            else{
                s2.push(arr[i]);
            }
        }
        else if(arr[i]<= s1.top()){
            s1.push(arr[i]);
        }
        else if(s2.size() == 0){
            s2.push(arr[i]);
        }
        else if(arr[i] <= s2.top()){
            s2.push(arr[i]);
        }
        else {
            if(s1.top() <= s2.top()){
                s1.push(arr[i]);
            }
            else{
                s2.push(arr[i]);
            }
        }
    }

    int count = 0;
    int num = s1.top();
    s1.pop();
    // cout<<num<<endl;

    while(s1.size()>0){
        if(s1.top() < num){
            count++;
        }
        num = s1.top();
        s1.pop();
        // cout<<num<<endl;
    }

    if(s2.size()>0){
        num = s2.top();
        s2.pop();
        while(s2.size()>0){
            if(s2.top() < num){
                count++;
            }
            num = s2.top();
            s2.pop();
        }
    }

    cout<<count<<endl;


    
    return ;
}

int main()
{
    int t;
    cin>>t;
    int count = 0;
    while(t--){
        count++;
        solve(count);
    }


    return 0;
}