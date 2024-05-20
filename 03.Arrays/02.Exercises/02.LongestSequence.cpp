#include <iostream>
#include <array>

using namespace std;

void read_array(int arr[],const int& n){ // if const int arr[] - Can only read Array
                                         // if int arr[] - Can change the elements in Array
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
}

int main() {
    constexpr int MAX_N = 100;
    int numbers[MAX_N];

    int n;
    cin >> n;

    read_array(numbers, n);


    int cursor = 0;
    int max_count = 0;
    int max_sequence_start = -1;

    while(cursor < n) {
        int start = cursor;

        while(cursor + 1 < n && numbers[cursor] == numbers[cursor + 1]){
            cursor++;
        }

        int count = cursor - start + 1;
        if(count >= max_count){
            max_count = count;
            max_sequence_start = start;
        }

        cursor++;
    }


    for(int i = 0; i < max_count; i++){
        cout << numbers[max_sequence_start + i] << ' ';
    }





    return 0;
}