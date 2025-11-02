#include <stdio.h>
#include <math.h>  

int isPrime(int num) {
    if (num <= 1)
        return 0;  
    if (num == 2)
        return 1;
    if (num % 2 == 0)
        return 0;

    for (int i = 3; i <= sqrt(num); i += 2) {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    int arr[100], n, i, count = 0;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
  
    for (i = 0; i < n; i++) {
        if (isPrime(arr[i])) {
            count++;
        }
    }


    printf("\nNumber of prime numbers in the array: %d\n", count);

    return 0;
}
