#include <stdio.h>

void displayArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void insertElement(int arr[], int *n, int element, int position) {
    
    for (int i = *n; i > position; i--) {
        arr[i] = arr[i - 1];
    }
    arr[position] = element;
    (*n)++;  
}

int main() {
    int arr[20] = {10, 20, 30, 40, 50};  
    int n = 5;  
    int element, choice, pos;

    printf("Original Array: ");
    displayArray(arr, n);

    printf("\nWhere do you want to insert the element?\n");
    printf("1. At the front\n");
    printf("2. In the middle\n");
    printf("3. At the end\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter the element to insert: ");
    scanf("%d", &element);

    switch (choice) {
        case 1:
            pos = 0;  
            break;
        case 2:
            pos = n / 2;
            break;
        case 3:
            pos = n; 
            break;
        default:
            printf("Invalid choice!\n");
            return 1;
    }

    insertElement(arr, &n, element, pos);

    printf("\nArray after insertion: ");
    displayArray(arr, n);

    return 0;
}
