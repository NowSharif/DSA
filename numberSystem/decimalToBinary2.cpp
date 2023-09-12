
// ----------Convert a number from Decimal to Binary using Bitwise Operators-----

#include <iostream>
#include <cmath>
using namespace std;

int main(){
  int num;

  cout << "Enter a decimal number(in base 10): " << endl;
  cin >> num;

  int num2 = num;
  float ans =0, i=0;
  while(num>0){
    int rem = (num&1);
    ans+= rem*pow(10, i++);
    num>>=1;
    
  }

  cout << "The binary value of " << num2 <<  "(in base 2) is: " << ans << endl;
  

    return 0;
}


/*

Output:
Enter a decimal number(in base 10): 
18
The binary value of 18(in base 2) is: 10010


*/