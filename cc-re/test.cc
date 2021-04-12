#include <stdlib.h>
#include <stdint.h>

extern "C" {
    uint8_t * invertColor(uint8_t imageData[], uint32_t numOfPixels) {
        uint8_t *result = (uint8_t *) malloc(sizeof(uint8_t) * numOfPixels * 4);
        for (int i = 0; i < numOfPixels; i++) {
            long index = i * 4;
            result[index] = 255 - imageData[index];
            result[index + 1] = 255 - imageData[index + 1];
            result[index + 2] = 255 - imageData[index + 2];
            result[index + 3] = imageData[index + 3];
        }
        return result;
    }
}