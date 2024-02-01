#include<stdio.h>

struct _complex {
    float real;
    float imaginary;
};

typedef struct _complex Complex;

Complex input_complex() {
    Complex number;
    printf("Enter the real part:");
    scanf("%f", &number.real);

    printf("enter the number:");
    scanf("%f", &number.imaginary);

    return number;
}

Complex add_complex(Complex a, Complex b) {
    Complex sum;
    sum.real = a.real + b.real;
    sum.imaginary = a.imaginary + b.imaginary;
    return sum;
}

void output(Complex a, Complex b, Complex sum) {
    printf("\nThe sum of %.1f + %.1fi and %.1f + %.1fi is %.1f + %.1fi\n", a.real, a.imaginary, b.real, b.imaginary, sum.real, sum.imaginary);
}

int main() {
    Complex complex1, complex2, result;

    printf("enter the first complex number:\n");
    complex1 = input_complex();

    printf("enter the second complex number:\n");
    complex2 = input_complex();

    result = add_complex(complex1, complex2);

    output(complex1, complex2, result);

    return 0;
}

