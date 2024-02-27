#include <stdio.h>
#include <string.h>

void input_string(char* a, char* b);
int sub_str_index(char* string, char* substring);
void output(char *string, char *substring, int index);

int main() {
    char mainString[100], subString[50];
    input_string(mainString, subString);

    int index = sub_str_index(mainString, subString);

    output(mainString, subString, index);

    return 0;
}

void input_string(char* a, char* b) {
    printf("Enter the main string: ");
    scanf("%s", a);

    printf("Enter the substring: ");
    scanf("%s", b);
}

int sub_str_index(char* string, char* substring) {
    int len1 = strlen(string);
    int len2 = strlen(substring);

    for (int i = 0; i <= len1 - len2; i++) {
        int j;
        for (j = 0; j < len2; j++) {
            if (string[i + j] != substring[j]) {
                break;
            }
        }
        if (j == len2) {
            return i;
        }
    }

    return -1; 
}

void output(char *string, char *substring, int index) {
    if (index != -1) {
        printf("The index of '%s' in '%s' is %d\n", substring, string, index);
    } else {
        printf("Substring not found in the given string.\n");
    }
}
