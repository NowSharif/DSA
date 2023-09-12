// Program to convert a number from Decimal(base 10) to Binary(base 2)
#include <iostream>
#include <cmath>
using namespace std;

int main(){
  int num;
  cout << "Enter a decimal number(in base 10): " << endl;
  cin >> num;
  int num2 = num;
  int ans =0, i=0;
  while(num>0){
    int rem = num%2;
    ans = ans + rem*pow(10, i++);
    num/=2;
    
  }

  cout << "The binary value of " << num2 <<  "(in base 2) is: " << ans << endl;


    return 0;
}