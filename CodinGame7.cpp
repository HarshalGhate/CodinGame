/*
A contribution by envifly
 Approved by Saturne,ChiefChippy2andArseniyFokin
 	Goal
You must output the surface area of the given dimensions of a rectangular prism, cuboid, or box
Input
Three Integers: length width height for the dimensions of the rectangular prism
Output
Output the surface area of the given rectangular prism
Constraints
0<length, width, height <3000
Example
Input
3
4
5
Output
94
*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;



int main()
{
    int length,ans=0;
    cin >> length; cin.ignore();
    int width;
    cin >> width; cin.ignore();
    int height;
    cin >> height; cin.ignore();
    //TSA of rectangular prism =2(lb + bh + lh)
    ans=2*((length*width)+(width*height)+(length*height));
    cout <<ans<< endl;
}