#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    long int *arr = malloc(sizeof(long int) * 5);
    long int *sums = malloc(sizeof(long int) * 5);
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%ld",&arr[arr_i]);
    }

    for(int arr_i = 0; arr_i < 5; arr_i++){
      sums[arr_i] = 0;
      for(int j = 0; j < 5; j++){
        if(j == arr_i) continue;
        sums[arr_i] += arr[j];
      }
    }

    long int min = sums[0];
    long int max = sums[0];
    for(int i = 1; i < 5; i++){
      if(sums[i] > max) {
        max = sums[i];
      } else if (sums[i] < min) {
        min = sums[i];
      }
    }
    printf("%li %li\n", min, max);
    return 0;
}

