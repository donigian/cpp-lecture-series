#include <assert.h>

#include "../include/conversion.h"

void test_miles_to_km() {
    assert( convert_miles_to_km(2) == 3.21868 );
    assert( convert_miles_to_km(3) == 4.82802 );
    assert( convert_miles_to_km(4) == 6.43736 );
}