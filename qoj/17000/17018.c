#include <stdio.h>
#define true 1
#define false 0

int arr[9];

int check_idx_by_sort(int* v) {
    int chk = true;
    for (int i = 1; i <= 8; i++) {
        if (v[i] != i) {
            chk = false;
            break;
        }
    }
    return chk;
}

int check_idx_by_rsort(int* v) {
    int x = 8, chk = true;
    for (int i = 1; i <= 8; i++) {
        if (v[i] != x--) {
            chk = false;
            break;
        }
    }
    return chk;
}

int main() {
    for (int i = 1; i <= 8; i++) scanf("%d", &arr[i]);
    if (check_idx_by_sort(arr) == true) printf("ascending");
    else if (check_idx_by_rsort(arr) == true) printf("descending");
    else printf("mixed");
}