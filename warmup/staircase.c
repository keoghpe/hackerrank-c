#include <stdio.h>
#include <stdlib.h>

int main(){
  int n; 
  scanf("%d",&n);
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
      if(j + 2 > n - i) {
        putchar('#');
      } else {
        putchar(' ');
      }
    }
    putchar('\n');
  }
  return 0;
}
