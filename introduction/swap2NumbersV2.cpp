//Swapping 2 numbers using multiplication and division
#include <iostream>
using namespace std;

void swap2(int &a, int &b){
  a = a*b;
  b = a/b;
  a = a/b;
}
int main(){
  int a, b;
  cout << "Enter the value of a: " << endl;
  cin >> a;

  cout << "Enter the value of b: " << endl;
  cin >> b;
  
  swap2(a, b);
  cout << "After swapping:" << endl;
  cout << "a= " <<a << " , b= " << b << endl;
  return 0;
}


/*
sample test case:

Enter the value of a: 
985
Enter the value of b:
-456
After swapping:
a= -456 , b= 985

*/
