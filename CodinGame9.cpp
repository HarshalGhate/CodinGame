/*
The program:
Your program must output only the capital letters of the string given as input.

INPUT:
A string S.

OUTPUT:
A string containing S stripped of all characters except capital letters.

CONSTRAINTS:
S contains at least 1 capital letter.
S contains less than 100 characters.

EXAMPLE:
Input
.2A1N5Y64! §C*H*zAtrR
Output
ANYCHAR
*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

void DisplayCap(char *str)
{
    while(*str!='\0')
    {
        if((*str>='A')&&(*str<='Z'))
        {
            cout<<*str;
        }
        str++;
    }
}

int main()
{
    char arr[50];
    scanf("%[^'\n']s",arr);
    DisplayCap(arr);
}