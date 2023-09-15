//Swapping 2 numbers using temporary variable
#include <iostream>
using namespace std;

void swap4(int &a, int &b){
  int temp = a;
  a = b;
  b = temp;
}
int main(){
  int a, b;
  cout << "Enter the value of a: " << endl;
  cin >> a;

  cout << "Enter the value of b: " << endl;
  cin >> b;
  
  swap4(a, b);

  cout << "After swapping: " << endl;
  cout << "a= " <<a << " , b= " << b << endl;
  return 0;
}



/*
Enter the value of a: 
124
Enter the value of b:
987
After swapping:
a= 987 , b= 124

*/