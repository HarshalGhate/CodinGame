/*
A contribution by BennySama
 Approved by Konstant,opposandpizzasAreGreat
 	Goal
You get a a line of a String and you have to convert the chararctes of the line to their ASCII number and take the sum of these. After this step, you take the square-root of the sum and round down, if needed.
Input
Line 1: The string to convert
Output
Line 2: The solution as integer
Constraints
2 ≤ N ≤ 100
Example
Input : ABC
Output : 14
*/

#include <iostream>

using namespace std;
int ASCIIROOT(char *str)
{   int iSum=0,i=1,iResult=1;
    while(*str!='\0')
    {
        iSum=iSum+*str;
        str++;
    }
    while(iResult<=iSum)
    {
        i++;
        iResult=i*i;

    }
    return i-1;
}
int main()
{
    char arr[100];
    int iRet=0;
    scanf("%[^'\n']s",arr);
    iRet=ASCIIROOT(arr);
    printf("%d",iRet);
    return 0;
}