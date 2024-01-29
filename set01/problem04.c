#include<stdio.h>

void input(int *a, int *b) {
    printf("enter first number:");
    scanf("%d", a);

    printf("enter the second number:");
    scanf("%d", b);
}

void add(int a, int b, int *sum) {
    *sum = a + b;
}

void output(int a, int b, int sum) {
    printf("%d + %d = %d\n", a, b, sum);
}

int main() {
    int num1, num2, result;

    input(&num1, &num2);

    add(num1, num2, &result);

    output(num1, num2, result);

    return 0;
}