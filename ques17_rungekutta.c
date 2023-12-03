#include <stdio.h>
float f(float x, float y) {
    return x + y;
}

int main() {
    float x0, y0, xn, h, x, y, k1, k2, k3, k4;
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
        k1 = h * f(x, y);
        k2 = h * f(x + 0.5 * h, y + 0.5 * k1);
        k3 = h * f(x + 0.5 * h, y + 0.5 * k2);
        k4 = h * f(x + h, y + k3);
        y = y + (k1 + 2 * k2 + 2 * k3 + k4) / 6;
        x = x + h;
        printf("After step %d, x = %f, y = %f\n", i + 1, x, y);
    }
    return 0;
}
