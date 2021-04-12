#include <emscripten.h>
EMSCRIPTEN_KEEPALIVE
double square(double val) {
    return val * val;
}