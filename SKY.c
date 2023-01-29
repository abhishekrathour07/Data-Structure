#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void red()
{
    printf("\033[1;31m");
}
// green color text
void green()
{
    printf("\033[1;32m");
}

// yellow colour text
void yellow()
{
    printf("\033[1;33m");
}

void purple()
{
    printf("\033[1;35m");
}
void cyan()
{
    printf("\033[1;36m");
}

// blue colour of text
void blue()
{
    printf("\033[1;34m");
}
// for white
void white()
{
    printf("\033[1;37m");
}
// for loading
int load()
{
    int i;
    while (1)
    {
        cyan();
        printf("LOADING\t");
        for (i = 0; i < 3; i++)
        {
            red();
            Beep(1200, 500);

            printf(">>");

            Beep(1200, 500);
        }
        system("cls"); // for clearing the terminal screen
        break;
    }
}
void main()
{
    int arr1[3][3], arr2[3][3], sum[3][3];
    int i, j, k, ch, t;
    load();
    green();
    printf("ENTER THE ELEMENT IN THE MATRIX 1:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }
    blue();
    printf("ENTER THE ELEMENT IN MATRIX 2:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }
    load();
    cyan();
    printf("ELEMENT IN MATRIX 1 ARE:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", arr1[i][j]);
        }
        printf("\n");
    }
    printf("ELEMENT IN MATRIX 2 ARE:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", arr2[i][j]);
        }
        printf("\n");
    }
    while (1)
    {
        white();
        printf("\n============  ");
        cyan();
        printf("MATRIX OPERATION");
        white();
        printf("  ==============");
        printf("\nCHOOSE ANY OPTION\n1:ADDITION OF MATRIX\n2:SUBTRACTION OF MATRIX\n3:MULTIPLICATION OF MATRIX\n4:DIVISION OF MATRIX\n5:TRANSPOSE OF MATRIX\n6:DISPLAY THE MATRIX\n7:EXIT THE PROGRAM\n");
        printf("=========================================\n");
        printf("Enter your choice:");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 3; j++)
                {
                    sum[i][j] = arr1[i][j] + arr2[i][j];
                }
            }
            break;
        case 2:
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 3; j++)
                {
                    sum[i][j] = arr1[i][j] - arr2[i][j];
                }
            }
            break;
        case 3:
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 3; j++)
                {
                    sum[i][j] = 0;
                    for (k = 0; k < 3; k++)
                    {
                        sum[i][j] = sum[i][j] + arr1[i][k] * arr2[k][j];
                    }
                }
            }
            break;
        case 4:
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 3; j++)
                {
                    sum[i][j] = arr1[i][j] / arr2[i][j];
                }
            }
            break;
        case 5:
            white();
            printf("WHICH MATRIX DO YOU WANT TO TRANSPOSE:\n");
            scanf("%d", &t);
            if (t == 1)
            {
                yellow();
                printf("MATRIX 1:\n");
                for (i = 0; i < 3; i++)
                {
                    for (j = 0; j < 3; j++)
                    {
                        printf("%d\t", arr1[i][j]);
                    }
                    printf("\n");
                }
                printf("TRANSPOSE OF MATRIX 1:\n");
                for (i = 0; i < 3; i++)
                {
                    for (j = 0; j < 3; j++)
                    {
                        printf("%d\t", arr1[j][i]);
                    }
                    printf("\n");
                }
            }
            else
            {
                yellow();
                printf("MATRIX 2:\n");
                for (i = 0; i < 3; i++)
                {
                    for (j = 0; j < 3; j++)
                    {
                        printf("%d\t", arr2[i][j]);
                    }
                    printf("\n");
                }
                printf("TRANSPOSE OF MTRIX 2:\n");
                for (i = 0; i < 3; i++)
                {
                    for (j = 0; j < 3; j++)
                    {
                        printf("%d\t", arr2[j][i]);
                    }
                    printf("\n");
                }
            }
            break;
        case 6:
            load();
            purple();
            printf("********RESULTANT MATRIX ARE:*********\n");
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 3; j++)
                {
                    printf("%d\t", sum[i][j]);
                }
                printf("\n");
            }
            break;
        case 7:
            printf("******* PLEASE WAIT ********\n");
            load();
            exit(1);
            break;
        default:
        cyan();
            printf("ENTER THE CORRECT CHOICE");
            break;
        }
    }
}