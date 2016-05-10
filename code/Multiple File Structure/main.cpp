#include <iostream>
#include "include/geometric_utils.h"

using namespace std;

int main() {
    int edge = 0;
    cout << "Please enter length of square" << endl;
    cin >> edge;
    cout << "Area of square is " << calc_area_of_square(edge);
    return 0;
}