#include <iostream>
#include<bits/stdc++.h>
using namespace std;

const long long int  N = 1e7;
int arr2[N];

int main() {
	int num,i;
	cin >> num;    //Reading input from STDIN
	//cout << "Input number is " << num << endl;	// Writing output to STDOUT
	 //int m=-1;
	 int ans = 0;
	 int arr[num];
	
	for(i=0;i<num;i++){
        cout<<"k"<<endl;
		cin>>arr[i];
		++arr2[arr[i]];
        ++ans;
	}


	cout<< ans <<endl;
	return 0;
}