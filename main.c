#include <stdio.h>

int factorial(int n) {
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result =result* i;
    }
    return result;
}

int main() {
    int num;
  
  try:
    
    printf("Enter a number to find factorial: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Invalid Iumber,Try again  \n");
      goto try;
    } else {
        printf("Factorial of %d is %d\n", num, factorial(num));

int input;
    printf("\n Do you want to retry[0/1]");
      scanf("%d",&input);
if(input==1)
{
  goto try;
}
    }

    return 0;
}
