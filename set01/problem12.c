#include<stdio.h>

struct _complex {
    float real;
    float imaginary;
};

typedef struct _complex Complex;

int get_n() {
    int n;
    printf("enter the number of arrays : ");
    scanf("%d", &n);
    return n;
}

Complex input_complex() {
    Complex number;
    printf("enter the real part: ");
    scanf("%f", &number.real);

    printf("enter the imaginary part: ");
    scanf("%f", &number.imaginary);

    return number;
}

void input_n_complex(int n, Complex c[n]) {
    printf("Enter the complex number:\n");
    for(int i = 0; i < n; i++){
        c[i] = input_complex();
    }
}

Complex add(Complex a, Complex b) {
    Complex sum;
    sum.real = a.real + b.real;
    sum.imaginary = a.imaginary + b.imaginary;
    return sum;
}

Complex add_n_complex(int n, Complex c[n]) {
    Complex result = {0.0, 0.0};
    for(int i = 0; i < n; i++) {
        result = add(result, c[i]);
    }
    return result;
}

void output(int n, Complex c[n], Complex result) {
    printf("\n");
    for (int i = 0; i < n; i++){
        printf("%.1f + %.1fi", c[i].real, c[i].imaginary);
        if(i < n - 1) {
            printf(" + ");
        }
    }
    printf(" is %.1f + %.1fi\n", result.real, result.imaginary);
}

int main() {
    int n = get_n();
    Complex complexNumbers[n];
    
    input_n_complex(n, complexNumbers);
    Complex result = add_n_complex(n,  complexNumbers);
    
    output(n, complexNumbers, result);

    return 0;
}
