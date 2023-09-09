// Program to Find the Compound Interest

#include <iostream>
using namespace std;

int main(){
  int principal, time, rateOfInterest;
  cout << "Enter the principal value: " <<endl;
  cin >> principal ;

  cout << "Enter the time value in years: " <<endl;
  cin >> time ;

  cout << "Enter the rateOfInterest value: " <<endl;
  cin >> rateOfInterest ;

  float compoundInterest = principal + float(principal* time*rateOfInterest)/100;

  cout << "The Compound Interest is: " << compoundInterest << endl;

    return 0;
}



/*
Output:

Enter the principal value: 
10
Enter the time value in years:
1
Enter the rateOfInterest value:
2
The Compound Interest is: 10.2


*/