#include <stdio.h>
#include <stdlib.h>

int main() {
    int h, m;
    scanf("%d %d", &h, &m);
    printf("%d", (h * 60 + m) - 9 * 60);
}