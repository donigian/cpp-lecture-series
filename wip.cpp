#include <iostream>

using namespace std;

// swap using references

void swap_using_values(int num1_copy, int num2_copy){
    int temp = 0;
    temp = num1_copy;
    num1_copy = num2_copy;
    num2_copy = temp;
}

void swap_using_reference(int& num1, int& num2){
    int temp = 0;
    temp = num1;
    num1 = num2;
    num2 = temp;
}

void swap_using_pointers(int* num1, int* num2){
    int temp = 0;
    temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

void display_array(int arr[], int size){
    for ( int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
}

int main() {
    const int size = 5;
    int arr[size] = {9, 3, 5, 4, 8};
    
    int num1=5, num2=10;
    cout << "Before: " <<  num1 << " " << num2 << endl;
//    swap_using_reference(num1, num2);
    swap_using_pointers(&num1, &num2);

    cout << "After: " <<  num1 << " " << num2 << endl;

    return 0;
}
