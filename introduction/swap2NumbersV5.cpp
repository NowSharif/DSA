//Swapping 2 numbers using swap()
#include <iostream>
using namespace std;


int main(){
  int a, b;
  cout << "Enter the value of a: " << endl;
  cin >> a;

  cout << "Enter the value of b: " << endl;
  cin >> b;
  
  swap(a, b);

  cout << "After swapping: " << endl;
  cout << "a= " << a << " , b= " << b << endl;
  return 0;
}


/*
Enter the value of a: 
324
Enter the value of b:
99
After swapping:
a= 99 , b= 324

*/