
//Program to print sum of the given two numbers
#include <iostream>
#include <cmath>
using namespace std;

int main() {

  int num1, num2;
  cout << "Enter the first number:" << endl;
  cin >> num1;

  cout << "Enter the second number: " << endl;
  cin >> num2;

  int sum = num1 + num2;
  cout << "Sum of " <<  num1 << " and " << num2 << " is: "<< sum <<endl;

  return 0;
}

/*
Output:

Enter the first number:
12
Enter the second number:
-144
Sum of 12 and -144 is: -132

*/