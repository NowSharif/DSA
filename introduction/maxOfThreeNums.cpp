//Program to print maximum of the entered 3 numbers

#include <iostream>
using namespace std;

int main(){

  int num1, num2, num3;

  cout << "Enter the first number: " << endl;
  cin >> num1;

  cout << "Enter the second number: " << endl;
  cin >> num2;

  cout << "Enter the third number: " << endl;
  cin >> num3;

  if(num1>=num2 && num1>=num3){
    cout << num1 << " is the maximum" << endl;
  }
  else if(num2>=num1 && num2>=num3){
    cout << num2 << " is the maximum" << endl;
  }
  else{
    cout << num3 << " is the maximum" << endl;
  }

    return 0;
}


/*
Output:
Enter the first number: 
99
Enter the second number:
-8
Enter the third number:
-102
99 is the maximum

*/