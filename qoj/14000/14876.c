#include <stdio.h>

int n, x, y, a = 0, b = 0, res = 1;

int main() {
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        scanf("%d %d", &x, &y);
        if(x < a || y < b) res = 0;
        a = x, b = y;
    } 
    res == 1 ? printf("yes") : printf("no");
}