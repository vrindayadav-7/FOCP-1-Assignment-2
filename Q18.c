#include <stdio.h>

int main() {
    int arr[50], n;
    int i, j;
    int found = 0;  

    printf("Enter number of elements in array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nDuplicate elements: ");

    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                printf("%d ", arr[i]);
                found = 1;
                break;  
            }
        }
    }

    if (!found) {
        printf("-1");  
    }

    printf("\n");
    return 0;
}
