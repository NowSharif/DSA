//Swapping 2 numbers using XOR
#include <iostream>
using namespace std;

void swap3(int &a, int &b){
  a = a^b;
  b = a^b;
  a = a^b;
}
int main(){
  int a, b;
  cout << "Enter the value of a: " << endl;
  cin >> a;

  cout << "Enter the value of b: " << endl;
  cin >> b;
  
  swap3(a, b);
  cout << "After swapping\n";
  cout << "a= " <<a << " , b= " << b << endl;
  return 0;
}



/*
sample test case:

Enter the value of a: 
126
Enter the value of b:
99
After swapping
a= 99 , b= 126

*/