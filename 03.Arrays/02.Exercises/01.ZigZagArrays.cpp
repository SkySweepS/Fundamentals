#include <iostream>
#include <array>

using namespace std;

void print_array(int numbers[],int n){
    for (int i = 0; i < n; i++){
        cout << numbers[i] << " ";
    }
    cout << endl;
}

int task1() {
    constexpr int max_num = 100;
    int numbers1[max_num], numbers2[max_num];

    int n;
    cin >> n;

    for (int i = 0; i < n; i++){
        int num1, num2;
        cin >> num1 >> num2;
        if (i % 2 == 0){
            numbers1[i] = num1;
            numbers2[i] = num2;
        }
        else{
            numbers1[i] = num2;
            numbers2[i] = num1;
        }
    }
    print_array(numbers1, n);
    print_array(numbers2, n);

    return 0;
}