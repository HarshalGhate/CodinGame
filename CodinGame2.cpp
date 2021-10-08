/*
The citizens of Byteland regularly play a game. They have blocks each denoting some integer from 0 to 9. These are arranged together in a random manner without seeing to form different numbers keeping in mind that the first block is never a 0. Once they form a number they read in the reverse order to check if the number and its reverse is the same. If both are same then the player wins. We call such numbers palindrome.

Ash happens to see this game and wants to simulate the same in the computer. As the first step he wants to take an input from the user and check if the number is a palindrome and declare if the user wins or not.

Input:
    N is an Integer.
Output:
    For each input output "wins" if the number is a palindrome and "loses" .
Constraints:
    1<=N<=20000
Example:
Input:
    131
Output:
    wins
*/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool Rev(int iNo)
 {
     int temp=iNo,iDigit=0,iRev=0;
     while(temp!=0)
     {
        iDigit=temp%10;
        iRev=iRev*10+iDigit;
        temp=temp/10;
     }
     if(iNo==iRev)
     {
         return true;
     }
     else
     {
         return false;
     }
     
 }

int main()
{
    int iValue=0,bRet=false;
    cin>>iValue;

    bRet=Rev(iValue);
    
     if(bRet==true)
     {
         cout<<"wins";
     }
     else
     {
         cout<<"loses";
     }

    return 0;
}