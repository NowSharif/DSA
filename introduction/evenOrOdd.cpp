
//Program to print whether a number is Even or Odd
#include <iostream>
using namespace std;

int main(){
  int num;
  cout<< "Enter a number" <<endl;
  cin>> num;

  if(num%2==0){
    cout << "You've Entered an Even number" <<endl;
  }
  else{
    cout << "You've entered an Odd number" << endl;
  }

    return 0;
}



/*

Enter a number
46
You've Entered an Even number

*/