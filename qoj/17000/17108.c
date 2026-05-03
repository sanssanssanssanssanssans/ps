#include <stdio.h>
typedef long long ll;

long long arr[3];

void naive_sort(long long*arr) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                long long temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    for (int i = 0; i < 3; i++) {
        scanf("%lld", &arr[i]);
    }
    naive_sort(arr);
    long long d0 = arr[1] - arr[0], d1 = arr[2] - arr[1];
    if (d0 == d1) printf("%lld", arr[0] - d0);
    else if (d0 > d1) printf("%lld", arr[0] + d1);
    else printf("%lld", arr[1] + d0);
}