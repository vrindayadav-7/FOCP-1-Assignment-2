#include <stdio.h>

void displayArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void deleteElement(int arr[], int *n, int position) {
    
    for (int i = position; i < *n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    (*n)--; 
}

int main() {
    int arr[20] = {10, 20, 30, 40, 50, 60};
    int n = 6;  
    int choice, pos;

    printf("Original Array: ");
    displayArray(arr, n);

    printf("\nWhere do you want to delete the element?\n");
    printf("1. From the front\n");
    printf("2. From the middle\n");
    printf("3. From the end\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            pos = 0;  
            break;
        case 2:
            pos = n / 2; 
            break;
        case 3:
            pos = n - 1;  
            break;
        default:
            printf("Invalid choice!\n");
            return 1;
    }

    deleteElement(arr, &n, pos);

    printf("\nArray after deletion: ");
    displayArray(arr, n);

    return 0;
}
