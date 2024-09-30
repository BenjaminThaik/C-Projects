#include <stdio.h>
#include <stdlib.h>

/* 
  This code prints all of the elements of the pascal's triangle for the inputted row 
  based on the following formula coefficient = coefficient * (row + 1 - i) / i.
  This code works up to from at least rows 0 to 40.
*/


int main()
{
  // Initialize variables
  int row;
  unsigned long coefficient = 1;
  int i,k;
  
  // Ask and scan for row index
  printf("Enter a row index: ");
  scanf("%d",&row);
  
  // Write your code here
  printf("%lu ", coefficient); // Print (n,0) coefficient 
  
  // Loop for the number of rows
  for ( k = 1; k <= row; k++)
  {
  // Reset coefficient
    coefficient = 1;
  // Loop for the number of columns
    for ( i = 1; i <= k; i++)
    {
  // Solve for binomial coefficient
      coefficient = coefficient * (row + 1 - i) / i;
    }
  // Print bionomial coefficient
    printf("%lu ", coefficient);
  }

  //Print new line
  printf("\n");

  // Halt
  return 0;
}
