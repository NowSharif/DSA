// Program to print perimeter of a triangle taking its sides as input
#include <iostream>
using namespace std;

int main(){

  int side1, side2, side3;
  cout << "Enter the first side of the triangle: " <<endl;
  cin >> side1;

  cout << "Enter the second side of the triangle" <<endl;
  cin >> side2;

  cout << "Enter the third side of the triangle" <<endl;
  cin >> side3;

  int perimeterOfTriangle = side1 + side2 + side3;
  cout << "Perimeter of the triangle is: " << perimeterOfTriangle << endl;
  


    return 0;
}



/*

Enter the first side of the triangle: 
15
Enter the second side of the triangle
20
Enter the third side of the triangle
10
Perimeter of the triangle is: 45

*/