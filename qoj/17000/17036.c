#include <stdio.h>

char sex;

int main() {
    while ((sex = getchar()) != EOF && sex != '\n') if (sex >= 'A' && sex <= 'Z') putchar(sex);
}