#include <stdio.h>
#include <stdlib.h>

int simpleArraySum(int array_size, int* array) {
    int total = 0;
    for(int i = 0; i < array_size; i++) {
        total += *array;
        array++;
    }
    return total;
}

int main() {
    int count; 
    scanf("%i", &count);
    int *array = malloc(sizeof(int) * count);
    for(int i = 0; i < count; i++){
       scanf("%i",&array[i]);
    }
    int result = simpleArraySum(count, array);
    printf("%d\n", result);
    return 0;
}

