#include <stdio.h>
#include <string.h>

int main() {
    int n, count = 0;

    printf("Enter number of students: ");
    scanf("%d", &n);

    char names[n][50];   
    int marks[n];       

    for (int i = 0; i < n; i++) {
        printf("Enter name of student %d: ", i + 1);
        scanf("%s", names[i]);
        printf("Enter marks of %s: ", names[i]);
        scanf("%d", &marks[i]);
    }

    printf("\n--- Students who scored 99 ---\n");

    for (int i = 0; i < n; i++) {
        if (marks[i] == 99) {
            printf("%s scored 99\n", names[i]);
            count++;
        }
    }

    printf("\nTotal number of students who scored 99: %d\n", count);

    return 0;
}
