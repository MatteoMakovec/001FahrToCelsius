#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

int main(void) {
  int fahr;
  scanf("%d", &fahr);
  printf("\nLa temperatura convertita in celsius è: %d", fahr_to_celsius(fahr));

  return 0;
}

int fahr_to_celsius(int fahr){ 
  int celsius = 5 * (fahr - 32) / 9;
  return celsius;
}