//Program to reverse a given integer 
// Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.

//Assume the environment does not allow you to store 64-bit integers (signed or unsigned).

#include <iostream>
#include <limits.h>
using namespace std;

int main(){
  int n;
  bool isNegative = false;
  cout << "Enter an integer:" << endl;
  cin >> n;
  int num = n;
  if(n<= INT_MIN){
    return 0;
  }

  if(n < 0){
    n = -n;
    isNegative = true;
  }
  int ans = 0;
  while(n){
    int lsb = n%10;

    if(ans > INT_MAX/10){
      return 0;
    }
    ans = ans*10 + lsb;
    n/=10;
  }

  ans = isNegative? -ans : ans;
  cout << "The reverse of " << num << " is: " << ans << endl;

  return 0;
}


/*
sample test case:

Enter an integer:
987625
The reverse of 987625 is: 526789


*/