/*
A contribution by nomeata
The game mode is REVERSE: You do not have access to the statement. You have to guess what to do by observing the following set of tests:
01 Test 1

Input :1
Expected output : 1

02 Test 2
Input : 2
Expected output :2
                 22
03 Test 3
Input Expected output
5           5
            55
            555
            5555
            55555
04 Test 4
Input      Expected output
6                   6
                    66
                    666
                    6666
                    66666
                    666666
05 Test 5
Input      Expected output
9                   9
                    99
                    999
                    9999
                    99999
                    999999
                    9999999
                    99999999
                    999999999
*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n; cin.ignore();

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i>=j)
            {
                printf("%d",n);
            }    
        }
        printf("\n");
    }
    //cout << "answer" << endl;
}