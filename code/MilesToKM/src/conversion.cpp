//
// Created by Armen Donigian on 6/14/16.
//

#include <iostream>
using namespace std;

double prompt_user_for_miles() {
    cout << "how many miles did you drive today?" << endl;
    double miles = 0.0;
    cin >> miles;
    return miles;
}

double convert_miles_to_km(double miles) {
    const double MILES_TO_KM = 1.60934;
    double result = miles * MILES_TO_KM;
    return result;
}

void output_km_to_user(double km, double miles) {
    cout << " so you drive " << miles << " miles and "
    << km << " kilometers" << endl;
}
