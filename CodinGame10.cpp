/*
Create a rectangle based on the specified height and width parameters. Use the letter "O" (Case-Sensitive) as the character making up the rectangle.
Input
Line 1: The height of the rectangle.
Line 2: The width of the rectangle.
Output
A string that displays a rectangle.
Constraints
0 < height < 100
0 < width < 100
Example
Input
2
2
Output
OO
OO
*/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int height;
    cin >> height; cin.ignore();
    int width;
    cin >> width; cin.ignore();

    for(int i=1;i<=height;i++)
    {
        for(int j=1;j<=width;j++)
        {
            cout<<"O";
        }
        cout<<"\n";
    }
}