#include <stdio.h>

int main() {
    int a, b, c, d;
    int ws2a, ws2b, ws2c, ws2d, ws2e;

    a = 1; b = 1; c = 5; d = 1;
    ws2a = a + b - c * d;
    ws2b = a * b + c / d;
    ws2c = a + b * c - d;
    ws2d = a * (b + c) - d;
    ws2e = a + b + c + d;
    printf("CASE 4.1: %d %d %d %d %d\n", ws2a, ws2b, ws2c, ws2d, ws2e);

    a = 9; b = 2; c = 0; d = 1;
    ws2a = a + b - c * d;
    ws2b = a * b + c / d;
    ws2c = a + b * c - d;
    ws2d = a * (b + c) - d;
    ws2e = a + b + c + d;
    printf("CASE 4.2: %d %d %d %d %d\n", ws2a, ws2b, ws2c, ws2d, ws2e);

    a = 0; b = 3; c = 3; d = 3;
    ws2a = a + b - c * d;
    ws2b = a * b + c / d;
    ws2c = a + b * c - d;
    ws2d = a * (b + c) - d;
    ws2e = a + b + c + d;
    printf("CASE 4.3: %d %d %d %d %d\n", ws2a, ws2b, ws2c, ws2d, ws2e);

    return 0;
}
