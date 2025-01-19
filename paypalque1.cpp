#include <bits/stdc++.h>
#include <vector>
#include <map>
#include <algorithm>
#include <string>
#include <set>
using namespace std;

vector<string> makestring(vector<char>&v, int n) {
    vector<string>vs;
    int size = v.size();

    string temp(n, v[0]);

    while (1) {
        vs.emplace_back(temp);
        
        int i = n - 1;
        while (i >= 0 and temp[i] == v[size - 1]) {
            i--;
        }
        if (i < 0) break;

        auto it = find(v.begin(), v.end(), temp[i]) ;
        temp[i] = v[it - v.begin() + 1];

        for(int j=i+1; j<temp.size(); j++) temp[j] = v[0];
        
    }

    return vs;
}

int countcopies( map<char, int> &mps, string &candidate) {
    int copies = 0;

    for (const auto &e : mps) {
        char ch = e.first;
        int needed = e.second;
        // int present = count(candidate.begin(), candidate.end(), ch);
        int present = 0;
        for(auto j : candidate){
            if(j==ch){
                present++;
            }
        }

        if (present == 0) return INT_MAX;
        
        int count = needed + present - 1;
        copies = max(copies,( (count) / present));
    }

    return copies;
}

string selectString(vector<string>&vps, map<char, int>&mps) {
    string result ;
    int mncopies = INT_MAX;

    for (auto &candidate : vps) {
        int copy = countcopies( mps, candidate);
        if (copy < mncopies or (copy == mncopies and candidate < result)) 
            mncopies = copy,
            result = candidate;
        
    }

    return result;
}

// Main function to get lexicographically smallest string
string getLexSmallestString(int n, string &dataToBeGenerated) {

    set<char>sts;
    map<char,int>mps;

    for(int i=0; i<dataToBeGenerated.size(); i++)
        sts.insert(dataToBeGenerated[i]),
        mps[dataToBeGenerated[i]]++;


    if(sts.size()>n) return "-1";

    // vector<char> d = distinct_chars(mps);
    vector<char>distintchar;
    for(auto i : sts)
        distintchar.push_back(i);
    // }
    vector<string>newv = makestring(distintchar, n);
    return selectString(newv, mps);
}

int main() {
    int n = 4;
    string dataToBeGenerated = "abacbc";
    
    // cout<<count.size()<<endl;
    
    
    string result = getLexSmallestString(n, dataToBeGenerated);
    cout << "Lexicographically smallest string: " << result << std::endl;
   
    return 0;
}