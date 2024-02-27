#include <stdio.h>

int input_array_size() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    return n;
}

void init_array(int n, int a[]) {
    for (int i = 2; i <= n; i++) {
        a[i] = 1;
    }
}

void eratosthenes_sieve(int n, int a[]) {
    for (int i = 2; i * i <= n; i++) {
        if (a[i] == 1) {
            for (int j = i * i; j <= n; j += i) {
                if (a[j] == 1) {
                    a[j] = 0;
                }
            }
        }
    }
}

void output(int n, int a[]) {
    printf("Prime numbers between 2 and %d are: ", n);
    for (int i = 2; i <= n; i++) {
        if (a[i] == 1) {
            printf("%d, ", i);
        }
    }
    printf("\n");
}

int main() {
    int n = input_array_size();
    int array[n + 1];

    init_array(n, array);
    eratosthenes_sieve(n, array);
    output(n, array);

    return 0;
}
