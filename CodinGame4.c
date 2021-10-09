/*
output the first ten multiples of the given number
Input:
    Line1: N - the number which you will need to multiply
Output:
    The 10 multiples of the given number separated by space
Constraints:
0<N<100000

Example:
Input:
1
Output:
1 2 3 4 5 6 7 8 9 10

*/
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    int N;
    scanf("%d", &N);

    // Write an answer using printf(). DON'T FORGET THE TRAILING \n
    // To debug: fprintf(stderr, "Debug messages...\n");

   for(int i=1;i<11;i++)
   {
        printf("%d ",N*i);
   }

    return 0;
}