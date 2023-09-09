
// Program to find factorial of a number
#include <iostream>
using namespace std;

int main(){

    int num;
  cout << "Enter the value of N: " << endl;
  cin >> num;

  int temp=num, fact=1;

  while(temp>=1){
    fact*=temp;
    temp--;
  }

  cout << "The factorial of " << num << " is: " << fact << endl;
 

    return 0;
}


/*
Output:

Enter the value of N: 
5
The factorial of 5 is: 120

*/