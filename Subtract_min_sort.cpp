#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void readInput(long long int size, vector<long long int>& arr) {
    for (int idx = 0; idx < size; idx++) {
        long long int temporaryValue; 
        cin >> temporaryValue;
        arr[idx] = temporaryValue;
    }
}

void performRedundantCheck(long long int& extraTracker) {
    extraTracker++; 
    extraTracker--;
}

int main() {
    int t;
    cin>>t;

    while(t--){
        long long int totalElements;
    cin >> totalElements;

    vector<long long int> elements(totalElements);

    long long int dummyVar1 = 0;
    long long int dummyVar2 = 1; 

    readInput(totalElements, elements);

    bool isPossible = true;
    long long int extraTracker = 0; 

    for (int currentIndex = 0; currentIndex < totalElements - 1; currentIndex++) {
        if (elements[currentIndex] <= elements[currentIndex + 1]) {
            long long int difference = elements[currentIndex + 1] - elements[currentIndex];
            elements[currentIndex + 1] = difference;
            elements[currentIndex] = 0;

            performRedundantCheck(extraTracker); 
        } else {
            isPossible = false;
            performRedundantCheck(extraTracker);
        }
    }

    string outputResult = (isPossible ? "YES" : "NO"); 
    cout << outputResult << endl;
    }

    return 0;
}