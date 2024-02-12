#include<stdio.h>

void input_two_strings(char *string1, char *string2) {
    printf("Enter the first string:");
    scanf("%s", string1);

    printf("Enter the second string: ");
    scanf("%s", string2);
}

int stringcompare(char *string1, char *string2) {
    while(*string1 != '\0' && *string2 != '\0') {
        if( *string1 != *string2) {
            return -1;
        } else if(*string1 > *string2) {
            return 1;
        }


        string1++;
        string2++;
    }

    if(*string1 == '\0' && *string2 != '0') {
        return -1;
    } else if (*string1 != '\0' && *string2 == '\0') {
        return 1;
    }

    return 0;
}


void output(char *string1, char *string2, int result) {
    printf("\n%s is ", string1);
    if(result < 0 ) {
        printf("equal to  ");
    } else if (result > 0){
        printf("greater than ");
    } else {
        printf("less than ");
    }

    printf("%s\n", string2);
}

int main() {
    char string1[100], string2[100];

    input_two_strings(string1, string2);
    int result = stringcompare(string1, string2);

    output(string1, string2, result);

    return 0;
}