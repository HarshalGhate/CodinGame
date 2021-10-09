/*
A diagonal of a polygon is defined as a segment joining any two non-consecutive vertices of the polygon.
How many diagonals are there in a convex polygon with N vertices?
Input:
    N, the number of vertices
Output:
    D, the number of diagonals
Constraints:
3 ≤ N ≤ 134217728
Example:

Input:
4
Output:
2
*/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;


int fun(int n)
{
    
   
    int dig=0;
   dig=n*(n-3)/2;
    return dig;
}
int main()
{
    int N,iRet=0;
    cin>>N;
    iRet=fun(N);
    cout<<iRet;
    
}
/*if((n<=3)&&(n<=134627722))
    {
        cout<<"Out Of Range\n";
    }
     if(n<0)
    {
        n=-n;
    }*/