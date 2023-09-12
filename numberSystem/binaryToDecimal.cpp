
// ----------------Convert from Binary to Decimal using Arithmetic Operators--------

#include <iostream>
#include <cmath>
using namespace std;

int main(){

  int num;
  cout << "Enter a binary number(in base 2)" << endl;
  cin >> num;
  int  num2 = num;
  float ans = 0, i=0;
  int lsb;
  while(num>0){
    lsb = num%10;
    ans+= lsb*pow(2, i++);
    num/=10;
  }

  cout << "The decimal equivalent of " << num2 << "(in base 10) is: " << ans << endl;

    return 0;
}

/*
Output:

Enter a binary number(in base 2)
1101
The decimal equivalent of 1101(in base 10) is: 13

*/