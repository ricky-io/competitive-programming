#include <stdio.h>

int main() {
    float x, i;
    int y;

    printf("  y\t   x\t    i\n");
    printf("------------------------\n");

    for (y = 1; y <= 6; y++) {
        for (x = 5.5; x <= 12.5; x += 0.5) {
            i = 2 + (y + 0.5 * x);
            printf("%3d\t%5.1f\t%6.2f\n", y, x, i);
        }
        printf("\n"); // blank line after each y block
    }

    return 0;
}