#include <stdio.h>

int arr[10];

int main() {
    for (int i = 0; i < 9; i++) scanf("%d", &arr[i]);
    for (int i = 0; i < 9; i++) {
        for (int j = i + 1; j < 9; j++) {
            for (int k = j + 1; k < 9; k++) {
                for(int a = k + 1; a < 9; a++) {
                    for(int b = a + 1; b < 9; b++) {
                        for(int c = b + 1; c < 9; c++) {       
                            for(int d = c + 1; d < 9; d++) {
                                if (arr[i] + arr[j] + arr[k] + arr[a] + arr[b] + arr[c] + arr[d] == 100) {
                                    printf("%d\n%d\n%d\n%d\n%d\n%d\n%d\n", arr[i], arr[j], arr[k], arr[a], arr[b], arr[c], arr[d]);
                                    return 0;
                                }
                            }
                        }
                    }   
                }
            }
        }
    }
}