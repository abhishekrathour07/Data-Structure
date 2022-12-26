#include<stdio.h>
int main() {
    int r1, c1, r2, c2, i, j, k;
    int a[10][10], b[10][10], res[10][10];

    printf("Enter the order of first matrix\n");
    scanf("%d%d", & r1, & c1);
    printf("Enter the order of second matrix\n");
    scanf("%d%d", &r2, & c2);

    if (c1 != r2) {
        printf(" multiplication of matrix is not possible \n");
    } else {
        printf("Enter the elements of Matrix-A:\n");
        for (i = 0; i < r1; i++) {
            for (j = 0; j < c1; j++) {
                scanf("%d", & a[i][j]);
            }
        }

        printf("Enter the elements of Matrix-B:\n");
        for (i = 0; i < r2; i++) {
            for (j = 0; j <c2; j++) {
                scanf("%d", & b[i][j]);
            }
        }
                printf("\nelements of Matrix-A:\n");
        for (i = 0; i < r1; i++) {
            for (j = 0; j < c1; j++) {
                printf("%3d", a[i][j]);
            }
            printf("\n");
        }
              printf("\nelements of Matrix-b:\n");
        for (i = 0; i < r2; i++) {
            for (j = 0; j < c2; j++) {
                printf("%3d", b[i][j]);
            }
            printf("\n");
        }

        for (i = 0; i < r1; i++) {
             for (j = 0; j < c2; j++) {
                res[i][j] = 0;
                for (k = 0; k < r2; k++) {
                    res[i][j] =res[i][j] + a[i][k] * b[k][j];
                }
            }
        }

        printf("The product of the two matrices is:-\n");

        for (i = 0; i < r1; i++) {
            for (j = 0; j < c2; j++) {
                printf("%d\t", res[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}

