#include <stdlib.h>
#include <stdint.h>

extern "C" {
    double sum(int8_t arr[], uint32_t length) {
        double sum = 0;
        for (int i = 0; i < length; i++) {
            sum += arr[i];
        }
        return sum;
    }
}