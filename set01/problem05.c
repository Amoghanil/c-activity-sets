#include<stdio.h>

int input() {
    int n;
    printf("enter the number:");
    scanf("%d", &n);
    return n;
}

int compare(int a, int b, int c) {
    if(a >= b && a >= c){
        return a;
    } else if (b >= a && b >= c){
        return b;
    }else{
        return c;
    }
}

void output(int a, int b, int c, int largest) {
    printf("the largest in %d , %d, %d numbers are %d", a, b, c, largest);
}

int main() {
    int num1 = input();
    int num2 = input();
    int num3 = input();

    int largest = compare(num1, num2, num3);

    output(num1, num2, num3, largest);

    return 0;

}