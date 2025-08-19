#include <stdio.h>
int main(void) {
    const int count = 8;
    for (int i = 1; i < count; i++)
    {
        // save the square of i
        int square = i * i;
        printf("%d %d\n", i, square);
    }
    return 0;
}