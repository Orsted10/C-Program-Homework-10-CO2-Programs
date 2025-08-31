#include <stdio.h>

int main() {
    int a[3][3], b[3][3], result[3][3];
    int i, j, k, choice;
    
    printf("Enter elements of first 3x3 matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    
    printf("Enter elements of second 3x3 matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &b[i][j]);
        }
    }
    
    printf("Choose operation:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Transpose\n");
    printf("Enter choice: ");
    scanf("%d", &choice);
    
    switch (choice) {
        case 1:
            for (i = 0; i < 3; i++) {
                for (j = 0; j < 3; j++) {
                    result[i][j] = a[i][j] + b[i][j];
                }
            }
            printf("Addition result:\n");
            break;
        case 2:
            for (i = 0; i < 3; i++) {
                for (j = 0; j < 3; j++) {
                    result[i][j] = a[i][j] - b[i][j];
                }
            }
            printf("Subtraction result:\n");
            break;
        case 3:
            for (i = 0; i < 3; i++) {
                for (j = 0; j < 3; j++) {
                    result[i][j] = 0;
                    for (k = 0; k < 3; k++) {
                        result[i][j] += a[i][k] * b[k][j];
                    }
                }
            }
            printf("Multiplication result:\n");
            break;
        case 4:
            for (i = 0; i < 3; i++) {
                for (j = 0; j < 3; j++) {
                    result[i][j] = a[j][i];
                }
            }
            printf("Transpose of first matrix:\n");
            break;
        default:
            printf("Invalid choice\n");
            return 0;
    }
    
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
