#include <stdio.h>

int main() {
    int m, n;
    scanf("%d", &m);
    int arr[m];

    for (int i = 0; i < m; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &n);

    for (int i = 0; i < m; i++) {
        // Avoid processing duplicate values of arr[i]
        if (i > 0 && arr[i] == arr[i - 1]) {
            continue;
        }

        for (int j = i + 1; j < m; j++) {
            // Avoid processing duplicate values of arr[j] (except first occurrence)
            if (j > i + 1 && arr[j] == arr[j - 1]) {
                continue;
            }

            if (arr[i] + arr[j] == n) {
                printf("%d %d\n", arr[i], arr[j]);
            }
        }
    }

    return 0;
}
