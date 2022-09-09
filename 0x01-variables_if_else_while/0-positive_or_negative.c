#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/* betty style doc for function main goes there */
int main(void)
/*main function begins here*/
{
/**
 *main is the first function where excution begins
 *Description: main is where the excution begins at the first time.
 */
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
return (0);
}
