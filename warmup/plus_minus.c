#include <stdio.h>
#include <stdlib.h>

/* double positiveFraction(int size, int* array) { */
/*   double total = 0.0; */

/*   for(int i = 0; i < size; i++) { */
/*     if(array[i] > 0) { */
/*       total++; */
/*     } */
/*   } */

/*   return total / size; */
/* } */

/* double negativeFraction(int size, int* array) { */
/*   double total = 0.0; */

/*   for(int i = 0; i < size; i++) { */
/*     if(array[i] < 0) { */
/*       total++; */
/*     } */
/*   } */

/*   return total / size; */
/* } */

/* double zeroFraction(int size, int* array) { */
/*   double total = 0.0; */

/*   for(int i = 0; i < size; i++) { */
/*     if(array[i] == 0) { */
/*       total++; */
/*     } */
/*   } */

/*   return total / size; */
/* } */

int main(){
    int n; 
    scanf("%d",&n);
    int arr[n];
    for(int arr_i = 0; arr_i < n; arr_i++){
       scanf("%d",&arr[arr_i]);
    }

    double totals[] = {0.0, 0.0, 0.0};

    for(int i = 0; i < n; i++) {
      if(arr[i] > 0) {
        totals[0]++;
      } else if (arr[i] < 0) {
        totals[1]++;
      } else {
        totals[2]++;
      }
    }

    for(int i = 0; i < 3; i++){
      printf("%f\n", totals[i] / n);
    }
    return 0;
}

