#include <stdio.h>

int main(void) {
    int a, b, c, d, e, f, g, h, i, j;
    printf("Enter 10 integers: ");
    scanf("%d %d %d %d %d %d %d %d %d %d", 
          &a, &b, &c, &d, &e, &f, &g, &h, &i, &j);
    double mean = (a + b + c + d + e + f + g + h + i + j) / 10.0;
    printf("Mean: %lf\n", mean);
    return 0;
}