/*
A contribution by BVSTIEN
 Approved by SinOfWrath,selenaeandvivax3794
 	Goal

Print a checklist of the given numbers where every odd number is ticked.
Input
    Line 1: The number count of integers to check.
    Line 2: count integers n to check, separated by a space.
Output
    count lines (one for each value of n):
    "[ ] n" if n is even,
    "[x] n" if n is odd.

Constraints
    0 < count < 100
    -100 < n < 100
Example
Input
5
1 2 3 4 5
Output
[x] 1
[ ] 2
[x] 3
[ ] 4
[x] 5
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/
void Display(int *Arr,int iSize)
{
    int i=0;
    for(i=0;i<iSize;i++)
    {
        if(Arr[i]%2==0)
        {
            printf("[ ] %d\n",Arr[i]);
        }
        else
        {
            printf("[x] %d\n",Arr[i]);
        }
    }
}
int main()
{
     int *arr=NULL;       
    int iLength=0,i=0;

    scanf("%d",&iLength);

    arr=(int*)malloc(iLength*sizeof(int));

    
    for(i=0;i<iLength;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    Display(arr,iLength);

    free(arr);
    return 0;
   
}