

// Program to Print even numbers between 1 to N
#include <iostream>
using namespace std;

int main(){

  int num;
  cout << "Enter the value of N"<<endl;
  cin >> num;
  int temp=2;
  cout << "Even numbers between 1 and " << num << " are: " << endl;
  while(temp<=num){
    if(temp%2==0){
      cout << temp << endl;
    }
    temp++;
  }

return 0;
}



/*
Output:

Enter the value of N
10
Even numbers between 1 and 10 are:
2
4
6
8
10

*/