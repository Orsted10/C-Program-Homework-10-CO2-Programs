#include <stdio.h>

int main() {
    int arr[10], n = 0, choice, pos, element, i;
    
    while (1) {
        printf("\nArray Operations:\n");
        printf("1. Insert\n");
        printf("2. Delete\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                if (n < 10) {
                    printf("Enter element to insert: ");
                    scanf("%d", &element);
                    printf("Enter position (0-%d): ", n);
                    scanf("%d", &pos);
                    for (i = n; i > pos; i--) {
                        arr[i] = arr[i - 1];
                    }
                    arr[pos] = element;
                    n++;
                    printf("Element inserted\n");
                } else {
                    printf("Array is full\n");
                }
                break;
            case 2:
                if (n > 0) {
                    printf("Enter position to delete (0-%d): ", n - 1);
                    scanf("%d", &pos);
                    for (i = pos; i < n - 1; i++) {
                        arr[i] = arr[i + 1];
                    }
                    n--;
                    printf("Element deleted\n");
                } else {
                    printf("Array is empty\n");
                }
                break;
            case 3:
                if (n > 0) {
                    printf("Array elements: ");
                    for (i = 0; i < n; i++) {
                        printf("%d ", arr[i]);
                    }
                    printf("\n");
                } else {
                    printf("Array is empty\n");
                }
                break;
            case 4:
                return 0;
            default:
                printf("Invalid choice\n");
        }
    }
}
