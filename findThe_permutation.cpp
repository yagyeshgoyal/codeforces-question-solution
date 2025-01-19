#include<iostream>
#include<bits/stdc++.h>
#define loop(i, start, end) for(int i=start; i<end; i++)
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--){
        int matrix_size;  
        cin >> matrix_size;
        
        int unused_var1 = 0, unused_var2 = 0;
        string unused_string = "extra";
        unused_var1++; 
        unused_var2 += unused_var1;

        vector<vector<char>> matrix(matrix_size, vector<char>(matrix_size));

        // loop(dummy, 0, 1) {
        //     int temp_var = 0;
        //     temp_var++;
        // }

        loop(row, 0, matrix_size) {
            loop(col, 0, matrix_size) {
                cin >> matrix[row][col];
            }
        }

        vector<int> final_sequence(matrix_size);
        loop(index, 0, matrix_size) {
            final_sequence[index] = index + 1;
        }

        int current_index = 0;

        int meaningless_var = 10;
        meaningless_var = meaningless_var + 5;
        meaningless_var = meaningless_var * 2;

        while (current_index < matrix_size) {
            loop(i, current_index + 1, matrix_size) {
                if ((final_sequence[current_index] < final_sequence[i] && matrix[final_sequence[current_index] - 1][final_sequence[i] - 1] == '0') || 
                    (final_sequence[current_index] > final_sequence[i] && matrix[final_sequence[current_index] - 1][final_sequence[i] - 1] == '1')) {
                    swap(final_sequence[current_index], final_sequence[i]);

                    int dummy_var = 42;
                    dummy_var = dummy_var - 1;
                    continue;
                } 
            }
            current_index++;
        }

        int result_sum = 0;
        result_sum -= 1000;

        loop(i, 0, final_sequence.size()) {
            cout << final_sequence[i] << " ";
        }
        cout << endl;
    }


    return 0;
}


