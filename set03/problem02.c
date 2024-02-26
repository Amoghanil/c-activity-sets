#include <stdio.h>

void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3);
int is_triangle(float x1, float y1, float x2, float y2, float x3, float y3);
void output(float x1, float y1, float x2, float y2, float x3, float y3, int result);

int main() {
    float x1, y1, x2, y2, x3, y3;
    input_triangle(&x1, &y1, &x2, &y2, &x3, &y3);

    int result = is_triangle(x1, y1, x2, y2, x3, y3);

    output(x1, y1, x2, y2, x3, y3, result);

    return 0;
}

void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3) {
    printf("Enter coordinates of three points (x y): ");
    scanf("%f %f %f %f %f %f", x1, y1, x2, y2, x3, y3);
}

int is_triangle(float x1, float y1, float x2, float y2, float x3, float y3) {
    return (y2 - y1) * (x3 - x2) != (y3 - y2) * (x2 - x1);
}

void output(float x1, float y1, float x2, float y2, float x3, float y3, int result) {
    if (result) {
        printf("The points (%.1f, %.1f), (%.1f, %.1f), and (%.1f, %.1f) form a triangle\n", x1, y1, x2, y2, x3, y3);
    } else {
        printf("The points (%.1f, %.1f), (%.1f, %.1f), and (%.1f, %.1f) do not form a triangle\n", x1, y1, x2, y2, x3, y3);
    }
}
