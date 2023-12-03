#include <stdio.h>
float f(float x, float y) {
    return x + y;
}
int main() {
    float x0, y0, xn, h, x, y;
    int n, i;
    printf("Enter initial condition, x0 and y0: ");
    scanf("%f %f", &x0, &y0);
    printf("Enter calculation point, xn: ");
    scanf("%f", &xn);
    printf("Enter the number of steps, n: ");
    scanf("%d", &n);
    h = (xn - x0) / n;
    x = x0;
    y = y0;
    for (i = 0; i < n; i++) {
        y = y + h * f(x, y);
        x = x + h;
        printf("After step %d, x = %f, y = %f\n", i + 1, x, y);
    }
    return 0;
}
