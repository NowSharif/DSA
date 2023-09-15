#include <iostream>
using namespace std;
int maxOfThreeMethod1(int num1, int num2, int num3){
  if(num1>=num2 && num1>=num3){
    return num1;
  }
  else if(num2>=num1 && num2>=num3){
    return num2;
  }
  else{
    return num3;
  }

  return 0;
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


  int ans = maxOfThreeMethod1(num1, num2, num3);

 cout << "Maximum among " << num1 << " , " << num2 << " and " << num3 << " is: "
<< ans << endl;

  return 0;
}


/*
Enter the first number:
7894
Enter the second number:
-5246
Enter the third number:
21
Maximum among 7894 , -5246 and 21 is: 7894


*/