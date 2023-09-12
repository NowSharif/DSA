
//Program to print numbers from 1 to N
#include <iostream>
using namespace std;

int main(){

  int num, temp=1;
  cout<< "Enter a number" <<endl;
  cin>> num;
  cout << "Printing numbers from 1 to "<< num << endl;
  while(temp<=num){
    cout << temp <<endl;
    temp++;
  }

return 0;
}


/*

Output:

Enter a number
9
Printing numbers from 1 to 9
1
2
3
4
5
6
7
8
9

*/