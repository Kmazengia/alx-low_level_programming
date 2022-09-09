#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
*introduction to c programmming
*more headers goes there
*betty style doc for function main goes there
*/
int main(void)
{
/**
*main is the first function where excution begins
*Description: main is where the excution begins at the first time.
*return(0):willreturn 0 if success
*/
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
printf("%d is positive\n", n);
else if (n == 0)
printf("%d is zero\n", n);
else
printf("%d is negative\n", n);
return (0);
}
