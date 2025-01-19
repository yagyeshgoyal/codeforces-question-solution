#include <bits/stdc++.h>
using namespace std;
struct Results
{
    string set_name;
    vector<string> selected_cards;
};
bool checkalpha(char a)
{
    if (a >= 'A' and a <= 'Z')
        return true;
    return false;
}
int change(char c)
{
    switch (c){
    case 'J': return 11;
    case 'Q': return 12;
    case 'K': return 13;
    }
    return 14;
}
char change2(int c)
{
    if(c==11){
        return 'J';
    }
    else if(c==12){
        return 'Q';
    }
    else if(c==13){
        return 'K';
    }
    else{
        return 'A';
    }
}
void push(pair<int,char>&k, vector<string>&select){
    string s = "";
    if (k.first <= 10)
        s = s + to_string(k.first);
    else
        s += change2(k.first);
    s.push_back(k.second);
    select.push_back(s);
}
Results solution(vector<string> &v)
{
    Results ans;
    vector<string> select;
    int n = v.size();
    vector<pair<int, char>> cardsare(n);
    for (int i = 0; i < n; i++)
    {
        int k = v[i].size();
        cardsare[i].second = v[i][k - 1];
        char a = v[i][0];
        if (checkalpha(a))
            cardsare[i].first = change(v[i][0]);
        else
            cardsare[i].first = stoi(v[i].substr(0, k - 1));
    }
    unordered_map<char, int> suitC;
    map<int, int, greater<int>> rankC;
    for (auto &i : cardsare)
    {
        suitC[i.second]++;
        rankC[i.first]++;
    }

    // 6th SET
    int p =  0 , t = 0;;
    for (auto i : rankC)
    {
        if (i.second >= 3 and (!t))
        {
            t = i.first;
            continue;
        }
        if (i.second >= 2 and (!p)) p = i.first;
    }
    if(p&&t){
        ans.set_name = "a triple and a pair";
        int cp{}, ct{};
        for(auto&i:cardsare){
            if((i.first==p and cp<2) or (i.first==t and ct<3)){
                push(i, select);
                cp += (i.first == p);
                ct += (i.first == t);
            }
        }
        ans.selected_cards = select;
        return ans;
    }
    // 5th Set
    char higher='A';
    for(auto&i:suitC){
        if(i.second>=5 and higher<i.first){
            higher = i.first;
        }
    }
    if(higher!='A'){
        ans.set_name = "suit";
        for(auto&i:cardsare){
            if(i.second==higher and select.size()<5){
                push(i, select);
            }
        }
        ans.selected_cards = select;
        return ans;
    }
    // 4th Set
    int count{1}, mx{1},ind{};
    for (int i{1}; i < cardsare.size();i++)
    {
        if(cardsare[i].first==cardsare[i-1].first+1){
            count++;
        }
        else{
            count = 1;
            ind = i;
        }
        mx = max(count, mx);
        if(mx>=5)
            break;
    }
    if(mx>=5){
        ans.set_name = "five in a row";
        for (int i = ind; i < ind+5;i++){
            push(cardsare[i], select);
        }
        ans.selected_cards = select;
        return ans;
    }
    // 3rd Set
    if(t){
        ans.set_name = "triple";
        int ct = 0;
        for (auto &i : cardsare)
        {
            if (i.first == t and ct < 3)
            {
                push(i, select);
                ct++;
            }
        }
        ans.selected_cards = select;
        return ans;
    }
    if(p){
        ans.set_name = "pair";
        int cp = 0;
        for (auto &i : cardsare)
        {
            if (i.first == p and cp < 2)
            {
                push(i, select);
                cp++;
            }
        }
        ans.selected_cards = select;
        return ans;
    }
    ans.set_name = "single card";
    for(auto&i:cardsare){
        if(i.first==(*(rankC.begin())).first){
            push(i, select);
            break;
        }
    }
    ans.selected_cards = select;
    return ans;
}
int main()
{
    int n;
    cin >> n;
    vector<string> v(n);
    for (auto &i : v)
        cin >> i;
    Results res = solution(v);
    cout << res.set_name << endl;
    for (auto &i : res.selected_cards)
    {
        cout << i << " ";
    }
    cout << endl;
}