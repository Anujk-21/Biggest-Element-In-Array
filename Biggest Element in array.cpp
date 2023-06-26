#include <stdio.h>

int main() {
    int array[10];
    int i,size, biggest_element;
    
    printf("Enter size of array: \n");
    scanf("%d",&size);

    printf("Enter %d numbers:\n",size);
    for (i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }

    printf("Array: ");
    for (i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    biggest_element = array[0];
    for (i = 1; i < size; i++) {
        if (array[i] > biggest_element) {
            biggest_element = array[i];
        }
    }

    printf("biggest element: %d\n", biggest_element);

    return 0;
}

