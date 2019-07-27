#include<stdio.h>
 int main(void) {
  int a[4][5];
  int j=0,i=0;
  printf("enter element of array\n");
  for (size_t i = 0; i < 4; i++) {
    for (size_t j = 0; j < 5; j++) {
      scanf("%d", &a[i][j]);
    }
  }
  printf("element of arrar in zigzag order\n");
  for (i = 0; i < 4; i++) {
    for ( j = 0; j < 5; j++) {
      printf("%d ",a[i][j]);
    }
    j--;
    i++;
    for ( j = 4; j >=0; j--) {
      printf("%d ", a[i][j]);
    }
  }
  return 0;
}
