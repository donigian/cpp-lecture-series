#include <iostream>
#include "include/conversion.h"

using namespace std;

int main() {
    double miles = prompt_user_for_miles();
    double km = convert_miles_to_km(miles);
    output_km_to_user(km, miles);
    return 0;
}