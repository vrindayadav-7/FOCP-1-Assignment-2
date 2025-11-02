#include <stdio.h>

int main() {
    int scores[100];      
    int n, i;
    int found = -1;       

    printf("Enter the number of scores: ");
    scanf("%d", &n);

    
    printf("Enter %d scores:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &scores[i]);
    }

    for (i = 0; i < n; i++) {
        if (scores[i] == 99) {
            found = i;
            break;  
        }
    }

    if (found != -1) {
        printf("The first occurrence of score 99 is at position %d (index %d).\n", found + 1, found);
    } else {
        printf("Score 99 was not found in the array.\n");
    }

    return 0;
}
