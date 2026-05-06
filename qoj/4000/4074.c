#include <stdio.h>

int max(int x, int y) {
    if (x > y) return x;
    return y;
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    // a == 0 and b == 0 : fuck
    if (a == 0 && b == 0) {
        printf("Not a moose");
        return 0;
    }
    
    if (a == b) {
        printf("Even %d", a + b);
    } else {
        printf("Odd %d", max(a, b) * 2);
    }
}   