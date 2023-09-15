
//Swapping 2 numbers using addition and subraction

#include <iostream>
using namespace std;

void swap1(int &a, int &b){
  a = a+b;
  b = a-b;
  a = a-b;
}
int main(){
  int a, b;
  cout << "Enter the value of a: " << endl;
  cin >> a;

  cout << "Enter the value of b: " << endl;
  cin >> b;
  
  swap1(a, b);
  cout << "After swap: " << endl;
  cout << "a= " <<a << " , b= " << b << endl;
  return 0;
}


/*
sample test case:

Enter the value of a: 
-1234
Enter the value of b:
8977
After swap:
a= 8977 , b= -1234



*/