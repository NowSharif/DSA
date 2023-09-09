// Program to find whether a number if Prime or Composite
#include <iostream>
using namespace std;

int main(){

int num;
  cout << "Enter the number: " << endl;
  cin >> num;

  int temp=2;
  while(temp<num/2){
    if(num%temp ==0){
      cout << num <<" is a composite number." << endl;
      return 0;
    }
    temp++;
  }
  cout << num << " is a prime number." << endl;
  
return 0;
}


/*
Output:
Enter the number: 
97
97 is a prime number.

*/