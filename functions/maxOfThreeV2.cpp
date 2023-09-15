#include <iostream>
using namespace std;


int maxOfThreeMethod2(int num1, int num2, int num3){
  int ans1 = max(num1, num2);
  int ansFinal = max(ans1, num3);

  return ansFinal;

}

int main(){
  int num1, num2, num3;

  cout << "Program to find max of 3 numbers" << endl << endl;
  cout << "Enter the first number: " << endl;
  cin >> num1 ;

  cout << "Enter the second number: " << endl;
  cin >> num2 ;

  cout << "Enter the third number: " << endl;
  cin >> num3 ;


  int ans = maxOfThreeMethod2(num1, num2, num3);

 cout << "Maximum among " << num1 << " , " << num2 << " and " << num3 << " is: "
<< ans << endl;

  return 0;
}



/*
sample test case:

Enter the first number:
-144
Enter the second number:
98552
Enter the third number:
7462986
Maximum among -144 , 98552 and 7462986 is: 7462986

*/