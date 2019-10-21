#include <stdio.h>

int main(){
  int s = 0;
  printf("Input Your Triangle's Long : ");
  scanf("%d", &s);

  for(int i=0; i<s; i++){
    for(int j=0; j<=i; j++){
      printf("*");
    }
    printf("\n");
  }

  return 0;
}
