#include <stdio.h>
#include <stdlib.h>
int main() {
  int n,  *ptr, sum = 0;

  printf("Enter number of elements: ");
  scanf("%d", &n);

  ptr = (int*) calloc(n, sizeof(int));

  for(int i=0; i<5; i++) {
    printf("Enter element %d: ", i+1);
    scanf("%d", ptr+i);
    sum += *(ptr+i);
  }

  printf("Sum = %d\n", sum);


  return 0;
}
