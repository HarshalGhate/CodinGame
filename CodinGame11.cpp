/*
A contribution by DR1Rush
 Approved by Randrian,SchwaseandDelfic
 	Goal
Given a number N sum up all even numbers from 2 to N.
Input
Line 1: The number N
Output
Line 1: An integer K, the sum of all even numbers in the range 2 to N (Inclusive).
Constraints
2 <= N <=10000
2 <= K <= 25005000
Example
Input
10
Output
30
*/
#include <iostream>
#include <string>


using namespace std;

int main()
{
    int n;
    cin >> n; cin.ignore();
    int iSum=0;
    for(int i=2;i<=n;i++)
    {
        if(i%2==0)
        {
            iSum+=i;
        }
    }
    
    cout <<iSum<< endl;
}