
//Program to print the average of give three numbers
#include <iostream>
using namespace std;

int main() {

int num1, num2, num3;
cout << "This is a program to return average of 3 numbers" <<endl;
cout << "Enter first number" <<endl;
cin >> num1;

cout << "Enter second number" <<endl;
cin >> num2;

cout << "Enter third number" <<endl;
cin >> num3;

float average = float(num1 + num2 + num3)/(3.0);

cout<< "Average of " << num1 << ", " << num2 << " and " << num3 << " is: " <<
average <<endl;

return 0;
}



/*
Output:

Enter first number
>> 99
Enter second number
>> 56
Enter third number
>> 45
Average of 99, 56 and 45 is: 66.6667


*/