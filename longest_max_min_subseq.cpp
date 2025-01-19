#include<iostream>
#include<map>
#include<set>
#include<vector>
#include<queue>
#include<limits.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        
        
        int arr[n];
        map<int,int>mp;
        set<int>s;
        for(int i=0; i<n; i++){
            cin>>arr[i];
            mp[arr[i]]++;
            s.insert(arr[i]);
        }

        set<int>st;
        map<int,int>mp2;
        queue<int>q;

        vector<int>ans;
        int k = 0;

        for(int i=0; i<n; i++){
            if(mp[arr[i]] == 0){  //already in the answer array;
                continue;
            }
            else if(k%2 == 0){  // for odd position;
                

                if(mp[arr[i]] == 1){ // at positon element is last 

                    int kt = INT_MIN;
                    if(st.size()>0)
                     kt = *(st.rbegin()); //find max value in previous set 

                    if(kt>arr[i]){ 
                        ans.push_back(kt);
                        // cout<<0<<" "<<kt<<endl;
                        mp[kt] = 0;
                        s.erase(kt);

                        // remove all element before the kt value from the previous set;
                        while(q.size() > 0 && q.front() != kt){
                            mp2[q.front()]--;
                            if(mp2[q.front()] <= 0){
                                mp2[q.front()] = 0;
                                st.erase(q.front());
                            }
                            q.pop();
                        }

                        mp2[q.front()] = 0;
                        st.erase(q.front());
                        q.pop();

                        k++;
                        i--;
                    }
                    else{ // no one value is greater than arr[i];
                        ans.push_back(arr[i]);
                        // cout<<1<<endl;
                        mp[arr[i]] = 0;
                        s.erase(arr[i]);

                        q.push(arr[i]);

                        //remove all element before the arr[i]  form the previous set;
                        while(q.size() > 0 && q.front() != arr[i]){
                            mp2[q.front()]--;
                            if(mp2[q.front()] <= 0){
                                mp2[q.front()] = 0;
                                st.erase(q.front());
                            }
                            q.pop();
                        }

                        mp2[q.front()] = 0;
                        st.erase(q.front());
                        q.pop();


                        k++;
                    }
                    
                }
                else{ // if arr[i] is not last in the array

                    auto it = s.find(arr[i]);
                    int dis = distance(s.begin(),it); // find index of arr[i] in set;
                    if(dis == s.size()-1){ 
                        ans.push_back(arr[i]);
                        // cout<<3<<endl;
                        mp[arr[i]] = 0;
                        s.erase(arr[i]);

                        q.push(arr[i]);
                        
                        //remove all element before the arr[i] form the previous set;
                        while(q.size() > 0 && q.front() != arr[i]){
                            mp2[q.front()]--;
                            if(mp2[q.front()] <= 0){
                                mp2[q.front()] = 0;
                                st.erase(q.front());
                            }
                            q.pop();
                        }

                        mp2[q.front()] = 0;
                        st.erase(q.front());
                        q.pop();


                        k++;
                    }
                    else{ // arr[i] is not last in the set
                        mp[arr[i]]--;

                        // push in the previous set;
                        st.insert(arr[i]);
                        q.push(arr[i]);
                        mp2[arr[i]]++;
                    }
                }
            }
            else{ // for even positon , find minimum value;
                if(mp[arr[i]] == 1){

                    int kt = INT_MAX;
                    if(st.size()>0)
                    kt = *(st.begin()); //find min value in previous set
                    if(kt<arr[i]){
                        ans.push_back(kt);
                        // cout<<4<<endl;
                        // st.erase(kt);
                        mp[kt] = 0;
                        s.erase(kt);

                        //remove all element before the kt value form the previous set;
                        while(q.size() > 0 && q.front() != kt){
                            mp2[q.front()]--;
                            if(mp2[q.front()] <= 0){
                                mp2[q.front()] = 0;
                                st.erase(q.front());
                            }
                            q.pop();
                        }

                        mp2[q.front()] = 0;
                        st.erase(q.front());
                        q.pop();

                        
                        k++;
                        i--;
                    }
                    else{
                        ans.push_back(arr[i]);
                        // cout<<5<<endl;
                        mp[arr[i]] =0;
                        s.erase(arr[i]);

                        q.push(arr[i]);

                        //remove all element before the  arr[i] form the previous set;
                        while(q.size() > 0 && q.front() != arr[i]){
                            mp2[q.front()]--;
                            if(mp2[q.front()] <= 0){
                                mp2[q.front()] = 0;
                                st.erase(q.front());
                            }
                            q.pop();
                        }

                        mp2[q.front()] = 0;
                        st.erase(q.front());
                        q.pop();

                    k++;
                    }
                    
                }
                else{ // arr[i] is not last in the array;
                    auto it = s.find(arr[i]);
                    int dis = distance(s.begin(),it); // find the position of arr[i] in the set
                    if(dis == 0){
                        ans.push_back(arr[i]);
                        // cout<<6<<endl;
                        mp[arr[i]] = 0;
                        s.erase(arr[i]);

                        q.push(arr[i]);

                        //remove all element before the arr[i] form the previous set;
                        while(q.size() > 0 && q.front() != arr[i]){
                            mp2[q.front()]--;
                            if(mp2[q.front()] <= 0){
                                mp2[q.front()] = 0;
                                st.erase(q.front());
                            }
                            q.pop();
                        }

                        mp2[q.front()] = 0;
                        st.erase(q.front());
                        q.pop();

                        k++;
                    }
                    else{
                        // arr[i] in not first in the set;
                        mp[arr[i]]--;

                        // insert in the previous set;
                        st.insert(arr[i]);
                        q.push(arr[i]);
                        mp2[arr[i]]++;
                    }
                }
            }
            
            if(s.size() == 0){
                break;
            }
            
        }

        cout<<ans.size()<<endl;
        
        for(auto i : ans){
            cout<<i<<" ";
        }
        cout<<endl;

    }


    return 0;
}