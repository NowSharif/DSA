
// ----------------Convert from Binary to Decimal using Arithmetic and Bitwise Operators--------

#include <iostream>
#include <cmath>
using namespace std;

int main(){

  int num;
  cout << "Enter a binary number(in base 2)" << endl;
  cin >> num;
  int  num2 = num, i=0;
  int ans = 0;
  
  while(num>0){
    int lsb = (num%10);
    ans+= (lsb<<i++);
    num = num/10;
  }

  cout << "\nThe decimal equivalent of " << num2 << "(in base 10) is: " << ans << endl;

    return 0;
}



/*
Output:
Enter a binary number(in base 2)
11011

The decimal equivalent of 11011(in base 10) is: 27

*/