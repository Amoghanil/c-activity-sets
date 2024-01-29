#include<stdio.h>

int input();
int add(int a, int b);
void output(int a, int b, int sum);

int input() {
    int n;
    printf("enter the number:");
    scanf("%d", &n);
    return n;
}

int add(int a, int b) {
    return a + b;
}

void output(int a, int b, int sum) {
    printf("the sum of %d and %d is %d", a, b, sum);
}

int main() {

    int num1 = input();
    int num2 = input();

    int result = add(num1, num2);

    output(num1, num2, result);

    return 0;
}
