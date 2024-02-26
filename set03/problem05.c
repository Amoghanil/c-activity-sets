#include <stdio.h>
#include <stdbool.h>

int input_array_size();
void init_array(int n, bool a[n]);
void eratosthenes_sieve(int n, bool a[n]);
void output(int n, bool a[n]);

int main() {
    int n = input_array_size();
    bool is_prime[n + 1];

    init_array(n + 1, is_prime);
    eratosthenes_sieve(n, is_prime);
    output(n, is_prime);

    return 0;
}

int input_array_size() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    return n;
}

void init_array(int n, bool a[n]) {
    for (int i = 0; i < n; i++) {
        a[i] = true;
    }
}

void eratosthenes_sieve(int n, bool a[n]) {
    for (int p = 2; p * p <= n; p++) {
        if (a[p] == true) {
            for (int i = p * p; i <= n; i += p) {
                a[i] = false;
            }
        }
    }
}

void output(int n, bool a[n]) {
    printf("Prime numbers between 2 and %d are: ", n);
    for (int i = 2; i <= n; i++) {
        if (a[i]) {
            printf("%d", i);
            if (i < n) {
                printf(", ");
            }
        }
    }
    printf("\n");
}
