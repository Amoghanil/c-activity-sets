#include<stdio.h>

int input_array_size();
void input_array(int n, int a[n]);
int sum_composite_numbers(int n, int a[n]);
void output(int sum);

int main () {
    int size, sum;

    int n = input_array_size;
    int numbers[size];
    input_array(size, numbers);
    sum = sum_composite_numbers(size, numbers);
    output(sum);
    return 0;
}

int input_array_size() {
    int n;
    printf("enter the size of the array:");
    scanf("%d", &n);
    return n;
}

void input_array(int n, int a[n]) {
    printf("enter the array elements:/n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
}

int sum_composite_numbers(int n, int a[n]) {
     int sum = 0;

    for (int i = 0; i < n; i++) {
        int isComposite = 0;

        for (int j = 2; j <= a[i] / 2; j++) {
            if (a[i] % j == 0) {
                isComposite = 1;
                break;
            }
        }
        if (isComposite) {
            sum += a[i];
        }
    }

    return sum;
}

void output(int sum) {
    printf("The sum of composite numbers in the array is: %d\n", sum);
}
