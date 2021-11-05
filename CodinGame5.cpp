/*
A contribution by nevalena
 Approved by joniebear,aetrnmandsimon-tiger
The game mode is REVERSE: You do not have access to the statement. You have to guess what to do by observing the following set of tests:
01 Test 1
Input : Hello
Expected output : Hll

02 Test 2
Input :  This Is a sentence
Expected output : Ths s  sntnc


03 Test 3
Input : abcdefghijklmnopqrstuvwxyz
Expected output : bcdfghjklmnpqrstvwxyz


04 Test 4
Input  : aeiouy
Expected output : y

*/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

void Display(char *str)
{
    while(*str!='\0')
    {
        if((*str!='a')&&(*str!='e')&&(*str!='i')&&(*str!='o')&&(*str!='u')&&(*str!='A')&&(*str!='E')&&(*str!='I')&&(*str!='O')&&(*str!='U'))
        {
            cout<<*str;
        }
        str++;
    }    
}

int main()
{
    char arr[100];
    scanf("%[^'\n']s",arr);
    
    Display(arr);
}