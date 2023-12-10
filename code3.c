#include <stdio.h>

int main() {
    int a, b;
    float x, y;

    // Input two integers
    printf("enter the values of a and b");
    scanf("%d %d", &a, &b);

    // Input two float numbers
    printf("enter the values of x and y");
    scanf("%f %f", &x, &y);

    // Print the sum and difference of integers
    printf("%d %d\n", a + b, a - b);

    // Print the sum and difference of float numbers rounded to one decimal place
    printf("%.1f %.1f\n", x + y, x - y);

    return 0;
}