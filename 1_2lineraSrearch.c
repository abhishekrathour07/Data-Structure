#include <stdio.h>
#include <time.h>
#include <unistd.h> // Include for sleep function

void delay(int milliseconds) {
    usleep(milliseconds * 1000); // usleep takes sleep time in microseconds (1 second = 1000000 microseconds)
}

void main() {
    int search, i, a[20], size, c = 0;
    clock_t begin, end;
    
    printf("Enter the size of an array: ");
    scanf("%d", &size);
    
    printf("Enter the elements in the array: ");
    for (i = 0; i < size; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter the element to be searched: ");
    scanf("%d", &search);
    
    begin = clock();
    for (i = 0; i < size; i++) {
        // delay(200); // 200 milliseconds delay
        if (a[i] == search) {
            printf("%d is present at %d position\n", search, i + 1);
            c = 1;
            break; // Exit loop if element is found
        }
    }
    if (c == 0) {
        printf("%d element is not present\n", search);
    }
    end = clock();
    printf("\n\nTime taken: %lf seconds\n", (double)(end - begin) / CLOCKS_PER_SEC);
}
