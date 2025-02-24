#include <stdio.h>

int main() {
  int x = 10;
  int y = 0;

  // Check for division by zero before performing the operation
  if (y != 0) {
    int z = x / y;
    printf("Result: %d\n", z);
  } else {
    fprintf(stderr, "Error: Division by zero!\n");
    return 1; // Indicate an error
  }

  return 0;
} 