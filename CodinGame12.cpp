/*
A contribution by JoshL
 Approved by Numb_,Unnamed CodinGamerandndc
The game mode is REVERSE: You do not have access to the statement. You have to guess what to do by observing the following set of tests:
01 Test 1
Input
Expected output
Hello, world!
6
02 Test 2
Input
Expected output
Hello there, I am a string.
13
03 Test 3
Input
Expected output
Can you figure out the solution to this puzzle?
23
04 Test 4
Input
Expected output
You can do it! I believe in you!
16
*/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;


int Display(char *str)
{   
    int iCnt=0;
    while(*str!='\0')
    {   
        if(*str!=',')
        {
           iCnt++; 
        }
        str++;
    }
    return iCnt/2;
    
}

int main()
{
    int iRet=0;
   char arr[100];
   scanf("%[^'\n']s",arr);
   iRet=Display(arr);
   cout<<iRet;
}