#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// 경우의 수
// A B C
// A C B
// B C A
// B A C
// C A B
// C B A

bool is_same(char a[4], char b[4]) {
    int cnt = 0;
    for(int i = 0; i  < 3; i++) if (a[i] == b[i]) cnt++;
    if(cnt == 3) return true;
    else return false;
}

char op[3];
int A, B, C, arr[3], mx = -123456789, mn = 123456789;

int main() {
    for(int i = 0; i < 3; i++) {
        scanf("%d", &arr[i]);
        if (mx < arr[i]) mx = arr[i];
        if (mn > arr[i]) mn = arr[i];
    }
    A = mn, B = arr[0] + arr[1] + arr[2] - mx - mn, C = mx; 
    scanf("%s", op);
    if (is_same(op, "ABC"))printf("%d %d %d", A, B, C);
    else if (is_same(op, "ACB"))printf("%d %d %d", A, C, B);
    else if (is_same(op, "BAC"))printf("%d %d %d", B, A, C);
    else if (is_same(op, "BCA"))printf("%d %d %d", B, C, A);
    else if (is_same(op, "CAB"))printf("%d %d %d", C, A, B);
    else if (is_same(op, "CBA"))printf("%d %d %d", C, B, A);
}