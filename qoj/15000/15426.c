#include <stdio.h>

int max(int x, int y) {
    if (x > y) return x;
    return y;
}

int min(int x, int y) {
    if (x < y) return x;
    return y;
}

int min3(int x, int y, int z) {
    int answer = x;
    if (y < answer) answer = y;
    if (z < answer) answer = z;
    return answer;
}

const int MAX = 1010101010;

int t, x, y, z, a, b, c;

int main() {
    scanf("%d", &t);
    for (int sex = 0; sex < t; sex++) {
        scanf("%d %d %d %d %d %d", &x, &z, &y, &a, &b, &c);
        int reuslt = MAX;
        for (int i = 0; i <= max(x, z) + y; i++) {
            int j = max(0, (x - i + 1) / 2), k = max(0, (z - i + 1) / 2);
            int template = i + j + k, sum = a * j + b * i + c * k;
            if (template * 2 < x + y + z) {
                int fuck = min3(a, b, c);
                sum += ((x + y + z + 1) / 2 - template) * fuck;
            }
            reuslt = min(reuslt, sum);
        }
        printf("%d\n", reuslt);
    }
}   