#include <stdio.h>

int main() {
    int a[100], b[100];
    int n, m;

    printf("Enter size of first array: ");
    scanf("%d", &n);

    printf("Enter first array elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter size of second array: ");
    scanf("%d", &m);

    printf("Enter second array elements: ");
    for (int i = 0; i < m; i++) {
        scanf("%d", &b[i]);
    }

    printf("Intersection: ");

    for (int i = 0; i < n; i++) {
        int found = 0;

        // Avoid printing the same common element twice
        for (int k = 0; k < i; k++) {
            if (a[k] == a[i]) {
                found = 1;
                break;
            }
        }

        if (found) {
            continue;
        }

        // Search for the element in the second array
        for (int j = 0; j < m; j++) {
            if (a[i] == b[j]) {
                printf("%d ", a[i]);
                break;
            }
        }
    }

    printf("\n");
    return 0;
}