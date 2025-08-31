#include <stdio.h>

int main() {
    int arr[10], n, key, choice, i, found = 0, low, high, mid;
    
    printf("Enter number of books: ");
    scanf("%d", &n);
    
    printf("Enter book IDs: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter book ID to search: ");
    scanf("%d", &key);
    
    printf("Choose search method:\n");
    printf("1. Linear Search\n");
    printf("2. Binary Search\n");
    printf("Enter choice: ");
    scanf("%d", &choice);
    
    if (choice == 1) {
        for (i = 0; i < n; i++) {
            if (arr[i] == key) {
                found = 1;
                printf("Book found at position %d\n", i + 1);
                break;
            }
        }
        if (!found) {
            printf("Book not found\n");
        }
    } else if (choice == 2) {
        low = 0;
        high = n - 1;
        while (low <= high) {
            mid = (low + high) / 2;
            if (arr[mid] == key) {
                found = 1;
                printf("Book found at position %d\n", mid + 1);
                break;
            } else if (arr[mid] < key) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        if (!found) {
            printf("Book not found\n");
        }
    } else {
        printf("Invalid choice\n");
    }
    
    return 0;
}
