// Program to find whether the given sides make a valid triangle or not
#include <iostream>
using namespace std;

int main(){
  int side1, side2, side3;
  cout << "Enter the first side of the triangle: " << endl;
  cin >> side1;

  cout << "Enter the second side of the triangle: " << endl;
  cin >> side2;

  cout << "Enter the third side of the triangle: " << endl;
  cin >> side3;

  //sum of every 2 sides should be greater than third side
  //(a + b <= c || a + c <= b || b + c <= a)

  if((side1 + side2 > side3) && (side2+side3 > side1) &&(side1+side3 > side2)){
        cout << "The triangle is valid!" << endl;
  }
  else{
    cout << "The triangle is invalid!!" <<endl;
  }
return 0;
}




/*
Output:
Enter the first side of the triangle: 
10
Enter the second side of the triangle:
5
Enter the third side of the triangle:
3
The triangle is invalid!!


./isValidTriangle.cpp
Enter the first side of the triangle: 
3
Enter the second side of the triangle:
4
Enter the third side of the triangle:
5
The triangle is valid!

*/