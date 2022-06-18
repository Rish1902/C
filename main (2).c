/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n, reverse = 0, remainder;
  printf("Enter an integer: ");
  scanf("%d", &n);
  while (n != 0) {
    remainder = n % 10;
    reverse = reverse * 10 + remainder;
    n /= 10;
  }
  printf("Reversed number = %d", reverse);
    return 0;
}

