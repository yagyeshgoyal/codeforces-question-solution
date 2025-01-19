#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<int>arr;
        long long int sum = 0;
        for(int i=0; i<n; i++){
            int a;
            cin>>a;
            
            sum += a;
            arr.push_back(a);
        }

        vector<int>minElementPosition(arr.size(), -1);
        int pos = n-1;
        int min_element = arr[n-1];

        for(int i=n-2; i>=0; i--){
            if(arr[i]<min_element){
                minElementPosition[i] = pos;
                min_element = arr[i];
                pos = i;

            }
            else{
                minElementPosition[i] = pos;
            }
        }

        vector<long long int>prefixSum(arr.size()+1, 0);
        for(int i=0; i<n; i++){
            prefixSum[i+1] = prefixSum[i] + arr[i];
        }

        

        long long int avg = sum/n;

        
        int i=0;
        while(i<n-1){
            if(arr[i] == avg){
                i++;
            }
            else if(arr[i] < avg){
                int j = i;
                while(j+1<n && arr[j+1]< avg){
                    j++;
                }

                long long int sumVal = prefixSum[j+1] - prefixSum[i];
                long long int temp  = sumVal/(j-i+1); 
                long long int count = sumVal%(j-i+1);

                for(int k=i; k<=j; k++){
                    if(arr[k] < temp);
                    else if(arr[k] == temp){
                        if(count>0){
                            arr[k]++;
                            count--;
                        }
                    }
                    else{
                        arr[min(k+1,j)] += arr[k] - temp;
                        arr[k] = temp;
                        if(count>0){
                            arr[k]++;
                            count--;
                        }
                    }
                }
                i = j+1;
            }
            else{
                int j = minElementPosition[i];

                long long int sumVal = prefixSum[j+1] - prefixSum[i];
                long long int temp  = sumVal/(j-i+1); 
                long long int count = sumVal%(j-i+1);

                for(int k=i; k<=j; k++){
                    if(arr[k] < temp);
                    else if(arr[k] == temp){
                        if(count>0){
                            arr[k]++;
                            count--;
                        }
                    }
                    else{
                        arr[min(k+1,j)] += arr[k] - temp;
                        arr[k] = temp;
                        if(count>0){
                            arr[k]++;
                            count--;
                        }
                    }
                }

                i = j+1;
            }
        }


       long long int maxValue = *max_element(arr.begin(), arr.end());
        long long int minValue = *(std::min_element(arr.begin(), arr.end()) );

        std::cout<<maxValue - minValue<<endl;

        

    }


    return 0;
}